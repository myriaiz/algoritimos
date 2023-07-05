/*NOME:MYRIA IZABELE ALVES DE CARVALHO. TURMA:IF23
  11. Escreva um programa que leia o nome e o valor de determinada mercadoria de uma loja.
Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total, calcule o valor a
ser pago à vista. Escreva o nome da mercadoria, o valor total, o valor do desconto e o valor a ser
pago à vista.*/
#include <iostream>
#include <string>
#include <cstring>
#include <string.h>
using namespace std;

int main() {
    string mernome;
    double tvalor;
    double des =0; 
    double avalor = 0; 

    cout << "nome da mercadoria: ";
    getline(cin, mernome);

    cout << " valor da mercadoria: ";
    cin >> tvalor;

   
 des = tvalor * 0.1; //0.1 porque em porcentagem o desconto é de 10%, ou seja, de 0.1
 avalor = tvalor - des;
  

    cout << "Mercadoria: " << mernome << endl;
    cout << "Valor:" << tvalor << endl;
    cout << "Desconto: " << des << endl;
    cout << "Valor à vista:" << avalor << endl;

    return 0;
}
