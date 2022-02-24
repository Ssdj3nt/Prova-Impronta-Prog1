/*
Sviluppare una function C che, dati come parametri di input un array di int e il suo
size, determina e restituisce come parametro di output il secondo più grande
elemento dell’array (N.B.: non bisogna seguire l’idea di ordinare prima l’array).
*/
#include <stdio.h>
int traccia1(int [],int);
int main()
{
    int array[]={100,200,1,5,55};
    size_t n = sizeof (array) / sizeof (array[0]);
    int num;
    num = traccia1(array,n);
    printf("Il secondo numero piu grande è:%d",num);
}
int traccia1(int a[],int n)
{
    int i,max=0,maxb=0;
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];}}
    for (i=0;i<n;i++){
        if(a[i]!=max && a[i]>maxb)
            maxb=a[i];}
    return maxb;
}
