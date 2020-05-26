#include "iostream"

using namespace std;

int main(void)
{
   int num1, num2;
    cout << endl << "Ingrese el primer numero: \n";
    cin >> num1;
    cout << endl << "Ingrese el segundo numero: \n";
    cin >> num2;
   
   if (num2!=0)
   {
       if(num1 % num2 == 0)
        {
            printf("%d es SI es divisible entre %d",num1,num2);
        }
        else
        {
            printf("%d NO es divisible entre %d",num2,num1);
        }
   }
   else
   {
       cout << endl << "El segundo numero que ingreso es cero. \nY la division entre el cero esta indefinida";
   }
  
    return 0;

}