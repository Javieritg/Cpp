#include <iostream>
#include <string>
using namespace std;

int main(){
	string palabra1, palabra2;
	string palabra;
	int numero;
	int numero1 = 1;
	int numero2 = 2, numero3 = 3;
	const int NUMERO = 0;
	double decimal;
	char letra;
	bool booleano;

	/*// Jugamos con palabra
	palabra1 = "perro";
	cout << palabra1 << endl;
	palabra2 = "verde";
	cout << palabra2 << endl;
	cout << palabra1 + " " + palabra2 << endl;
	cout << palabra1 << " " << palabra2 << endl;

	palabra = palabra1.append(palabra2)
	cout << palabra << endl;
	palabra1.append(palabra2);
	cout << palabra1 << endl;*/

	palabra = "nada";
	palabra = palabra + " " + palabra2;
	cout << palabra1 << endl;
	
	int xint, yint;
	string xstr, ystr;
	xint = 10;
	yint = 20;
	xstr = "10";
	ystr = "20";
	cout << "Aqui se imprime el xint: " << xint << endl;
	cout << "Aqui se imprime el xstr: " << xstr << endl;
	cout << "int x+y = " << xint + yint << endl;
	cout << "str x+y = " << xstr + ystr << endl;
	cout << "xstr + to_string(yint) = " << xstr + to_string(yint) << endl;
	cout << "stoi(xstr) + yint = " << stoi(xstr) + yint << endl;

	cout << palabra << endl;
	cout << "La palabra tiene " << palabra.length() << " letras." << endl;
	cout << "La palabra tiene " << palabra.size() << " letras." << endl;
	cout << "La primera letra de palabra es: " << palabra[0];


	/*//Jugamos con número
	cout << numero1 << endl;
	cout << numero2 << endl << numero3 << endl;
	numero2 = 6;
	cout << numero2 << endl;
	numero3 = 5.4;
	cout << numero3 << endl;

	decimal = 5.4;
	cout << decimal << endl;
	decimal = 5;
	cout << decimal << endl;*/

	/*//Jugamos con letra
	letra = 'A';
	cout << letra << endl;
	//letra = "A";
	//letra = A;
	cout << letra << endl;
	numero1 = letra;
	cout << numero1 << endl;
	numero1 = 90;
	letra = numero1;
	cout << letra << endl;
	char letraExtra = 65;
	cout << letraExtra << endl;
	//letraExtra = 355;
	//cout << letraExtra << endl;
	*/

	/*//Jugamos con booleano
	booleano = true;
	cout << booleano << endl;
	booleano = false;
	cout << booleano << endl;
	booleano = 1;
	cout << booleano << endl;
	numero1 = booleano;
	cout << numero1 << endl;
	booleano = 8;
	cout << booleano << endl;
	booleano = -2;
	cout << booleano << endl;
	*/

	/*//Jugar con operadores:
	numero1 = 4 + 5;
	cout << numero1 << endl;
	numero1 = 4 - 5;
	cout << numero1 << endl;
	numero1 = 4 * 5;
	cout << numero1 << endl;
	numero1 = 4 / 5;
	cout << numero1 << endl;
	decimal = 4 / 5;
	cout << decimal << endl;
	numero1 = 4 % 5;
	cout << numero1 << endl;
	//numero1 = 4 ** 5;
	//cout << numero1 << endl;
	numero1 += numero1;
	cout << numero1 << endl;
	numero1 -= numero1;
	cout << numero1 << endl;
	numero1 = 2;
	numero1 *= numero1;
	cout << numero1 << endl;
	numero1 /= numero1;
	cout << numero1 << endl;
	//Incremento / Decremento
	numero1++;
	cout << numero1 << endl;
	numero1--;
	cout << numero1 << endl;
	++numero1;
	cout << numero1 << endl;
	--numero1;
	cout << numero1 << endl;*/

	return 0;
}

