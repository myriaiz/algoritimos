/*NOME:MYRIA IZABELE ALVES DE CARVALHO. TURMA:IF23
  2. Faça um programa que leia uma string e imprima as quatro primeiras letras dela.*/
#include <iostream>
#include <cstring>
using namespace std;
int main() {
  char belezinha[20];
  fgets(belezinha,20,stdin);
  for(int i=0; i<=3; i++){
    cout << belezinha[i] << endl;
  }
}
