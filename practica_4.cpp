// practica_4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 
int main() {
	double radio; 
	// Pedir al usuario que ingrese el radio
	cout << "Ingrese el radio del circulo:";
	cin >> radio;
	// Calcular el diametro, la circunferencia y el area
	double diamtero = 2 * radio;
	double circunferencia = 2 * 3.14159 * radio;
	double area = 3.14159 * radio * radio;
	//Mostrar los resultados 
	cout << "Diametro:"  << diamtero << endl;
	cout << "Circunferencia:" << circunferencia << endl;
	cout << "Area:" << area << endl;
	return 0;
	
} // Fin de la función main]


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
