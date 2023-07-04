/*NOME:MYRIA IZABELE ALVES DE CARVALHO. TURMA:IF23
  3. Sem usar a função strlen(), faça um programa que leia e imprima quantos caracteres ela
possui.*/

#include <iostream>
#include <cstring>
using namespace std;
int main() {
  int i=0;
  char pa[20];
  fgets(pa,20,stdin);
  for(i=0; pa[i]!='\0'; i++) //enquanto os indeces de i forem diferentes de /0 entra no for
    cout << i << endl;
}
