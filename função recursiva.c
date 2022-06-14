#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
int fat( int n)
{
int i;
if (n<=i) return 1 ;
return n* fat n-1;
}


int main() 
{
int n;
rpintf("digite um numero para n");
scanf("%d", &n);
printf("\n farotiral de %d = %d", n, fat(n));
printf("Hello World\n");
return 0;
}
// sempre pensar de tras para frente do generico para o especifico 
// é a mesma coisa que a prova por indução finita 
// quero porvar alguma coisa com o valor n
// fat(n)
// n=2354
// de n eu não sei mas se eu souber quanto vale fat (n-1), prem n-1 ele tambem não sabe mmas se ele souber fat(n-2)proem ele não sabe 
// e assim vai decrementado fat (1) mas ele pode por zero enta~fazemos menor fat(0) que é igau la a1
//a função recurciva é:
//long Fat(int n)
//{
// primeira coisa é um teste de parada 
//if (n==0)return1;
//return n*fat(n-1);
//}
// dentro do main 
//