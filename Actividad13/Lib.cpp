#include "iostream"
#include "string"
#include "cctype"
#include <algorithm>

using namespace std;



int ContarVocales(string frase){//cuenta las vocales
    int vocales = 0;
    for (char c : frase) {      
          if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            vocales++;
        }
    }

    return vocales;

}

int ContarConsonantes(string frase){//Cuenta las consonantes
    int consonantes = 0;

    for (char c : frase) {      
          if (isalpha(c) && tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
            consonantes++;
        }
    }

    return consonantes;
}

int ContarEspacios(string frase) { //Cuenta los espacios
    int espacios = 0;

    for (char c : frase) {
        if (isspace(c)) {
            espacios++;
        }
    }
    
    return espacios;
}

bool Polindromo(string frase){//Verifica si una palabra es palindromo
    remove_if(frase.begin(), frase.end(), ::isspace);
    string invertida = frase;
    reverse(invertida.begin(), invertida.end());
    
    if (invertida == frase) {
        return true;
    } else {
        return false;
    }  
}

void ConvertirMayMin(string frase){//Convierte las mayusculas en minusculas y viceversa
    string mayusculas = frase, minusculas = frase;

    transform(mayusculas.begin(), mayusculas.end(), mayusculas.begin(), ::toupper);
    transform(minusculas.begin(), minusculas.end(), minusculas.begin(), ::tolower);
    cout<<"Su oracion en mayusculas es: "<<mayusculas<<endl;
    cout<<"Su oracion en mayusculas es: "<<minusculas<<endl;
}