/*Sviluppare una function C che, dati come parametri di input un array 2D di double, il
numero delle righe e il numero delle colonne, determina e restituisce come parametro
di output il massimo tra le somme degli elementi di ogni colonna.*/
#include <stdio.h>
double traccia4(double [][3],int,int);
int main()
{
    double a[2][3]={{1.1,3.3,5.5},
                    {2.2,4.4,10.1}};
    int n=2;
    int m=3;
    double max_col;
    max_col = traccia4(a,n,m);
    printf("%lf",max_col);
}
double traccia4(double a[][3],int n,int m)
{
    double somma,max;
    int i,j;
    for(j = 0; j < m; j++){
        somma=0.0;
        for(i = 0; i < n; i++){
            somma = somma + a[i][j];
            if(somma>max)
            {
                max=somma;
            }
        }
    }
    return max;
}
