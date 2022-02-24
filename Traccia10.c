/*Sviluppare una function C che, data come parametro di input una stringa che
rappresenta un testo in italiano, determina e restituisce come parametro di output il
numero di parole che iniziano con 'a' e terminano con 'e' contenute nel testo. Nel testo
le parole sono separate da un unico spazio.*/
#include <stdio.h>
#include <string.h>
int traccia10(char *testo);
void main()
{
    char a[100]={"are appendere calcio sport bere alle"};
    int qty = traccia10(a);
    printf("qty:%d",qty);
}
int traccia10(char *testo){
    int i=0;
    char *tmp=strtok(testo, " ");
    while(tmp!=NULL){
        if((tmp[0]=='a') && (tmp[strlen(tmp)-1]=='e'))
            i++;
        tmp=strtok(NULL, " ");
    }
    return i;
}
