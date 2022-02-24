/*Sviluppare una function C che, data come parametro di input una stringa che
rappresenta un testo in italiano, determina e restituisce come parametro di output il
numero delle parole contenute nel testo che hanno almeno 5 vocali. Nel testo le
parole sono separate da un unico spazio.*/
#include <stdio.h>
#include <string.h>
typedef enum{false, true} boolean;
boolean check_vocali(char c);
int traccia11(char *testo);

int main()
{
    char testo[100]={"Io che non vivo piu di un ora senza te"};
    int qty = traccia11(testo);
    printf("qty:%d",qty);
}
boolean check_vocali(char c){
    if((c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u'))
        return true;
    else
        return false;
}

int traccia11(char *testo){
    int i, j, k=0;
    char *tmp=strtok(testo, " ");
    while(tmp!=NULL){
        j=0;
        for(i=0; i<strlen(tmp); i++){
            if(check_vocali(tmp[i]))
                j++;
        }
        if(j>=5)
            k++;
        tmp=strtok(NULL, " ");
    }
    return k;
}
