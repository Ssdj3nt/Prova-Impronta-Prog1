/*Sviluppare una function C che, dati come parametri di input un array di char e il suo
size, determina e restituisce come parametro di output il carattere più frequente.*/
#include <stdio.h>
#include <string.h>
char traccia18(char *,int);
void main()
{
    char a[100]={"c aaa e  bbbb zzzzzzzz ddddddddddddddd kkkkkkkkk uuuuu"};
    size_t n = sizeof (a) / sizeof (a[0]);
    char x=traccia18(a,n);
    printf("%c",x);
}
char traccia18(char *a,int n)
{
    int i,j,s=0,m=0;
    char c_aux,c_max;
    for(i=0;i<a[i];i++)
    {
        c_aux=a[i];

        for(j=0;j<a[j];j++)
            if(c_aux==a[j])
                s++;
        if(s>m)
        {
            m=s;
            c_max=c_aux;
        }
        s=0;
    }
    return c_max;
}
