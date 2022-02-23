/*Sviluppare una function C che, dato come parametro di input un array di tipo struct
punto {double x; double y;} e il suo size, determina e restituisce come parametri di
output gli indici dei due punti che hanno distanza minima tra loro. I campi x e y
contengono l’ascissa e l’ordinata, rispettivamente, di un punto.*/
#include <stdio.h>
#include <math.h>
struct punto
{
    double x;
    double y;
};
typedef struct punto Punto;
void traccia2(Punto *,int n);
double distanza(const Punto *, const Punto *);
void main()
{
    Punto a[]={    {1,3},
                   {5,8},
                   {1,5},
                   {1,2}};
    int n=4;
    traccia2(a,n);
}
void traccia2(Punto a[],int n)
{
    int i,j,i1,i2;
    double dist1,dist2;
    dist1 = distanza(&a[0],&a[1]);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            dist2=distanza(&a[i],&a[j]);
            if(dist2<dist1){
                dist1=dist2;
                i1=i;
                i2=j;
            }}}
    printf("%lf----%d,%d",dist1,i1,i2);
}
double distanza(const Punto *p1, const Punto *p2)
{
    return sqrt((pow(p2->x-p1->x,2))+pow(p2->y-p1->y,2));
}
