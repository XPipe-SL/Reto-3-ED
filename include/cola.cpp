/**
 * @file cola.cpp
 * @brief Fichero de implementación del T.D.A. cola.
 * @author Miguel Piñar
 */


template <class T>
cola<T>::cola(){
	datos();
}

template <class T>
cola<T>::cola(const cola<T> & c){
	datos(c.datos);
}

template <class T>
cola<T>::~cola<T>(){
	datos.~stack<T>;
}

template <class T>
bool cola<T>::empty() const{
	return datos.empty();
}

template <class T>
void cola<T>::clear(){
	datos.clear();
}

template <class T>
T & cola<T>::front(){
	return datos.top();
}

template <class T>
const T & cola<T>::front() const{
	return datos.top();
}

template <class T>
void cola<T>::push(const T & elem){
	stack<T> aux;
	for  (unsigned i=0; i < datos.size(); ++i) {
		aux.push(datos.front());
		datos.pop();
	}

	aux.push(elem);

	for (unsigned i=0; i < aux.size(); ++i) {
		datos.push(aux.front());
		aux.pop();
	}
}

template <class T>
void cola<T>::pop(){
	datos.pop();
}

template <class T>
size_t cola<T>::size() const{
	return datos.size();
}

template <class T>
void cola<T>::swap(cola<T> & c){
	datos.swap(c.datos);
}
