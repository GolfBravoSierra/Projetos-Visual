#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

// função de ler n 1
void *leitor_de_n (int *n, int *m)
{
printf("digite qunatas linhas tera a matriz: ");
scanf("%d",&*n);
printf("\ndigite quantas linhas tera a matiz: ");
scanf("%d",&*m);
return *n, *m; 
}

// função para alocar espaço para matriz 2
void alocador_de_memorias( int * n, int * m)
{
float *mat;
mat=(float*)calloc(*n,sizeof(float));
if(mat==NULL)
{
printf("\n Erro de alocacao");
exit(1);
}mat=(float*)calloc(*m,sizeof(float));
if(mat==NULL)
{
printf("\n Erro de alocacao");
exit(1);
}
return mat;
}

//função que vai ler os n inteiros 3


// função main
int main() 
{
int N;
int M;
float MAT;
leitor_de_matriz ( &MAT );
leitor_de_n(&N,&M);
printf("Hello World\n");
return 0;
}