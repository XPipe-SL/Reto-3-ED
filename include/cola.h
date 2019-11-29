/**
 * @file cola.h
 * @brief Fichero del T.D.A. cola.
 * @author Miguel Piñar
 */
#ifndef cola_h
#define cola_h

#include <stack>
#include <iostream>

using namespace std;

/**
 * @brief T.D.A. cola::cola, empty, clear, front, push, pop 
 * 
 * Una instancia @e c del tipo de datos abstracto @c cola representa una
 * cola de objetos de la clase <T>.
 * Una cola es un tipo particular de secuencia en la que los
 * elementos se insertan por un extremo (final) y se
 * consultan y suprimen por el otro (frente). Son secuencias
 * del tipo FIFO (First In, First Out).
 *
 * Son objetos mutables. Residen en memoria dinámica.
 */

template <class T>
class cola{
	private:

		stack<T> datos;

	public:

		/**
		 * @brief Constructor por defecto.
		 * Crea una cola vacía.
		 */
		cola<T>();

		/**
		 * @brief Constructor de copia.
		 * @param c cola a copiar.
		 */
		cola<T>(const cola<T> & c) : datos(c.datos) {};

		/**
		 * @brief Destructor.
		 */
		~cola<T>();

		/**
		 * @brief Informa si la cola está vacía.
		 * @return @c true, si la cola está vacía. @c false en cualquier otro caso.
		 */
		bool empty() const;

		/**
		 * @brief Acceso al primer elemento.
		 * @pre La cola no puede estar vacía.
		 * @return Referencia a este elemento.
		 */
		T & front();

		/**
		 * @brief Acceso al primer elemento.
		 * @pre La cola no puede estar vacía.
		 * @return Referencia constante a este elemento.
		 */
		const T & front() const;

		/**
		 * @brief Coloca un elemento al final de la cola.
		 * @param elem elemento a instertar.
		 */
		void push(const T & elem);

		/**
		 * @brief Quita el elemento al frente de la cola.
		 * @pre La cola no puede estar vacía.
		 */
		void pop();

		/**
		 * @brief Devuelve el tamaño de la cola.
		 */
		size_t size() const;

		/**
		 * @brief Intercambia los contenidos de las dos colas.
		 * @param c La cola a intercambiar.
		 */
		void swap(cola<T> & c);

};

#include "cola.cpp"

#endif
