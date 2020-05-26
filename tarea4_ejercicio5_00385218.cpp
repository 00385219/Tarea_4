 #include <iostream>
 #include <cstring>
using namespace std;
 
int main()
{
    char texto[40];
    int numeLetras,ultLetra;

    cout << "\nIntroduce una palabra: \n";
    cin >>  texto;
    numeLetras = strlen(texto);
    ultLetra = numeLetras - 1;

    cout << "\nLa primera letra es: "  << texto[0] << endl;
    cout << "La ultima letra es: "  << texto[ultLetra] << endl;

    if (texto[0] == texto[ultLetra])
    {
        cout << "\nLa primera y ultima letra son las mismas.\n"  << endl;
    }
    else
    {
        cout << "\nLa primera y ultima letra son diferentes.\nO tambien es la misma letra en mayúscula y en minuscula"  << endl;
        // no encontre manera para que identificara la misma letra aunque sea mayuscula y minuscula    
    }
    
 
    return 0;
}