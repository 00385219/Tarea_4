#include "iostream"

using namespace std;

int main(void)
{
   int num1;
    cout << endl << "Ingrese el numero para saber si es par o impar: \n";
    cin >> num1;
   
   if (num1!=0)
   {
       if(num1 % 2 == 0)
        {
            printf("%d SI es numero par",num1);
        }
        else
        {
            printf("%d NO es numero par",num1);
        }
   }
   else
   {
       cout << endl << "El numero que ingreso es cero. \nY el cero no esta definido si es par o no";
   }
  
    return 0;

}