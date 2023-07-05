/*NOME:MYRIA IZABELE ALVES DE CARVALHO. TURMA:IF23
  6. Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre com um
caractere (vogal ou consoante) e substitua todas as vogais da palavra por esse caractere. Ao
final, imprima a nova string e o número de vogais que ela possui.*/

#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
using namespace std;
int main() {
  char v[5] = {'a', 'e', 'i', 'o', 'u'};
  int cont=0, t=0, b=0;
  char a ;
  //string lida;
  char lida[50];

  cin.get(lida, 50);
  setbuf(stdin, NULL);
  cin>>a;
  t = strlen(lida);
for (int i=0; i<t; i++){
  //cout << "fora do for ";
  if (lida[i] =='a'){
    cont= cont+1;
      lida[i] = a;
      if(lida[i]=='a'){
        b ++;
        
      }if(a=='a'){
         cout << b << endl;
       }else{
         cout << "0" << endl;
       }
  }else{
  if (lida[i] == 'e'){
  cont= cont+1;
    lida[i] = a;
     if(lida[i]=='e'){
      b ++;
       if(a=='e'){
         cout << b << endl;
       }else{
         cout << "0" << endl;
       }
    }
  }else{
  if (lida[i] == 'i'){
  cont= cont+1;
    lida[i] = a;
     if(lida[i]=='i'){
      b ++;
       if(a=='i'){
         cout << b << endl;
       }else{
         cout << "0" << endl;
       }
    }
  }else{
  if (lida[i] == 'o'){
  cont= cont+1;
    lida[i] = a;
     if(lida[i]=='o'){
      b ++;
       if(a=='o'){
         cout << b << endl;
       }else{
         cout << "0" << endl;
       }
    }
  }else{
  if (lida[i] == 'u'){
  cont= cont+1;
    lida[i] = a;
     if(lida[i]=='u'){
      b ++;
       if(a=='u'){
         cout << b << endl;
       }else{
         cout << "0" << endl;
       }
    }
   // if (lida[i] == v[i]){
     // b = b + 1;
    }
  }
  }
  }
  }
  }
//}
cout << cont << endl;

cout << lida << endl;
cout << b << endl;

}
