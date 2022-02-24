/*Sviluppare una function C che, data come parametro di input una stringa che
rappresenta un testo in italiano, determina e restituisce come parametro di output il
numero di parole che terminano in are contenute nel testo. Nel testo le parole sono
separate da un unico spazio.*/
#include <stdio.h>
#include <string.h>
int traccia9(char *);
int main()
{
    char testo[100]={"Prendere mangiare bere giocare"};
    int qty= traccia9(testo);
    printf("qty:%d",qty);
}
int traccia9(char *testo){
    int i=0;
    char *tmp=strtok(testo, " ");
    while(tmp!=NULL){
        if(strlen(tmp)>=3){
            if(strcmp(&tmp[strlen(tmp)-3], "are")==0)
                i++;
        }
        tmp=strtok(NULL, " ");
    }
    return i;
}
