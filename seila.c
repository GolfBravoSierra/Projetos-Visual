#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define tam 30

char titulo();
//=========================================Função extra: banco de letras
char valida_palavras(char palavra[26])
{
  int veri;
int tamanho;
scanf("%[^\n]", palavra);
tamanho = strlen(palavra);
printf("a string %s tem? %d", palavra, tamanho);
  for (int i=0; i<tamanho; i++)
    if (isalpha(palavra[i])){
    veri= 1;
  }
    else 
  {
  veri = 2;  
  }
  if(veri==2)
 titulo();
  return palavra[26];
    }
//=========================================Função extra: banco de palavras  
char banco_de_palavras ()
{
char pala[tam][20] = {"amora","angola","armenia","arte","algebra","aritmetica","banco","banana","brasil","britanico","borboleta","castelo","croacia","pequeno","viver","morrer","lar","uva","odontologia","oftalmologista","ave","lima","hemorragia","linha","rato","malha","dieta","musica","feminino","masculino"};

return pala[30][20];
}
//=========================================Função extra: Banco de acetos 
/*char  banco_de_acertos(char palavras)
{

}*/
////=========================================Função 2: comparador  de palavras
int comparador_de_palavras()
{
  char palavra[26];
char pala[26];
  pala[26] = valida_palavras(palavra[26]);
  for(int i;i<20;i++)
  printf("%c", pala[i]);
char palaptr[20];
char sombra[30];
for (int i=0;i<tam;i++){
sombra[i]=banco_de_palavras()+1;

}


}
                                                                                                                                              


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
comparador_de_palavras();

return 0;
}