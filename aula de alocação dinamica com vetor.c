#include <stdio.h>
#include <stdlib.h>
//função que le os valores do vetor 
float *leitor_de_vetor (int *n)
{
int  i;
float *Pvet;
printf("digite quantos elementos de vc quer no vetor");
scanf("%d",&*n);
Pvet=(float*)calloc(*n,sizeof(float));
if(Pvet==NULL)
{
printf("\n Erro de alocacao--Fim do programa....");
exit(1);
}
printf("Digite os Elementos do vetor:\n ");
for(i=0;i<*n;i++)
scanf("%f",&Pvet[i]);
return Pvet;
}

// função que compara os valores do vetor
void comparador(int  n, float *Pvet, float **Pmaior, float **Pmenor)
{
*Pmaior=*Pmenor=Pvet;
for(int i=0;i<n;i++)
{
if (*(*Pmaior)<Pvet[i]) *Pmaior=&Pvet[i];
if (*(*Pmenor)>Pvet[i]) *Pmenor=&Pvet[i];
}
}

// função de imprimir o vetor 
void imprimir(int  n, float *Pvet, float *Pmaior, float *Pmenor)
{
printf("V A L O R E S     L I D O S:\n ");
for(int i=0;i<n;i++)
printf("\n==============\n");
printf("\nMaior elemento do vetor: %.2f\n",*Pmaior);
printf("Menor elemento do vetor: %.2f\n",*Pmenor);
}


// essa é a main
int main()
{
float *Pvet;
float *Pmaior;
float *Pmenor;
int N;
Pvet=leitor_de_vetor(&N);
comparador(N,  Pvet,  &Pmaior, &Pmenor);
imprimir(N,  Pvet,  Pmaior, Pmenor);
return 0;
}
// na cahamada só entra as variaveis 
//coloca endereço na lista de parametros se caso a variavel va sofrer variações ai coloca o &