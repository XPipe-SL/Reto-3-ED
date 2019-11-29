#include <iostream>
#include "cola.h"

using namespace std;

int main(){

	cout << "Implementación de Cola (std::queue) mediante una pila (std::stack)" << endl;	
	cout << "Construimos una cola con enteros del 1 al 10" << endl;
	
	cola<int> micola;
	for (unsigned i=1; i <= 10; ++i)
		micola.push(i);
	
	cola<int> aux(micola);
	cout << "Cola: {";
	while (!aux.empty()) {
		cout << aux.front() << ", ";
		aux.pop();
	}
	cout << "}" << endl;
	
	cout << "Probamos el método empty()" << endl;
	if (micola.empty()) 
		cout << "La cola está vacía" << endl;
	else 
		cout << "La cola no está vacía" << endl;
	
	cout << "Eliminamos el primer elemento" << endl;
	
	micola.pop();
	
	cola<int> aux2(micola);
	cout << "Cola: {";
	while (!aux2.empty()) {
		cout << aux2.front() << ", ";
		aux2.pop();
	}
	cout << "}" << endl;

	cout << "Añadimos un '1' al final" << endl;
	micola.push(1);

	cola<int> aux3(micola);
	cout << "Cola: {";
	while (!aux3.empty()) {
		cout << aux3.front() << ", ";
		aux3.pop();
	}
	cout << "}" << endl;

	cout << "Creamos una cola con elementos del 0 al 4 y las intercambiamos" << endl;

	cola<int> otracola;
	for (unsigned i = 0; i < 5; ++i)
		otracola.push(i);
	micola.swap(otracola);

	cola<int> tmp(micola);
	cout << "Cola original (después del intercambio): {";
	while (!tmp.empty()) {
		cout << tmp.front() << ", ";
		tmp.pop();
	}
	cout << "}" << endl; 	
	
	cola<int> tmp2(otracola);
	cout << "Nueva cola (después del intercambio): {";
	while (!tmp2.empty()) {
		cout << tmp2.front() << ", ";
		tmp2.pop();
	}
	cout << "}" << endl;

	cout << "Igualamos la cola original con la nueva cola." << endl;
	micola = otracola;
	
	cola<int> tmp3(micola);
	cout << "Cola original (después de la asignación): {";
	while (!tmp3.empty()) {
		cout << tmp3.front() << ", ";
		tmp3.pop();
	}
	cout << "}" << endl; 
	
	return 0;
}
