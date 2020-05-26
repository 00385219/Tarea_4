#include "iostream"

using namespace std;

int main(void)
{
   double num1;
    cout << endl << "Ingrese el numero para saber si es positivo, negativo o cero: \n";
    cin >> num1;
   
   if (num1!=0)
   {
       if(num1 > 0)
        {
            cout << endl << num1 << " es un numero positivo \n";
        }
        else
        {
            cout << endl << num1 << " es un numero negativo \n";
        }
   }
   else
   {
       cout << endl << "El numero que ingreso es cero. \n";
   }
  
    return 0;

}