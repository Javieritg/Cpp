#include <iostream>
using namespace std;

bool muchadiferencia(int diferencia, int num1, int num2){
  return (num1 - num2 > diferencia)
}

int main() {
  string saludo = "Hola!";
  string repetir;
  string avisar = "Introduce una palabra";
  string contrasena = "paco";
  bool esCorrecto = false;
  bool diferencia;
  int edad = 26;
  int edadIntroducida;

  /*cout << "Imprimir por pantalla" << endl;
  cout << saludo <<endl;*/

  /*while (true){
    cout << avisar << endl;
    cin >> repetir;
    cout << repetir << endl;
  }*/

  /*while (!esCorrecto){
    cout << avisar << endl;
    cin >> repetir;
    if (repetir == contrasena){
      esCorrecto = true;
    }
  }*/

  /*repetir = "";
  while (repetir != contrasena){
    cout << avisar << endl;
    cin >> repetir;
  }*/

  cout << "¿Cuantos anos tienes?" << endl;
  cin >> edadIntroducida;
  if (edadIntroducida >= edad){
    cout << "Eres viejo" << endl;
  }else{
    cout << "Eres bebe" << endl;
  }

  diferencia = muchaDiferencia(5,edadintroducida,edad)
  if (diferencia){}
  cout << "Hay mucha diferencia de edad";



  return 0;
}
