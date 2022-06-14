#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
struct produto 
{
char *nome;
float preco;
int qtdd;
};
typedef struct produto produto; 

produto* ler_produto (int*n)
{
produto  *p;
printf("\n quantos produtos:"); scanf("%d", n);
if ((p= (produto*)calloc(*n,sizeof(produto)))==NULL) exit(1);
printf("\n dados de %d produto\n",*n);
for(int i=0;i<n;i++)
{
printf("%d", *n);
}
}
int main() 
{
int n;
ler_produto (*n);
printf("Hello World\n");
return 0;
}