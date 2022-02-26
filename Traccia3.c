/*Sviluppare una function C che, dato come parametro di input un array di tipo struct
punto {double x; double y;} e il suo size, determina e restituisce come parametro di
output la massima distanza tra i punti. I campi x e y contengono l’ascissa e
l’ordinata, rispettivamente, di un punto.*/
#include <stdio.h>
#include <math.h>
struct punto
{
    double x;
    double y;
};
typedef struct punto Punto;
double traccia3(Punto *,int n);
double distanza(const Punto *, const Punto *);
void main()
{
    Punto a[]={    {1,3},
                   {14,10},
                   {1,1},
                   {1,6}};
    int n=4;
    traccia3(a,n);
}
double traccia3(Punto a[],int n)
{
    int i,j;
    double dist = distanza(&a[0],&a[1]);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++)
            if(distanza(&a[i],&a[j])>dist)
            {
                dist=distanza(&a[i],&a[j]);
            }
        return dist;
}
double distanza(const Punto *p1, const Punto *p2)
{
    return sqrt((pow(p2->x-p1->x,2))+pow(p2->y-p1->y,2));
}
