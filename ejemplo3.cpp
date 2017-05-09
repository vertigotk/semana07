#include <iostream>
#include <string>
using namespace std;

void suma (int a, int b, int& resultado)
{
    resultado = a + b;
}

int main()
{
    int x = 10;
    int y = 20;
    
    
    int sumaXY = 0;
    
    suma ( x , y ,  sumaXY);
    
    cout << " el resultado es:" << sumaXY;
    
    
}