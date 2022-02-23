#include <stdio.h>
#include <math.h>
struct punto
{
    double x;
    double y;
};
typedef struct punto Punto;
void traccia2(Punto *,int);
void main()
{
    Punto array[]={{4,7},
                   {1,7},
                   {7,2},
                   {15,1}};
    size_t n = sizeof (array) / sizeof (array[0]);
    traccia2(array,n);
}
void traccia2(Punto *array,int n)
{
    int i=0,j=1,k,*indi,*indj;
    double *a,dist1=0,dist2=0,dist3=0,min;
    while(j!=n)
    {
        a[k++]=sqrt(pow(array[j].x-array[i].x,(array[j].y-array[i].y)));
        if(a[k]>dist1){
            dist1=a[k];
            dist2=a[k];
            j++;}
        else if(a[k]<dist1){
            dist2=a[k];}
        else if(a[k]<dist1 && a[k]<dist2)
        {
            dist3=a[k];
            *indi=i;
            *indj=j;
        }
    }
    printf("%d,%d",*indi,*indj);
}