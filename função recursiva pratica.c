#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>



int main() 
{
int a;
int n;
int i;
int x[10];
printf("digite a quantidade de elementos do vetor: ");
scanf("%d", &n);
printf("digite agora os elementos do vetor:\n");
for(i=0;i<n;i++)
scanf("%d", &x[i]);
printf("digite o valor que deseja buscar no vetor: ");
scanf("%d", &a);
repete ( x , n, a);
printf("%d", repete(x,n-1,a));
return 0;
}

int repete ( int x[10],int n,int a)
{
if(n==0)return 0;
if(x[n-1]==a)return 1 + repete(x,n-1,a);
return repete(x,n-1,a);
}