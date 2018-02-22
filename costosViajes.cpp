/* Practica 2. Costos viaje.
Programacion de sistemas electronicos.
Alina M. De los Santos T. --- 1065370 --- */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main7() {
	
	float M_g, distance, price, costoViaje;             //Variables a calcular
	int option, num;
	num = 1;

	while (num == 1) {

		cout << "Costo de viaje\n" << "Ingresar millas por galon y distancia en Km\t";
		cin >> M_g >> distance;
		
		// Precio de la gasolina
		cout << endl << "Utilizar el precio de la gasolina default (insertar 1) o ingrese el precio?\n";
		cin >> option;

		if (option == 1) {
			price = 234.30;
		}

		// Calculo del viaje
		distance = distance * 0.621371;
		costoViaje = (distance * price) / M_g;
		cout << endl << "Costo del viajes\t" << fixed << setprecision(3) << costoViaje << "\tpesos";

		cout << endl << "Desea calcular otro viaje?\n" << "1. si\t" << "2. no\n";
		cin >> option;
		if (option == 1) {                                                       //Para repetir el programa
			num = 1;
		}
		else {
			num = 0;
		}
	}
}