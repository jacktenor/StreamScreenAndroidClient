#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHostAddress>
#include <QBuffer>
#include <QImageReader>
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , socket(new QTcpSocket(this))
    , imageLabel(new QLabel) // Initialize imageLabel as a new QLabel
{
    ui->setupUi(this);

    // Set up imageLabel as a separate window
    imageLabel->setWindowTitle("Android Screen Stream");
    imageLabel->setScaledContents(true);  // Allow QLabel to scale its contents
    imageLabel->setMinimumSize(450, 800);  // Set initial size for imageLabel window
    imageLabel->show();  // Show imageLabel as an independent window

    // Connect the readyRead signal to handle incoming data
    connect(socket, &QTcpSocket::readyRead, this, &MainWindow::on_readyRead);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete imageLabel; // Clean up imageLabel
}

void MainWindow::on_connectButton_clicked()
{
    QString ip = ui->ipLineEdit->text();
    quint16 port = ui->portLineEdit->text().toUInt();

    socket->connectToHost(QHostAddress(ip), port);
    if (!socket->waitForConnected(3000)) {
        QMessageBox::critical(this, "Connection Error", "Failed to connect to server!");
        return;
    }

    ui->connectButton->setEnabled(false);
    ui->connectButton->setText("Connected");
}

void MainWindow::on_readyRead()
{
    // Append incoming data to the buffer
    buffer.append(socket->readAll());

    // Try to find a JPEG frame in the buffer
    int startIdx = buffer.indexOf("\xFF\xD8"); // JPEG start marker
    int endIdx = buffer.indexOf("\xFF\xD9");   // JPEG end marker

    if (startIdx != -1 && endIdx != -1 && endIdx > startIdx) {
        // Extract the JPEG frame from buffer
        QByteArray jpegData = buffer.mid(startIdx, endIdx - startIdx + 2);
        buffer.remove(0, endIdx + 2); // Remove the processed frame from the buffer

        // Convert JPEG data to QImage
        QBuffer qBuffer(&jpegData);
        qBuffer.open(QIODevice::ReadOnly);
        QImageReader imageReader(&qBuffer, "JPEG");

        QImage image;
        if (imageReader.read(&image)) {
            // Successfully decoded the image
            imageLabel->setPixmap(QPixmap::fromImage(image).scaled(
                imageLabel->size(),
                Qt::KeepAspectRatio,
                Qt::SmoothTransformation));
        }
    }
}
