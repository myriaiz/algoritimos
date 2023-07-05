/*NOME:MYRIA IZABELE ALVES DE CARVALHO. TURMA:IF23
  10. Escreva um programa que leia uma string do teclado e mostre um menu para o usuário
escolher se quer converter para maiúsculo ou minúsculo.*/
#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
using namespace std;
int main() {
  char l;
  cout << "informe n(Minuscula) e m(maiuscula)" << endl;
  cin >> l;
  char p[20], pa[20];
  int t=0;
  
  for (int i=0; i<=5; i++){
    cin >> p[i];
    if (l == 'n'){
      pa[i] = p[i] + 32;
    }else{
      if (l == 'm'){
      pa[i] = p[i] - 32;
     }
    }
    cout << pa[i];
  }
}
