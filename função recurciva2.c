#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
int  maior (int x[] ,int  n )
{
int ma;
if (n==1) return x[0];
ma= maior(x, n-1);
if (ma>x[n-1]) return ma;
return x[n-1];
} 


int main() 
{
int n;
int x[10];
int a;
int i;
printf("digite a quantidade de elementos do vetor: ");
scanf("%d", &n);
printf("digite agora os elementos do vetor:\n");
for(i=0;i<n;i++)
scanf("%d", &x[i]);
maior (x , n ); 
printf("o maior elemento do vetor eh: ");
printf("%d", maior (x,n));
return 0;
}

