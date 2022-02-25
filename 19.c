/*Sviluppare una function C che, dati come parametri di input un array di char
	e il suo size, determina e restituisce come parametro di output il carattere
	meno frequente*/
#include <stdio.h>
#include <string.h>
char traccia19(char *,int);
void main()
{
    char a[100]={"c aaa ee  bbbb zzzzzzzz ddddddddddddddd kkkkkkkkk uuuuu"};
    size_t n = sizeof (a) / sizeof (a[0]);
    char x=traccia19(a,n);
    printf("%c",x);
}
char traccia19(char *a,int n)
{
    int i,j,cnt=0,max=0,min=0;
    char c,c_a;
    for(i=0;i<n;i++){
        c=a[i];
        for(j=0;a[j];j++){
            if(c==a[j])
                cnt++;
            if(cnt>max){
                max=cnt;
                c_a=c;}
            else if(cnt<max && cnt<min){
                    min=cnt;
                    c_a=c;}
            }
        cnt=0;
    }
    return c_a;
}
