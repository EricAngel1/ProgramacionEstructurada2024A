/*********************************************************
 *  Alumno: Eric Eduardo Angel Angel
 *  Fecha: 15/04/2024
 *  Descripcion del programa:
            *Pedir al usuario una palabra o frase
            *Debe contar el número de vocales, consonantes y espacios
            *Debe determinar si es una palabra palíndromo 
            *Convertir palabra o frase a Mayúsculas y minúsculas
            *Solicitar otra palabra o frase y que se concatene con la anterior
            *Utilizar funciones y librerías
 *  Centro Universitario de los Altos
 *  Carrera: Ingeniería en computación/2do semestre
 *  Profesor: SERGIO FRANCO CASILLAS
 **********************************************************/
#include "iostream"
#include "string"
#include "cctype"

#include "Lib.cpp"

using namespace std;


int main(){
    char opc;
    bool salir = false;
    string frase;
    string nuevaFrase;
    
      
    cout<<"Ingresa una frase o palabra"<<endl;
    getline(cin, frase);
    do{ 
      
    cout<<"La cantidad de vocales son: "<<ContarVocales(frase)<<endl;
    cout<<"La cantidad de consonantes son: "<<ContarConsonantes(frase)<<endl;
    cout<<"La cantidad de espacios son "<<ContarEspacios(frase)<<endl;
    cout<<"Su frase es polindromo: ";
    if(Polindromo(frase)){
        cout<<"Si"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    
    ConvertirMayMin(frase);
    cout<<endl;

    cout<<"1.-Desea salir \n2.-Añadir otra frase a la frase \n3.-Ingresar nueva frase"<<endl;
    cin>>opc;
    cin.ignore();

    switch (opc)
    {
    case '1':
        salir = true;
        break;
        
    case '2':
    cout << "\n Ingresa la nueva frase: \n";
    cin >> nuevaFrase; // Leer solo la palabra
    frase += " " + nuevaFrase; // Concatenar sin espacios adicionales
    cout << "\nFrase concatenada: " << frase << endl;
    nuevaFrase.clear();
        break;

    case '3':
        cout << "\n Ingresa la nueva frase: \n";
        frase.assign(""); // Limpiar la frase completamente
        getline(cin, frase); // Leer la nueva frase completa
        break;
    
    default:
        cout<<"Opcion incorrecta"<<endl;
        break;
    }
    }while(!salir);
    return 0;
}