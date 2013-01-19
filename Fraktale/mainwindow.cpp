#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->xSizeEdit->setText("640");

    ui->ySizeEdit->setText("480");

    ui->iterationsEdit->setText("10000");

    ui->squaresEdit->setText("10");

    setUpFactors();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setUpFactors()
{
    factors[0][0][0] = 0.14;
    factors[0][0][1] = 0.01;
    factors[0][0][2] = 0.0;
    factors[0][0][3] = 0.51;
    factors[0][0][4] = -1.31;
    factors[0][0][5] = 0.1;
    factors[0][0][6] = 0.1;
    factors[0][1][0] = 0.43;
    factors[0][1][1] = 0.52;
    factors[0][1][2] = -0.45;
    factors[0][1][3] = 0.5;
    factors[0][1][4] = 1.49;
    factors[0][1][5] = -0.75;
    factors[0][1][6] = 0.35;
    factors[0][2][0] = 0.45;
    factors[0][2][1] = -0.49;
    factors[0][2][2] = 0.47;
    factors[0][2][3] = 0.47;
    factors[0][2][4] = -1.62;
    factors[0][2][5] = -0.74;
    factors[0][2][6] = 0.35;
    factors[0][3][0] = 0.49;
    factors[0][3][1] = 0.0;
    factors[0][3][2] = 0.0;
    factors[0][3][3] = 0.51;
    factors[0][3][4] = 0.02;
    factors[0][3][5] = 1.62;
    factors[0][3][6] = 0.2;
    factors[0][4][0] = 0.0;
    factors[0][4][1] = 0.0;
    factors[0][4][2] = 0.0;
    factors[0][4][3] = 0.0;
    factors[0][4][4] = 0.0;
    factors[0][4][5] = 0.0;
    factors[0][4][6] = 0.0;
    factors[1][0][0] = 0.0;
    factors[1][0][1] = 0.0;
    factors[1][0][2] = 0.0;
    factors[1][0][3] = 0.16;
    factors[1][0][4] = 0.0;
    factors[1][0][5] = 0.0;
    factors[1][0][6] = 0.01;
    factors[1][1][0] = 0.85;
    factors[1][1][1] = 0.04;
    factors[1][1][2] = -0.04;
    factors[1][1][3] = 0.85;
    factors[1][1][4] = 0.0;
    factors[1][1][5] = 1.6;
    factors[1][1][6] = 0.85;
    factors[1][2][0] = 0.2;
    factors[1][2][1] = -0.26;
    factors[1][2][2] = 0.23;
    factors[1][2][3] = 0.22;
    factors[1][2][4] = 0.0;
    factors[1][2][5] = 1.6;
    factors[1][2][6] = 0.07;
    factors[1][3][0] = -0.15;
    factors[1][3][1] = 0.28;
    factors[1][3][2] = 0.26;
    factors[1][3][3] = 0.24;
    factors[1][3][4] = 0.0;
    factors[1][3][5] = 0.44;
    factors[1][3][6] = 0.07;
    factors[1][4][0] = 0.0;
    factors[1][4][1] = 0.0;
    factors[1][4][2] = 0.0;
    factors[1][4][3] = 0.0;
    factors[1][4][4] = 0.0;
    factors[1][4][5] = 0.0;
    factors[1][4][6] = 0.0;
    factors[2][0][0] = 0.824;
    factors[2][0][1] = 0.281;
    factors[2][0][2] = -0.212;
    factors[2][0][3] = 0.864;
    factors[2][0][4] = -1.882;
    factors[2][0][5] = -0.111;
    factors[2][0][6] = 0.787;
    factors[2][1][0] = 0.088;
    factors[2][1][1] = 0.521;
    factors[2][1][2] = -0.464;
    factors[2][1][3] = -0.378;
    factors[2][1][4] = 0.785;
    factors[2][1][5] = 8.096;
    factors[2][1][6] = 0.213;
    factors[2][2][0] = 0.0;
    factors[2][2][1] = 0.0;
    factors[2][2][2] = 0.0;
    factors[2][2][3] = 0.0;
    factors[2][2][4] = 0.0;
    factors[2][2][5] = 0.0;
    factors[2][2][6] = 0.0;
    factors[2][3][0] = 0.0;
    factors[2][3][1] = 0.0;
    factors[2][3][2] = 0.0;
    factors[2][3][3] = 0.0;
    factors[2][3][4] = 0.0;
    factors[2][3][5] = 0.0;
    factors[2][3][6] = 0.0;
    factors[2][4][0] = 0.0;
    factors[2][4][1] = 0.0;
    factors[2][4][2] = 0.0;
    factors[2][4][3] = 0.0;
    factors[2][4][4] = 0.0;
    factors[2][4][5] = 0.0;
    factors[2][4][6] = 0.0;
    factors[3][0][0] = 0.788;
    factors[3][0][1] = -0.424;
    factors[3][0][2] = 0.242;
    factors[3][0][3] = 0.86;
    factors[3][0][4] = 1.759;
    factors[3][0][5] = 1.408;
    factors[3][0][6] = 0.896;
    factors[3][1][0] = -0.121;
    factors[3][1][1] = 0.258;
    factors[3][1][2] = 0.152;
    factors[3][1][3] = 0.053;
    factors[3][1][4] = -6.722;
    factors[3][1][5] = 1.377;
    factors[3][1][6] = 0.052;
    factors[3][2][0] = 0.182;
    factors[3][2][1] = -0.136;
    factors[3][2][2] = 0.091;
    factors[3][2][3] = 0.182;
    factors[3][2][4] = 6.086;
    factors[3][2][5] = 1.568;
    factors[3][2][6] = 0.052;
    factors[3][3][0] = 0.0;
    factors[3][3][1] = 0.0;
    factors[3][3][2] = 0.0;
    factors[3][3][3] = 0.0;
    factors[3][3][4] = 0.0;
    factors[3][3][5] = 0.0;
    factors[3][3][6] = 0.0;
    factors[3][4][0] = 0.0;
    factors[3][4][1] = 0.0;
    factors[3][4][2] = 0.0;
    factors[3][4][3] = 0.0;
    factors[3][4][4] = 0.0;
    factors[3][4][5] = 0.0;
    factors[3][4][6] = 0.0;
    factors[4][0][0] = 0.5;
    factors[4][0][1] = 0.0;
    factors[4][0][2] = 0.0;
    factors[4][0][3] = 0.5;
    factors[4][0][4] = -0.5;
    factors[4][0][5] = 0.5;
    factors[4][0][6] = 0.333;
    factors[4][1][0] = 0.5;
    factors[4][1][1] = 0.0;
    factors[4][1][2] = 0.0;
    factors[4][1][3] = 0.5;
    factors[4][1][4] = -0.5;
    factors[4][1][5] = -0.5;
    factors[4][1][6] = 0.333;
    factors[4][2][0] = 0.5;
    factors[4][2][1] = 0.0;
    factors[4][2][2] = 0.0;
    factors[4][2][3] = 0.5;
    factors[4][2][4] = 0.5;
    factors[4][2][5] = -0.5;
    factors[4][2][6] = 0.334;
    factors[4][3][0] = 0.0;
    factors[4][3][1] = 0.0;
    factors[4][3][2] = 0.0;
    factors[4][3][3] = 0.0;
    factors[4][3][4] = 0.0;
    factors[4][3][5] = 0.0;
    factors[4][3][6] = 0.0;
    factors[4][4][0] = 0.0;
    factors[4][4][1] = 0.0;
    factors[4][4][2] = 0.0;
    factors[4][4][3] = 0.0;
    factors[4][4][4] = 0.0;
    factors[4][4][5] = 0.0;
    factors[4][4][6] = 0.0;
    factors[5][0][0] = 0.381;
    factors[5][0][1] = 0.0;
    factors[5][0][2] = 0.0;
    factors[5][0][3] = 0.381;
    factors[5][0][4] = 0.0;
    factors[5][0][5] = 0.0;
    factors[5][0][6] = 0.2;
    factors[5][1][0] = 0.381;
    factors[5][1][1] = 0.0;
    factors[5][1][2] = 0.0;
    factors[5][1][3] = 0.381;
    factors[5][1][4] = 0.617;
    factors[5][1][5] = 0.0;
    factors[5][1][6] = 0.2;
    factors[5][2][0] = 0.381;
    factors[5][2][1] = 0.0;
    factors[5][2][2] = 0.0;
    factors[5][2][3] = 0.381;
    factors[5][2][4] = 0.809;
    factors[5][2][5] = 0.587;
    factors[5][2][6] = 0.2;
    factors[5][3][0] = 0.381;
    factors[5][3][1] = 0.0;
    factors[5][3][2] = 0.0;
    factors[5][3][3] = 0.381;
    factors[5][3][4] = 0.308;
    factors[5][3][5] = 0.95;
    factors[5][3][6] = 0.2;
    factors[5][4][0] = 0.381;
    factors[5][4][1] = 0.0;
    factors[5][4][2] = 0.0;
    factors[5][4][3] = 0.381;
    factors[5][4][4] = -0.19;
    factors[5][4][5] = 0.587;
    factors[5][4][6] = 0.2;
}

void MainWindow::on_startButton_clicked()
{
    double x;
    x=(ui->xSizeEdit->text()).toDouble();
    qDebug()<<x;

    double tab[2][5][6];
    getFactors(tab);
    qDebug()<<tab[0][0][0];
}

void MainWindow::on_fraktal1ComboBox_activated(int index)
{
    ui->A11->setText(QString::number((factors[index][0][0])));
    ui->B11->setText(QString::number((factors[index][0][1])));
    ui->C11->setText(QString::number((factors[index][0][2])));
    ui->D11->setText(QString::number((factors[index][0][3])));
    ui->E11->setText(QString::number((factors[index][0][4])));
    ui->F11->setText(QString::number((factors[index][0][5])));
    ui->P11->setText(QString::number((factors[index][0][6])));

    ui->A12->setText(QString::number((factors[index][1][0])));
    ui->B12->setText(QString::number((factors[index][1][1])));
    ui->C12->setText(QString::number((factors[index][1][2])));
    ui->D12->setText(QString::number((factors[index][1][3])));
    ui->E12->setText(QString::number((factors[index][1][4])));
    ui->F12->setText(QString::number((factors[index][1][5])));
    ui->P12->setText(QString::number((factors[index][1][6])));

    ui->A13->setText(QString::number((factors[index][2][0])));
    ui->B13->setText(QString::number((factors[index][2][1])));
    ui->C13->setText(QString::number((factors[index][2][2])));
    ui->D13->setText(QString::number((factors[index][2][3])));
    ui->E13->setText(QString::number((factors[index][2][4])));
    ui->F13->setText(QString::number((factors[index][2][5])));
    ui->P13->setText(QString::number((factors[index][2][6])));

    ui->A14->setText(QString::number((factors[index][3][0])));
    ui->B14->setText(QString::number((factors[index][3][1])));
    ui->C14->setText(QString::number((factors[index][3][2])));
    ui->D14->setText(QString::number((factors[index][3][3])));
    ui->E14->setText(QString::number((factors[index][3][4])));
    ui->F14->setText(QString::number((factors[index][3][5])));
    ui->P14->setText(QString::number((factors[index][3][6])));

    ui->A15->setText(QString::number((factors[index][4][0])));
    ui->B15->setText(QString::number((factors[index][4][1])));
    ui->C15->setText(QString::number((factors[index][4][2])));
    ui->D15->setText(QString::number((factors[index][4][3])));
    ui->E15->setText(QString::number((factors[index][4][4])));
    ui->F15->setText(QString::number((factors[index][4][5])));
    ui->P15->setText(QString::number((factors[index][4][6])));

}

void MainWindow::on_fraktal2ComboBox_activated(int index)
{
    ui->A21->setText(QString::number((factors[index][0][0])));
    ui->B21->setText(QString::number((factors[index][0][1])));
    ui->C21->setText(QString::number((factors[index][0][2])));
    ui->D21->setText(QString::number((factors[index][0][3])));
    ui->E21->setText(QString::number((factors[index][0][4])));
    ui->F21->setText(QString::number((factors[index][0][5])));
    ui->P21->setText(QString::number((factors[index][0][6])));

    ui->A22->setText(QString::number((factors[index][1][0])));
    ui->B22->setText(QString::number((factors[index][1][1])));
    ui->C22->setText(QString::number((factors[index][1][2])));
    ui->D22->setText(QString::number((factors[index][1][3])));
    ui->E22->setText(QString::number((factors[index][1][4])));
    ui->F22->setText(QString::number((factors[index][1][5])));
    ui->P22->setText(QString::number((factors[index][1][6])));

    ui->A23->setText(QString::number((factors[index][2][0])));
    ui->B23->setText(QString::number((factors[index][2][1])));
    ui->C23->setText(QString::number((factors[index][2][2])));
    ui->D23->setText(QString::number((factors[index][2][3])));
    ui->E23->setText(QString::number((factors[index][2][4])));
    ui->F23->setText(QString::number((factors[index][2][5])));
    ui->P23->setText(QString::number((factors[index][2][6])));

    ui->A24->setText(QString::number((factors[index][3][0])));
    ui->B24->setText(QString::number((factors[index][3][1])));
    ui->C24->setText(QString::number((factors[index][3][2])));
    ui->D24->setText(QString::number((factors[index][3][3])));
    ui->E24->setText(QString::number((factors[index][3][4])));
    ui->F24->setText(QString::number((factors[index][3][5])));
    ui->P24->setText(QString::number((factors[index][3][6])));

    ui->A25->setText(QString::number((factors[index][4][0])));
    ui->B25->setText(QString::number((factors[index][4][1])));
    ui->C25->setText(QString::number((factors[index][4][2])));
    ui->D25->setText(QString::number((factors[index][4][3])));
    ui->E25->setText(QString::number((factors[index][4][4])));
    ui->F25->setText(QString::number((factors[index][4][5])));
    ui->P25->setText(QString::number((factors[index][4][6])));
}

void MainWindow::getFactors(double tab[][5][6])
{
    tab[0][0][0]=(ui->A11->text()).toDouble();
    tab[0][0][1]=(ui->B11->text()).toDouble();
    tab[0][0][2]=(ui->C11->text()).toDouble();
    tab[0][0][3]=(ui->D11->text()).toDouble();
    tab[0][0][4]=(ui->E11->text()).toDouble();
    tab[0][0][5]=(ui->F11->text()).toDouble();

    tab[0][1][0]=(ui->A12->text()).toDouble();
    tab[0][1][1]=(ui->B12->text()).toDouble();
    tab[0][1][2]=(ui->C12->text()).toDouble();
    tab[0][1][3]=(ui->D12->text()).toDouble();
    tab[0][1][4]=(ui->E12->text()).toDouble();
    tab[0][1][5]=(ui->F12->text()).toDouble();

    tab[0][2][0]=(ui->A13->text()).toDouble();
    tab[0][2][1]=(ui->B13->text()).toDouble();
    tab[0][2][2]=(ui->C13->text()).toDouble();
    tab[0][2][3]=(ui->D13->text()).toDouble();
    tab[0][2][4]=(ui->E13->text()).toDouble();
    tab[0][2][5]=(ui->F13->text()).toDouble();

    tab[0][3][0]=(ui->A14->text()).toDouble();
    tab[0][3][1]=(ui->B14->text()).toDouble();
    tab[0][3][2]=(ui->C14->text()).toDouble();
    tab[0][3][3]=(ui->D14->text()).toDouble();
    tab[0][3][4]=(ui->E14->text()).toDouble();
    tab[0][3][5]=(ui->F14->text()).toDouble();

    tab[0][4][0]=(ui->A15->text()).toDouble();
    tab[0][4][1]=(ui->B15->text()).toDouble();
    tab[0][4][2]=(ui->C15->text()).toDouble();
    tab[0][4][3]=(ui->D15->text()).toDouble();
    tab[0][4][4]=(ui->E15->text()).toDouble();
    tab[0][4][5]=(ui->F15->text()).toDouble();
    tab[0][4][6]=(ui->P15->text()).toDouble();

    tab[1][0][0]=(ui->A21->text()).toDouble();
    tab[1][0][1]=(ui->B21->text()).toDouble();
    tab[1][0][2]=(ui->C21->text()).toDouble();
    tab[1][0][3]=(ui->D21->text()).toDouble();
    tab[1][0][4]=(ui->E21->text()).toDouble();
    tab[1][0][5]=(ui->F21->text()).toDouble();

    tab[1][1][0]=(ui->A22->text()).toDouble();
    tab[1][1][1]=(ui->B22->text()).toDouble();
    tab[1][1][2]=(ui->C22->text()).toDouble();
    tab[1][1][3]=(ui->D22->text()).toDouble();
    tab[1][1][4]=(ui->E22->text()).toDouble();
    tab[1][1][5]=(ui->F22->text()).toDouble();

    tab[1][2][0]=(ui->A23->text()).toDouble();
    tab[1][2][1]=(ui->B23->text()).toDouble();
    tab[1][2][2]=(ui->C23->text()).toDouble();
    tab[1][2][3]=(ui->D23->text()).toDouble();
    tab[1][2][4]=(ui->E23->text()).toDouble();
    tab[1][2][5]=(ui->F23->text()).toDouble();

    tab[1][3][0]=(ui->A24->text()).toDouble();
    tab[1][3][1]=(ui->B24->text()).toDouble();
    tab[1][3][2]=(ui->C24->text()).toDouble();
    tab[1][3][3]=(ui->D24->text()).toDouble();
    tab[1][3][4]=(ui->E24->text()).toDouble();
    tab[1][3][5]=(ui->F24->text()).toDouble();

    tab[1][4][0]=(ui->A25->text()).toDouble();
    tab[1][4][1]=(ui->B25->text()).toDouble();
    tab[1][4][2]=(ui->C25->text()).toDouble();
    tab[1][4][3]=(ui->D25->text()).toDouble();
    tab[1][4][4]=(ui->E25->text()).toDouble();
    tab[1][4][5]=(ui->F25->text()).toDouble();
}

void MainWindow::getProbably(double tab[][5])
{
    tab[0][0]=(ui->P11->text()).toDouble();
    tab[0][1]=(ui->P12->text()).toDouble();
    tab[0][2]=(ui->P13->text()).toDouble();
    tab[0][3]=(ui->P14->text()).toDouble();
    tab[0][4]=(ui->P15->text()).toDouble();

    tab[1][0]=(ui->P21->text()).toDouble();
    tab[1][1]=(ui->P22->text()).toDouble();
    tab[1][2]=(ui->P23->text()).toDouble();
    tab[1][3]=(ui->P24->text()).toDouble();
    tab[1][4]=(ui->P25->text()).toDouble();
}
