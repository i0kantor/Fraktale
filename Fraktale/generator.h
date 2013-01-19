#ifndef GENERATOR_H
#define GENERATOR_H
#include<QPixmap>
#include<stdio.h>
#include<QColor>

class Generator
{
public:
    Generator();

    QPixmap generateSquare(double factors[][6] ,double prob[],long iterations,int width,int heigth);

private:
    QPixmap image;
};

#endif // GENERATOR_H
