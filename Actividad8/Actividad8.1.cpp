/*********************************************************
 *  Alumno: Eric Eduardo Angel Angel
 *  Fecha: 27/02/2024
 *  Descripcion del programa:
            -Elaborar un programa que realice las operaciones de dos conjuntos:
        *Inserción de valores por parte del usuario (arreglos o vectores)
        *Pueden ser textuales o numéricos
        *Borrado y edición de elementos
        *Vaciado de conjuntos
        *Operaciones de Unión, Intersección, Diferencia y complemento.
 *  Centro Universitario de los Altos
 *  Carrera: Ingeniería en computación/2do semestre
 *  Profesor: SERGIO FRANCO CASILLAS
 **********************************************************/
//Declaracion de librerias
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    //Declaracion de variables
    //Vectores

    set<string> set1;//Conjunto 1
    set<string> set2;//Conjunto 2
    set<string> resultado;//Conjunto resultante
    string elemento;//Elementos de los conjuntos

    char opc,opc2;//Menus
    bool bucle = true;
    
    do{
        system("cls");
        cout<<"Menu----------------------------"<<endl;
        cout<<"1.-Ingresar elemento al conjunto 1"<<endl;
        cout<<"2.-Ingresar elemento al conjunto 2"<<endl;
        cout<<"3.-Mostrar conjuntos"<<endl;
        cout<<"4.-Eliminar conjuntos"<<endl;
        cout<<"5.-Edicion de un elemento especifico"<<endl;
        cout<<"6.-Realizar operacion de conjuntos Union, Interseccion, Diferencia y complemento"<<endl;
        cout<<"7.-Salir"<<endl;
        cout<<"Elija una opcion: "<<endl;
        cin>>opc;

        switch (opc){
            case '1'://Ingresar elementos al conjunto 1
                cout << "Ingresa el elemento a agregar al conjunto 1: "<<endl;
                cin >> elemento;
                set1.insert(elemento);
                break;

            case '2'://Ingresar elementos al conjunto 2
                cout << "Ingresa el elemento a agregar al conjunto 2: "<<endl;
                cin >> elemento;
                set2.insert(elemento);
                break;

            case '3'://Mostrar los elementos de los conjuntos
                cout<<"El conjunto 1 tiene los siguientes valores"<<endl;
                cout<<"Conjunto 1 = ";
                for (const auto &elemen : set1) {
                    cout << "{" << elemen << "}";
                }

                cout << endl
                     << "El conjunto 2 tiene los siguientes valores" << endl;
                cout << "Conjunto 2 = ";
                for (const auto &elemen : set2) {
                    cout << "{" << elemen << "}";
                }
                
                cout<<endl;
                system("pause");
                break;
            
            case'4': //Eliminar conjuntos
                set1.clear();
                set2.clear();
                break;

            case '5'://Eliminar un elemento
                // Buscar y eliminar el elementos
                cout << "Ingrese el valor del elemento a borrar: ";
                cin >> elemento;
                set1.erase(elemento);
                set2.erase(elemento);

                system("pause");                
                break;

            case '6'://Realizar operaciones de conjuntos
                cout<<"1.-Union"<<endl;
                cout<<"2.-Interseccion"<<endl;
                cout<<"3.-Diferencia"<<endl;
                cout<<"4.-Complemento de A"<<endl;
                cout<<"5.-Complemento de B"<<endl;
                cout<<"Elije una opcion una opcion"<<endl;
                cin>>opc2;


                switch (opc2) {
                    case '1'://Union
                        resultado.clear();
                        cout<<"La union de los dos conjuntos es = ";

                        // Realizar la operación de unión usando los conjuntos set1 y set2
                        set_union(set1.begin(), set1.end(), 
                        set2.begin(), set2.end(),
                        inserter(resultado, resultado.end()));
                        //Mostrar el conjunto resultante
                        for (const auto& elem : resultado) {
                        cout << "{" << elem << "}";
                        }
                        
                        system("pause");
                        break;

                    case '2'://Interseccion
                        resultado.clear();
                        cout<<"El la interseccion de los dos conjuntos es = ";
                        
                        //Realizar la operacion de interseccion con los conjuntos set1 y set2
                        set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), 
                        inserter(resultado, resultado.end()));
                        //Mostrar el conjunto resultante
                        for (const auto& elem : resultado) {
                        cout << "{" << elem << "}";
                        }

                        system("pause");
                        break;

                    case '3'://Diferencia
                        resultado.clear();
                        cout<<"La diferencia de los dos conjuntos es = ";

                        //Se realiza la diferencia de los dos conjuntos
                        set_difference(set1.begin(), set1.end(), 
                        set2.begin(), set2.end(),
                        inserter(resultado, resultado.end()));
                        
                        set_difference(set2.begin(), set2.end(), 
                        set1.begin(), set1.end(),
                        inserter(resultado, resultado.end())); 
                        //Mostrar el conjunto resultante
                        for (const auto& elem : resultado) {
                        cout << "{" << elem << "}";
                        }
                        system("pause");
                        break;

                    case '4'://Complemento de A
                        resultado.clear();
                        cout<<"El complemento de A es = ";
                        //Se realiza el complemento del conjunto A
                        set_difference(set2.begin(), set2.end(), 
                        set1.begin(), set1.end(),
                        inserter(resultado, resultado.end()));

                        for (const auto& elem : resultado) {
                        cout << "{" << elem << "}";
                        }
                        system("pause");
                        break;
                    
                    case '5'://Complemento de B
                        resultado.clear();
                        cout<<"El complemento de B es = ";
                        //Se realiza el complemento del conjunto B
                        set_difference(set1.begin(), set1.end(), 
                        set2.begin(), set2.end(),
                        inserter(resultado, resultado.end()));
                        //Mostrar el conjunto resultante
                        for (const auto& elem : resultado) {
                        cout << "{" << elem << "}";
                        }
                        system("pause");                    
                        break;
                }

                break;//Fin Case 6
            case '0'://Salir
                bucle = false;
                break;
            default:
                cout<<"Ingrese una opcion valida"<<endl;
                break;
        }//Fin del switch


    }while (bucle);  //Fin del dowhile


    return 0;
}//Fin del main