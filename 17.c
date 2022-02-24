/*Sviluppare una function C che, dati come parametri di input un array di char e il suo
size, determina e restituisce come parametro di un dato logico che indica se il testo
nell’array è un pangramma, ovvero è un testo che contiene, almeno una volta, tutte
le 21 lettere dell’alfabeto italiano.*/
#include <stdio.h>
#include <string.h>
int traccia17(char *,int,int *);
void main()
{
    char a[]={"abcd efghilm nopq rstuvz"};
    size_t n = sizeof (a) / sizeof (a[0]);
    int occorrenze[21]={0};
    int v= traccia17(a,n,occorrenze);
    printf("%d",v);

}
int traccia17(char *a,int n,int *occorrenze)
{
    char alfabeto[]={'a','b','c','d','e','f','g','h','i','l','m','n','o','p','q','r','s','t','u','v','z'};
    int i,j,count=0;
    strlwr(a);
    for(i=0; a[i]!=NULL; i++){
        for (j=0; j<n; j++){
            if(a[i]==alfabeto[j])
                occorrenze[j]++;}
    }
    for(i=0; i<21; i++){
        if(occorrenze[i]!=0)
            count++;
    }
    if(count>=21)
        return 1;
    else
        return 0;
}
