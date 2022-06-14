#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define tam 30 
//=========================================Função extra: banco de palavras
void valida_palavras(char palavra[26] )
{
  scanf("%c['\n]", palavra);
  char * palaptr[/*numero*/];// para arrumar essa função só precisa faser um contador de letras e faser o ponteiro percorrer a palavras comparando com o vetor alfabeto
 char alfabeto[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','w','z'};
for(int i=0;i<tam;i++)
  if(palavra[i] != alfabeto[i])


printf("\npalavra invalida");
}
//=========================================Função extra: banco de palavras  
char banco_de_palavras ()
{
char pala[tam][20] = {"amora","angola","armenia","arte","algebra","aritmetica","banco","banana","brasil","britanico","borboleta","castelo","croacia","pequeno","viver","morrer","lar","uva","odontologia","oftalmologista","ave","lima","hemorragia","linha","rato","malha","dieta","musica","feminino","masculino"};// esse é o certo 
// para comparar as palavras criar um sombra(atribuir para outra variavel) da  palavras fora da função 
return pala[tam][20];
}
//=========================================Função extra: Banco de acetos 
/*char  banco_de_acertos(char palavras)
{

}*/
////=========================================Função 2: verificador de palavras
/*int valida_palavras(char palavra[10] )
{
  scanf("%c['\n]", palavra);
char * palaptr[20];
char sombra[30];
for (int i=0;i<tam;i++){
sombra[i]=banco_de_palavras()+1;

}


}*/
                                                                                                                                              


//=========================================Função 1: titulo 
char titulo(){
  printf("==========================\n");
  printf("\t\tJOGO ANAGRAMA\n");
  printf("<<Regras do jogo>>\n");
  printf("->O jogador deve formar palavras especificas com as letras do quadro\n");
  printf("->Desconsidere os acentos\n");
  printf("->Existem 30 palavras no total\n");
  printf("->Maximo de Erros: 5\n");
  printf("\tBOA SORTE!!!!\n =========================================\n");
  printf("\t==== B A N C O  D E  L E T R A S ====\n\n \t\t\t   A V B U C Q D\n \t\t\t   P F S T E H R\n \t\t\t   M I O N L G E\n \t\t\t   I L T V A R A\n \t\t\t   O B C R O O N\n");
printf("Agora Tente adivinhar as palavras com as letras do quadro acima>>>");
} 

int main(void) 
{
char   palavra[26]; 
titulo();
valida_palavras(palavra);


return 0;
}