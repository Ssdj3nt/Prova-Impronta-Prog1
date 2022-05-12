/*Sviluppare una function C che, dati come parametri di input un array di char
e il suo size, determina e restituisce come parametro di output il carattere
meno frequente*/
#include <stdio.h>
#include <string.h>
char traccia19(char *,int);
void main()
{
    char a[] = "k aa bb ccc dddd eeeeeeee zzzzzzzzzzzzzzzzzzzzzzzzz";
    int n = strlen(a);
    char x= traccia19(a,n);
    printf("%c",x);
}
char traccia19(char *a,int n)
{
    int i,j,min,occ[n];
    char min_c=a[0];
    for(i=0;i<n;i++){
        occ[i]=0;
        for(j=0;j<n;j++)
            if(a[i]==a[j])
                occ[j]++;}

    min=occ[0];
    for(i=0;i<n;i++)
        if(occ[i]<min){
            min=occ[i];
            min_c=a[i];
        }
    return min_c;
}
