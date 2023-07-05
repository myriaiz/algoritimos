/*NOME:MYRIA IZABELE ALVES DE CARVALHO. TURMA:IF23
  9. Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando
quantas vezes a segunda string lida está contida dentro da primeira.*/

#include <cstring>
#include <iostream>
using namespace std;
int main() {

  char vi[]="algoritimo com if23 é na eaj eaj e eaj  ufrn";
  char vj[]="eaj";
  char *p;//armazenar endereçom da aoccrencia se s2
  //cin.get()
  p=strstr(vi,vj); // veja se em s1 tem s2 retorna o endereço em salva em ps.
  int so=0;
  if(p!=NULL){
    //quando oponteiro for diferente de nulo encontrou
    so+=1;//encontrou s1
   
  p=strstr(p+strlen(vj)+1,vj); // padrao vai comecar a receber o endereço atual mais o tamanho da variavel mais um e dara o novo endereço
  while(p!=NULL){ //enquanto tiver a palavra que estou pacurando
    so+=1; //
    p=strstr(p+strlen(vj)+1,vj);
  }
}
  cout << so << endl;
}
