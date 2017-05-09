#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void completarArreglo(int* arreglo, int cantidad)
{
    for ( int i = 0; i < cantidad; i++)
    {
        arreglo1[i] = rand() % 51;
    }
    
}

int main()
{
    int arreglo1[10];
    int arreglo2[20];
    
    completarArreglo(arreglo1,10);
    
    completarArreglo(arreglo2, 20);
    
    for (auto i : arreglo1)
    cout << i << endl;
    
    for ( int i )
    {
        arreglo1[i] = rand() % 51;
    }
    
    
    for ( int i = 0; i < 20; i++)
    {
        arreglo1[i] = rand() % 51;
    }
    
     
    return 0;
}