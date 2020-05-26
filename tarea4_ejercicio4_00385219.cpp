#include <cstring>
#include <iostream>
using namespace std;
 
 
int main()
{
    char texto[50];
    int numLetras;
     
    cout << "Introduce una palabra: \n";
    cin >>  texto;
    numLetras = strlen(texto);

    if (numLetras > 10)
    {
        if (numLetras % 2 == 0)
        {
            cout << "\nEl texto que ingreso tiene mas de 10 caracteres.";
            cout << "\nLa cantidad de caracteres que ingreso es: "<< numLetras;
            cout << "\nLa cantidad de caracteres que ingreso es par.";
        }
        else
        {
            cout << "\nEl texto que ingreso tiene mas de 10 caracteres.";
            cout << "\nLa cantidad de caracteres que ingreso es: "<< numLetras;
            cout << "\nLa cantidad de caracteres que ingreso es impar.";
        }
        
    }
    else
    {
        if (numLetras % 2 == 0)
        {
            cout << "\nEl texto que ingreso tiene menos de 10 caracteres.";
            cout << "\nLa cantidad de caracteres que ingreso es: "<< numLetras;
            cout << "\nLa cantidad de caracteres que ingreso es par.";
        }
        else
        {
            cout << "El texto que ingreso tiene mas de 10 caracteres.";
            cout << "\nLa cantidad de caracteres que ingreso es: "<< numLetras;
            cout << "La cantidad de caracteres que ingreso es impar.";
        }
    }
       
 
    return 0;
}