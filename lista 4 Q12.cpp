/*NOME:MYRIA IZABELE ALVES DE CARVALHO. TURMA:IF23
  12. Escreva um programa que recebe uma string S e dois valores inteiros não negativos i e j. Em
seguida, imprima os caracteres contidos no segmento que vai de i a j da string S.*/
#include <iostream>
#include <string>
#include <cstring>
#include <string.h>
using namespace std;
int main() {
    string S;
    int i=0, j=0, p=0;
    getline(cin, S);
    cin >> i >> j;
    cout << "S: ";
    for (p=i; p<=j; p++) {
       cout << S[p];
    }
}
