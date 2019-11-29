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
	for (unsigned i=0; i < micola.size(); ++i) {
		cout << aux.front() << ", ";
		aux.pop();
	}
	cout << "}" << endl;

	return 0;

}
