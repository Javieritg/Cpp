#include <iostream>
using namespace std;

/*void mostrarArray(string array[]){
    for (int i = 0 ; i < array->size() ; i++){
        cout << i << " = " << array[i] << endl;
    }
}*/

int multiplicaX5(int num){
    return(num * 5);
}

void meMultiplicoX5(int &num){
    num = num * 5;
    cout << "Num en la funcion vale: " << num << endl;
}

void subirNota(int notas[3], int posicion, int nuevaNota){
    notas[posicion] = nuevaNota;
}

void imprimirArray(int array[20], int tamanio){
    for (int i = 0; i < tamanio; i++){
        cout << array[i] << endl;
    }
}



int main(){
    
    int numJuegos = 100;
    string juegos[numJuegos];


    int num1 = 2;
    int num2 = 0;
    int notas[] = {8,4,9};

    string repetir;
    string avisar = "Introduce una palabra";
    string contrasena = "paco";
    bool esCorrecto = false;

    int edad;
    int nota;
    int num;


    /*num2 = multiplicaX5(num1);
    cout << "El num 1 es: " << num1 << endl;
    cout << "El num 2 es: " << num2 << endl;

    meMultiplicoX5(num1);
    cout << "El num 1 es: " << num1 << endl << endl;

    cout << "Notas original: " << endl;
    imprimirArray(notas,3);
    cout << "Subimos la nota: " << endl;
    subirNota(notas, 1,9);
    cout << "Notas tras subir: " << endl;
    imprimirArray(notas,3);

    
    while (!esCorrecto){
    cout << avisar << endl;
    cin >> repetir;
    if (repetir == contrasena){
      esCorrecto = true;
    }*/
  
    cout << "Cuantos anios tienes?" << endl;
    cin >> edad;
    if (edad < 18){
        cout << "Es menor de edad" << endl;
    }else{
    cout << "Es mayor de edad" << endl;
    }

    cout << "Cual es tu nota?" << endl;
    cin >> nota;
    if (nota < 5){
        cout << "Suspenso" << endl;
    }
    elif (nota >= 5 && nota < 6){
    cout << "Suficiente" << endl;
    }
    elif (nota >= 6 && nota < 7){
    cout << "Bien" << endl;
    }
    elif (nota >= 7 && nota < 9){
    cout << "Notable" << endl;
    }else{
    cout << "Sobresaliente" << endl;
    }

    cout << "Escribe un numero" << endl;
    cin >> num;
    if (num % 2 = 0){
        cout << "Es par" << endl;
    }else{
    cout << "Es impar" << endl;
    }




    /*cout << "Cuantos juegos quieres introducir?" << endl;

    cin >> numJuegos;

    for (int i = 0 ; i < numJuegos ; i++){
        string jue;
        cout << "Introduce el nombre de un juego: ";
        cin >> jue;
        juegos[i] = jue;
    }
    juegos[4] = "tetris";

    for (int i = 0 ; i < numJuegos ; i++){
        cout << "juegos" << i << " = " << juegos[i] << endl;
    }*/

    /*rellenar un vector con los 100 primeros numeros
    Sumar de 4 en 4 los numeros y guardarlo en otro vector.
    {0,1,2,3,4,5...} -> {6,22,38...}*/


    //mostrarArray(juegos);




    return 0;
}
