#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int main(void) 
{
char *vet, frase;
int c=0;
vet = (char *) malloc(sizeof(char));
printf("digite uma frase:\n");
scanf("%[^\n]", &frase);
printf("\n===================================\n");
getchar();
while(*vet!='\0')
{
if(isalpha(*vet))
c++;
vet++;
}
printf("o numero de letras da frase eh: %d", c);// ola
printf("%c", *vet);
return 0;
}