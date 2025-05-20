// practica1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream> // Libreria para entrada y salida estandar 
using namespace std; // Para no poner std:: antes de cout, cin, etc.
int main() {
	double num1, num2; // Uso double para permitir decimales
	cout << "Ingrese el primer numero : ";
		cin >> num1;
	cout << "Ingrese el segundo numero:";
	cin >> num2;
	cout << "/nResultados;/n";
	cout << "Suma:" << num1 + num2 << endl;
	cout << "Resta:" << num1 - num2 << endl;
	cout << "Producto:" << num1 * num2 << endl;
	if (num2 != 0) {
		cout << "Cociente:" << (num1 / num2) << endl;
	}
	else
	{
		cout << "No se puede dividir por cero." << endl;
	}
	system("pause"); // para que no se cierre la ventana 
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
