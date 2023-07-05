/*NOME:MYRIA IZABELE ALVES DE CARVALHO. TURMA IF23
  8. Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando
se a segunda string lida está contida dentro da primeira. (estude a função strstr() que realiza
esta tarefa)*/

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main() {
 char tipoa[30];
 char tipob[20];

  fgets(tipoa,30,stdin);
  fgets(tipob,20,stdin);

  if(strstr(tipoa,tipob)){
   cout << "está contida" << endl;
  }else{
    cout << "não está contida" << endl;
  }
}
