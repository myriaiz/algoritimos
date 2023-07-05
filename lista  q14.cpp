/*NOME:MYRIA IZABELE ALVES DE CARVALHO. TURMA:IF23
  Escreva um programa que leia duas strings e as imprima em ordem alfabética, a ordem em
que elas aparecem num dicionário.*/
#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
int main() {
  char nome1[5], nome2[5];
  for (int i=0; i<5; i++){
    cin >> nome1[i];
  }
  for (int j=0; j<5; j++){
    cin >> nome2[j];
  }

  if (strcmp(nome1, nome2) < 0){ //strcmp compara qual variavel vem primeiro em ordem alfabetica 
    cout << nome1 << endl << nome2 << endl;
  }else{
      cout << nome2 << endl << nome1 << endl;
    
  }
