/*Sviluppare una function C che, data come parametro di input una stringa che
rappresenta un testo in italiano, determina e restituisce come parametro di output il
numero di parole di tre lettere contenute nel testo. Nel testo le parole sono separate
da un unico spazio.*/

#include <stdio.h>
#include <string.h>
int traccia8(int *,int);
int main()
{
    char a[100]={"per per per ?"};
    int n_a=strlen(a);
    int qty = traccia8(a,n_a);
    printf("qty:%d",qty);
}
int traccia8(int *a,int n_a)
{
    char *tmp=strtok(a, " ");
    int i=0;
    while(tmp!=NULL){
        if(strlen(tmp)==3)
            i++;
        tmp=strtok(NULL, " ");
    }
    return i;
}
