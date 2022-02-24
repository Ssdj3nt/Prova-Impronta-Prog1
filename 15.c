/*Sviluppare una function C che, dati come parametri di input un array di char e il suo
size, determina e restituisce come parametro di output l’array (di size 21) del numero
delle occorrenze delle 21 lettere dell’alfabeto italiano (per es. il numero di
occorrenze della lettera a è il numero di volte in cui la lettera a compare nel testo).*/
#include <stdio.h>
#include <string.h>
void traccia15(char *,int,int *);
void main()
{
    char a[100]={"Io mi chiamo Francesco e vivo a Brusciano NA"};
    int occorrenze[21]={0};
    size_t n_a = sizeof (a) / sizeof (a[0]);
    traccia15(a,n_a,occorrenze);

}
void traccia15(char *a,int n_a, int *occorrenze)
{
    char alfabeto[]={'a','b','c','d','e','f','g','h','i','l','m','n','o','p','q','r','s','t','u','v','z'};
    int i,j;
    strlwr(a);
    for(i=0; a[i]!=NULL; i++){
        for (j=0; j<n_a; j++){
            if(a[i]==alfabeto[j])
                occorrenze[j]++;}
    }
    for(i=0;i<21;i++)
        printf("%d\n",occorrenze[i]);
}
