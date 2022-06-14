#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
 
float *ler_vetor(int *n)
void maior_menor(  float * vetor, int *n, float **Pmaior, float **Pmenor);


   int main(){ 
     int N; 
     float * vetor, *Pmaior, *Pmenor; 
      
      vetor= ler_vetor(&N); 
      maior_menor( vetor,N, &Pmaior, &Pmenor); 
      printf("Maior:  %.1f      Menor:  %.1f",  *Pmaior,  *Pmenor); 
      return 0; 
    }   

 float *ler_vetor(int *n)
 {
int i;
float *vetor;
printf("digite a guantidade de elementos do vetor:");
scanf("%d", &*n);
vetor=(float*)calloc(*n,sizeof(float));
if(vetor==NULL)
{
printf("erro de alocação");
exit (1);
}
printf("agora digite os elementos do vetor:\n");
for(i=0;i<*n;i++)
scanf("%f", &vetor[i]);
return vetor;
 }           
        
void maior_menor(  float * vetor,int *n, float **Pmaior, float **Pmenor);
{
*Pmaior=*Pmenor=*vetor;
for(int i=0;i<*n;i++)
{
if (*(*Pmaior)<vetor[i]) *Pmaior=&vetor[i];
if (*(*Pmenor)>vetor[i]) *Pmenor=&vetor[i];
}
}