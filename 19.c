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
    int i,j,min,freq[n];
    char minChar = a[0];

    for(i = 0; i < n; i++) {
        freq[i] = 1;
        for(j = i+1; j < n; j++) {
            if(a[i] == a[j] && a[i] != ' ' && a[i] != '0') {
                freq[i]++;}}}

    min = freq[0];
    for(i = 0; i < n; i++) {
        if(min > freq[i] && freq[i] != '0') {
            min = freq[i];
            minChar = a[i];}}
    return minChar;
}
