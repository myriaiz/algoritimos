/*NOME:MYRIA IZABELE ALVES DE CARVALHO. TURMA:IF23
  5. Faça um programa que leia uma string e a inverta. A string invertida deve ser armazenada na
mesma variável. Em seguida, imprima a string invertida.*/
#include <iostream>
#include <cstring>
#include <string.h>
#include <string>
using namespace std;
int main() {

  string lei;
  getline(cin,lei);
  

  int v=0; //para a string aju começar em 0
  string aju=lei; //string para ajudar a guarda o valor invertido;
  for(int i = lei.size()-1; i>=0; i--){
  aju[v]=lei[i];
  v++; //incrementa v para anda do 0 ate inverte toda a string
  }
  cout << aju << endl;
}
