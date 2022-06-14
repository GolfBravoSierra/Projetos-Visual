#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
int *vet, maior, menor;
int n, i ;
vet = (int *) calloc (n, sizeof(int));
if (vet == NULL)
{
printf("erro de alocacao");
exit(1);
}
printf("digite o numero de elementos do vetor: ");
scanf("%d", &n);
maior=menor=vet;
printf("\n====================================\n");
printf("agora digite os elementos do vetor:\n");
for (i=0;i<n;i++)
scanf("%d", &vet[i]);

printf("\n====================================\n");
printf("valores lidos:\n");

for(i=0;i<n;i++)
  printf("%d ", vet[i]);

for(i=0;i<n;i++)
{
if(vet[i]>maior)
maior =  &vet[i];
}
printf("\n maior valor lido foi %d", maior);

 return 0;
}