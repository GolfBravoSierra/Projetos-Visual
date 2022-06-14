#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
//========================================================1
void *leitor_de_vetor (int *a)
{
int *u;
printf("digite qunatas linhas tera a matriz: ");
scanf("%d", a);
if((u=(int*)calloc ((*a)*sizeof(int)))==NULL) exit (1);
for (int i=0;i<*a;i++)
scanf("%d", &v[i]);

return v;
}
//========================================================2
/*void alocador_de_memorias(int  e )
{
int *n;
int *m;
 
e=(float*)calloc(n,sizeof(float));
if(e==NULL)
{
printf("\n Erro de alocacao");
exit(1);
}
e=(float*)calloc(m,sizeof(float));
if(e==NULL)
{
printf("\n Erro de alocacao");
exit(1);
}
return e;
}*/

//========================================================3
/*float *leitor_de_vetor
{
int *n;
int *m;
int i, j;
// ---------------------------parte que chama a matriz 2
float *ende;
**alocador_de_memorias(&ende);
printf("%f\n", *ende);
//-------------------------------------------------------
printf("digite os numeros da sua matriz");
alocador_de_memorias(&n, &m);
for(i=0;i<*n;i++)
for(j=0;j<*m;j++)
print("[%2d][%2d] :", i+1, j+1);
scanf ("%d", &mat [i][j]);
}*/
//========================================================main

int main() 
{
int N, M;
int *x;
int *y;
int **matriz;


x=leitor_de_vetor (&N);
y=leitor_de_vetor (&M);
matriz=criar_mat(x, N, y, M);
printf("Hello World\n");
return 0;
}

criar_matriz (int* A, int n, int m, int B, int m)
{
int **mat;
mat=aloca mat (n,m);
for (int i=0;i<n;i++)
for (int j=0;j<m;j++)
mat [i][j]= A[i] * B[i];
return mat;
}

