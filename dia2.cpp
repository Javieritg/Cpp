#include <iostream>
using namespace std;

bool muchaDiferencia(int diferencia, int num1, int num2){
  return (num1 - num2 > diferencia);
}

int valorAbsoluto(int num){
  return (num * -1);
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
  int suma;

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

  /*// WHILE Y DO WHILE
  
  repetir = "";
  while (repetir != contrasena){
    cout << avisar << endl;
    cin >> repetir;
  }

  do{
    cout << avisar << endl;
    cin >> repetir;
  } while (repetir != contrasena);*/
  
  /*FOR y WHILE python
  suma = 0
  for numero in range(0,101):
    suma += numero
  
  cont = 1
  suma = 0
  while (cont <= 100):
  suma += cont
  cont += 1*/

  /*FOR c++*/
  suma = 0;
  /*for(int i = 0; i <= 100; i++){                        //i++ es +1
    suma += i;
  }
  cout << "La suma de los 100 primeros numeros es: " << suma << endl;*/

  for (int i = 0; i <= 500; i++){
    if (i % 2 = 0)
    suma +=i;
  }


  cout << "¿Cuantos anios tienes?" << endl;
  cin >> edadIntroducida;
  if (edadIntroducida >= edad){
    cout << "Eres viejo" << endl;
  }else{
    cout << "Eres bebe" << endl;
  }

  diferencia = muchaDiferencia(5,edadIntroducida,edad);
  if (diferencia){
  cout << "Hay mucha diferencia de edad";
  }else{
  cout << "No hay mucha diferencia";
  }

  return 0;
}

