#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) 
{
float *vetor, media;
int N;
vetor=ler_vetor(&N);
media=cal_media(vetor,N);
imp_vetor(vetor,N);
printf("valor media %f",media);
return 0;
}
// ela não fez as outras funções de clacular a media e e de imprimir vetores
float  * ler_vetor(int *n)/// n contem indereço 
{
float *v;
printf("quantos elementos");
scanf("%d",n ); // esse n não precisa de endereço 
if(v=(float*)calloc(*n, sizeof(float))=NULL)exit(1);// v recebe o primeiro endereço de um conjunto de n espaços de memoria
for(int i=0;i<*n;i++)
scanf("%f",&v[i]);
return v;
}
//*n é o conteudo do indereço e se colocaçe n é o endereço de N