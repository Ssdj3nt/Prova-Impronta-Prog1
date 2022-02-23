/*TRACCIA 5
Sviluppare una function C che, dati come parametri di input un array 2D di int, il
numero delle righe e il numero delle colonne, determina e restituisce come parametro
di output il massimo tra le somme degli elementi di ogni riga.*/
#include <stdio.h>
int traccia5(int [][3],int,int);
void main()
{
    int a[2][3]={{1,3,5},
                 {2,4,0}};
    int n=2;
    int m=3;
    int max_rig;
    max_rig = traccia5(a,n,m);
    printf("Il massimo delle somme per le righe = %d.",max_rig);
}
int traccia5(int a[2][3],int n,int m)
{
    int i,j,somma=0,max=0;
    for(i=0;i<n;i++){
        somma=0;
        for(j=0;j<m;j++){
            somma = somma + a[i][j];
            printf("SOMMA %d\n",somma);
            if(somma>max)
            {
                max=somma;
            }
        }
    }
    return max;
}
