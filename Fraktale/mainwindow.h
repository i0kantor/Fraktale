#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<generator.h>
#include<iostream>
#include<QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_startButton_clicked();

    void on_fraktal1ComboBox_activated(int index);

    void on_fraktal2ComboBox_activated(int index);

private:
    void getFactors(double tab[][5][6]);
    void getProbably(double tab[][5]);

    Ui::MainWindow *ui;
    void setUpFactors();
    double factors[6][5][7];
    Generator generator;

};

#endif // MAINWINDOW_H
