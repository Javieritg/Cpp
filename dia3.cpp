#include <iostream>
using namespace std;

void ceroACien(){
    for (int i = 100; i >= 0; i--){
        cout << i << endl;
    }
}

int maximo(int vector[], int num){
    int max;
    for (int i = 0; i < num; i++){
        if (i == 0 || max < vector[i]){
            max = vector[i];
        }
    }
    return max;
}


int minimo(int vector[], int num){
    int min;
    for (int i = 0; i < num; i++){
        if (i == 0 || min > vector[i]){
            min = vector[i];
        }
    }
    return min;
}


int main(){

    string intro;
    string avisar = "Introduce una palabra";
    string contrasena = "paco";
    bool esCorrecto = false;
    int edad;
    int nota;
    int num;
    int repetir = 0;
    string lista;
    int Fin = -1;
    int n;

    
    cout << "Ejercicio 1" << endl;
    while (!esCorrecto){
    cout << avisar << endl;
    cin >> intro;
    if (intro == contrasena){
      esCorrecto = true;
    }
    }

    cout << "Ejercicio 2" << endl;
    cout << "Cuantos anios tienes?" << endl;
    cin >> edad;
    if (edad < 18){
        cout << "Es menor de edad" << endl;
    }else{
    cout << "Es mayor de edad" << endl;
    }


    cout << "Ejercicio 3" << endl;
    cout << "Cual es tu nota?" << endl;
    cin >> nota;
    if (nota < 5){
        cout << "Suspenso" << endl;
    }
    if (nota >= 5 && nota < 6){
    cout << "Suficiente" << endl;
    }
    if (nota >= 6 && nota < 7){
    cout << "Bien" << endl;
    }
    if (nota >= 7 && nota < 9){
    cout << "Notable" << endl;
    }else{
    cout << "Sobresaliente" << endl;
    }

    cout << "Ejercicio 4" << endl;
    cout << "Escribe un numero" << endl;
    cin >> num;
    if (num % 2 == 0){
        cout << "Es par" << endl;
    }else{
    cout << "Es impar" << endl;
    }


    cout << "Ejercicio 6" << endl;
    

    do{
    cout << "Introduce un numero" << endl;
    cin >> repetir;
    lista = repetir;
    
    
    for (int i = 0 ; i < repetir ; i++){
        lista=i;
    }
    } while (repetir != Fin);

    cout << lista << endl;

    cout << "no consigo guardar la lista" << endl;

    cout << "Ejercicio 7" << endl;


    cout << "Ejercicio 8" << endl;
    ceroACien();
    
    



return 0;
}
