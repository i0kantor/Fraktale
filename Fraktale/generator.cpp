#include "generator.h"
#include<cstdlib>

Generator::Generator()
{

}

QPixmap Generator::generateSquare(double factors[][6], double prob[], long iterations, int width, int heigth)
{
    QPixmap image(width,heigth);
    image.fill(Qt::black);

    //Wylosowane prawdopodobienstwo
    int p;
    //Losowanie
    int los;
    // Wylosowane przekszta³cenie
    int current_afi;
    //Poczatkowe wspolczynniki
    double x=0.0;
    double y=0.0;

    double Xmin, Xmax, Ymin, Ymax;
    Xmin = Xmax = Ymin = Ymax = 0.0;


    for(long i=0;i<iterations;++i){
        int los=rand()%101;
        p=0.0;
        current_afi=0.0;

        for(int j=0;j<5;++j){
            p+=prob[j];
                if(p>los){
                current_afi=j;
                break;
                }
        }


        //Wlasciwy mechanizm algorytmu IFS.
        //curr oznacza wylosowany zestaw wspolczynnikow,
        //do wygenerowania wspolrzednych punktu.
        x = factors[current_afi][0]*x + factors[current_afi][2]*y + factors[current_afi][4];
        y = factors[current_afi][1]*x + factors[current_afi][3]*y + factors[current_afi][5];

        if(x < Xmin) Xmin = x;
        else if(x > Xmax) Xmax = x;

        if(y < Ymin) Ymin = y;
        else if(y > Ymax) Ymax = y;
    }

    double Xratio = (Xmax - Xmin) / (heigth-5); //Odejmujemy 10 dla marginesu
    double Yratio = (Ymax - Ymin) / (width-5);
    double ratio = Yratio;
    if(Xratio > Yratio) ratio = Xratio;
/*
    x = 0.0;
    y = 0.0;
    for(long i=0;i<iterations;++i)
    {
       los = rand()%101;
       p = 0.0;
       curr = 0;
       for(int j=0;j<5;++j)
       {
          prob += prawd[j];
          if(p >= los)
          {
             current_afi = j;
             break;
          }
       }

       x = factors[current_afi][0]*x + factors[current_afi][2]*y + factors[current_afi][4];
       y = factors[current_afi][1]*x + factors[current_afi][3]*y + factors[current_afi][5];*/
     /*
        switch(curr)
        {
            case 0:
                R = 255;
                G = B = 0;
                break;
            case 1:
                G = 255;
                R = B = 0;
                break;
            case 2:
                B = 255;
                R = G = 0;
                break;
            case 3:
                R = G = 255;
                B = 0;
                break;
            case 4:
                R = G = B = 255;
                break;
        }
        */
        //image.SetRGB((int)((x - Xmin)/ratio)+5, (int)((y - Ymin)/ratio)+5, R, G, B);
    //}





    return image;
}
