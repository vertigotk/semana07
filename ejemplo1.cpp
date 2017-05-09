#include <iostream>

using namespace std;

int main()
{
    //variable normal
    int x = 10;
    cout << " el valor de x es:" << x << endl;    //imprimir el valor 
    cout << " la direccion de x es : " << &x << endl;     //direccion de una variable
    cout << " la tamaño de x es : " << sizeof(x) << endl; //tamaño 
    
    //variable puntero
    int* ptrX; // nomenclatura camello ejemplo : nombreArchivo
               // nomenclatur c         ejemplo: nombre_archivo
              
    // asignando la direccion de x al puntero ptrX 
    ptrX = &x;           
    cout << "el valor de ptrX es :" << ptrX << endl; // imprimir el valor
    cout << " la direccion de ptrX es:" << &ptrX << endl; // direccion del puntero
    cout << " el tamaño de x es :" << &ptrX << endl; // el tamaño del puntero 
               
    return 0;
}