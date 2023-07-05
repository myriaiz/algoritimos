/*NOME:MYRIA IZABELE ALVES DE CARVALHO. TURMA:IF23
  7. Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é um
palíndromo ou não. Exemplos de palíndromos: ovo, arara, rever, asa, osso etc.*/
#include <iostream>
#include <cstring>
#include <string.h>
#include <string>
using namespace std;
int main() {
  string pali;
  string pali2;
  int i=0,j=0,v=0;
  
  getline(cin, pali);
  for(int i = pali.size()-1; i>=0; i--){
    pali2+=pali[i];
  }
    //v++;
   if(pali==pali2){
     cout << "é palindrome" << endl;
   }else{
     cout << "não é palindrome" << endl;
   }
}
