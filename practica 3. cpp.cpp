// practica_3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
	// Declaración las variables
	int num1, num2, num3;
int suma, producto, mayor, menor;
double promedio; 
//Pedimos los tres numeros al ususario 
cout << "Inrese el primer numero:";
cin >> num1; 
cout << "Ingrese el segundo numero:"; 
cin >> num2;
cout << "Ingrese el tarcer numero:";
cin >> num3;
//Calculamos la suma, el promedio y el producto 
suma = num1 + num2 + num3;
promedio = suma / 3.0; // Usamos 3.0 para que el promedio tenga decimales 
producto = num1 * num2 * num3;
// Calculamos el mayor
mayor = num1; 
if (num2 > mayor) {
	mayor = num2;
}
if (num3 > mayor) {
	mayor = num3; 
}
	//Calculamos el menor 
menor = num1;
if (num2 < menor) {
	menor = num2;
}
if (num3 < menor) {
	menor = num3;
} 
// Mostramos los resultados 
cout << "\nResultados:\n";
cout << "Suma:" << suma << endl;
cout << "Promedio: " << producto << endl;
cout << "Mayor:" << mayor << endl;
cout << "Menor:" << menor << endl; 
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
