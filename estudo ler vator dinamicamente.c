#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
float *ler_vetor( int *n)
{
int i;
float  *vetor;
 printf("qunatos elementos deseja no vetor: ");
 scanf("%d", &*n); 
 vetor=(float*)calloc(*n,sizeof(float));
 if(vetor=NULL)
 {
printf("erro de alocação");
exit(1);
 }
 for(i=0;i<*n;i++)
 scanf("%f", &vetor[i]);
 return &vetor; 
}

void maior_menor(float *vetor, float **Pmaior, float **Pmenor, int *n)
{
    printf("ola");
*Pmaior=*Pmenor=vetor;
for(int i=0;i<*n;i++)
{
if (*(*Pmaior)<vetor[i]) *Pmaior=&vetor[i];
if (*(*Pmenor)>vetor[i]) *Pmenor=&vetor[i];
}
}
int main(){ 
      float * vetor, **Pmaior, **Pmenor; 
      int N; 
      printf("sldklsd");
      vetor = ler_vetor(&N); 
      maior_menor(vetor,&Pmaior, &Pmenor, N);
      printf("sldklsd"); 
      printf("Maior:  %.1f      Menor:  %.1f",  *Pmaior,  *Pmenor); 
      return 0; 
    }              



