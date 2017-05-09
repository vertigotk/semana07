#include <iostream>

using namespace std;

int main()
{
    int numero = 20;
    string texto = " UTEC";
    
    // punteros a variables
    int* ptrNumero = &numero;
    string* ptrTexto = &texto;
    
    // imprimiendo los valores de la variable usando usando operador *
    cout << " el valor de numero es:" << *ptrNumero << endl;
    cout << " valor de texto :" << *ptrTexto << endl;
    
    return 0;
}