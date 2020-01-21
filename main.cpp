#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int listi[5] ;
    listi[0] = 6;
    listi[1] = 8;
    listi[2] = 455;
    listi[3] = 889;
    listi[4] = 873;

    uint carpim;
    carpim = 1;

    for (int i=0; i<4 ; i++) {
        for(int j = i+1; j<5; j++)
        {
            if (listi[i]<listi[j])
            {
                int mustafagizem =listi[i];
                listi[i] = listi[j];
                listi[j] = mustafagizem;
            }
        }
    }

    for (int i = 0; i <5 ; i++) {
        qDebug() << listi[i];

    }


    return a.exec();
}
