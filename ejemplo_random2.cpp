#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()
{
   string narchivo;
   cout << "Ingrese el nombre del archivo:";
   cin >> narchivo;
   ofstream archivo(narchivo);
   // Pedir la cantidad de numeros a generar
   int n;
   cout << "Ingrese el numero:"<<endl;
   cin>>n;
   
   //Pedir limite del rango y validea que no sea mayor a RAND_MAX
   int limite=0;
   do
   {
       cout << "Ingrese el limite: ";
       cin >> limite;
   } while (limite >= RAND_MAX);
   
   //Generar numeros aleatorios que deberan ser grabados en el archivo (FUNCION)
   for( int i=0; i< n; i++)
   {
       archivo << rand() << endl;
   }
   //Cerrar el archivo
    
    archivo.close();
    
    return 0;
    
}