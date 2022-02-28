/*Scrivere una function C che ha come input un array di struct (struct punto, con campo
ascissa e campo ordinata) che individuano punti nel piano, e il suo size n e che
fornisce in output la matrice nxn delle distanze, dove sono memorizzate le distanze di
ogni punto da tutti gli altri. La function deve fare uso di un'altra function, anch'essa
da scrivere) che restituisce la distanza tra due qualunque punti del piano.*/
#include <stdio.h>
#include <math.h>
struct punto{
    double x;
    double y;
};
typedef struct punto Punto;
void traccia23(Punto piano[],int size,double *M_distanze,int n_col,int n,int m);
double distanza_traccia23(Punto *p1, Punto *p2);

void main()
{
    
}
void traccia23(Punto piano[],int size,double *M_distanze,int n_col,int n,int m)
{
    int i,j;
    double distanza;
    for(i=0;i<size-1;i++)
        for(j=i+1;j<size;j++){
            distanza = distanza_traccia23(&piano[i],&piano[j]);
            *(M_distanze + n_col * i+j)=distanza;
        }
}
double distanza_traccia23(Punto *p1, Punto *p2)
{
    return sqrt(pow(p2->x-p1->x,2)+pow(p2->y-p1->y,2));
}
  
