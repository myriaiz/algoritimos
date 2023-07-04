/*NOME:MYRIA IAZABELE ALVES DE CARVALHO. TURMA:IF23
  4. Faça um programa que leia uma string e a imprima de trás para a frente*/
#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
using namespace std;
int main() {
  int i=0;
  string vi;

  getline(cin,vi); //leitura na forma de string até mesmo os enters
  
  for(i=vi.size()-1; i>=0; i--) //o vi.size()-1 é para começar a conta a parti do tamanho da variavel e o menos 1 para não conta vom o /0 e a documentação é para ir até 0;
   cout << vi[i];
}
