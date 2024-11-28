#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QImage>
#include <QLabel> // Add QLabel here

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_connectButton_clicked();
    void on_readyRead();

private:
    Ui::MainWindow *ui;
    QTcpSocket *socket;
    QByteArray buffer; // Buffer to store incoming image data
    QLabel *imageLabel; // Declare imageLabel as an independent QLabel window
};

#endif // MAINWINDOW_H
