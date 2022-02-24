/*Sviluppare una function C che, dati come parametri di input un array di char e il suo
size, determina e restituisce come parametro di output il carattere più frequente.*/
#include <stdio.h>
#include <string.h>
char traccia18(char *,int,int *);
void main()
{
    char a[100]={"ccc aa d zzzzz eee"};
    int occorrenze[21]={0};
    size_t n_a = sizeof (a) / sizeof (a[0]);
    traccia18(a,n_a,occorrenze);
    char x=traccia18(a,n_a,occorrenze);
    printf("%c",x);

}
char traccia18(char *a,int n_a, int *occorrenze)
{
    char alfabeto[]={'a','b','c','d','e','f','g','h','i','l','m','n','o','p','q','r','s','t','u','v','z'};
    int i,j,max=0,i_max=0;
    strlwr(a);
    for(i=0; a[i]!=NULL; i++){
        for (j=0; j<n_a; j++){
            if(a[i]==alfabeto[j])
                occorrenze[j]++;}
    }
    for(i=0;i<21;i++)
    {
        if(occorrenze[i]>max){
            max=occorrenze[i];
            i_max=i;}
    }
    return alfabeto[i_max];
}
