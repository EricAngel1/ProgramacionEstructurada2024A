#include <iostream>
#include <string>

using namespace std;

bool verificador(string elemen){
    bool verf;
    //For para verificar el string dato por dato
    for (int i = 0; i < elemen.length(); ++i)
    {
        char caracter = elemen[i];
        //Filtra los datos numericos y alfabeticos de los caracteres especiales
        if (caracter >= '0' and caracter <= '9')
        {
            verf = true;
        }else{
            verf = false;
            break;
        }           
    }
        return verf;
}//Fin funcion verificar