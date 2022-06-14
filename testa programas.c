#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>



/*int main() 
//{
//int x[30], n, a;
//printf("digite a quantidade de elementos do seu vetor: ");
//scanf("%d", &n);
//printf("digite agora os elemtos do seu vetor:");
//for(int i=0;i<n;i++)
//scanf("%d",&x[i]);
//printf("agora digite o elemento que deseja buscar no vetor: ");
//scanf("%d", &a);
//repete ( x , n, a); 
//printf("%d", repete(x,n-1,a));  
//return 0;
//}


//int repete(int x[30], int n, int a)
//{
//if(n==0) return 0;
//if(x[n-1]==a)return 1 + repete(x, n-1, a);
//return repete(x,n-1,a);
//}*/

/*int main()
{
int x[40], n;
printf("digite o numero de elementos do seu vetor: ");
scanf("%d", &n);
printf("digite agora os elementos do seu vetor:\n");
for(int i=0;i<n;i++)
scanf("%d", &x[i]);
maior ( x, n);
printf("o maor elemento do seu vetor é: %d", maior(x,n));
return 0;
}

int maior ( int x[20], int n)
{
int ma;
if(n==0) return x[0];
ma = maior(x, n-1);
if (ma>x[n-1]) return ma;
return x[n-1];
}*/


/*int main()
{
int x[20],n,a,repete;
printf ("digite o tamanho\n");
scanf("%d", &n);
printf("\ndigite os elementos "); 
for (int i=0;i<n;i++)
scanf("%d",&x[i]);
printf("digite o elemento que deseja procurar");
scanf("%d",&a);  
repete = repe( x , n, a);
printf("%d", repete);
}

 int repe( int x[20], int  n, int  a){ 
    if (n==0) return 1;
    if (x[n-1]==a) return 1 + repe(x,n-1,a);
    return repe(x,n-1,a);

 }*/
Scontador( Str);

 int main(){
    char Str[20];
    int TAM=0;
    printf("digite uma frase\n");
    fflush(stdin);
  scanf("%[^\n]", Str);
  for (int i=0; i<10;i++)
    printf("%c", Str[i]);
    Scontador(Str[20]);
    TAM=Scontador(Str);
    printf("%d", TAM);

 }

 int Scontador(char Str[20]){
    int cont;
    if(Str=='\0') return 1;
    else{
    return 1 + Scontador(Str-1) + cont++;}
    return cont;
 }