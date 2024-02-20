/*********************************************************
 *  Alumno: Eric Eduardo Angel Angel
 *  Fecha: 20/02/2024
 *  Descripcion del programa:
        -Elaborar una suma de un vector con las siguientes características
            *No tiene limirw
            *El usuario final debe elegir cuando entra un valor a cada posición
            *Mostrar lista de valores
            *Mostrar sumatoria de todos los elementos
            *Borrado y edición de elementos
            *Vaciado del vector
 *  Centro Universitario de los Altos
 *  Carrera: Ingeniería en computación/2do semestre
 *  Profesor: SERGIO FRANCO CASILLAS
 **********************************************************/

//declaracion de librerias
#include "iostream"
#include "vector"
using namespace std;

//Inicio del main
int main (){

    //Declaracion de variables

    vector<int> nvector; //Vectores
    int valor;//Valor que define al vector
    int edit;//Valor para editar una posicion en el vector

    int suma;//Variable que contiene la suma
    char opc;//Opciones del usuario
    bool ciclo = true;

    //Inicio del bucle
    while(ciclo){
        cout<<"1.- Ingresar valores"<<endl;
        cout<<"2.- Sumar valores"<<endl;
        cout<<"3.- Mostrar lista de valores"<<endl;
        cout<<"4.- Eliminar valores"<<endl;
        cout<<"5.- Editar un elemento en una poscion en espesifico"<<endl;
        cout<<"6.- Salir"<<endl;
        cout<<"Elige una opcion"<<endl;
        cin>>opc;

        switch (opc) {

            case '1'://Sistema para ingresar valores

                    cout<<"Ingresa el valor a agregar en la posicion "<<nvector.size() + 1 <<endl;
                    cin >> valor;
                    //Funcion que permite ingresar un valor al dinal del vector
                    nvector.insert(nvector.end(), valor);

                break;//-----------------------


            case '2'://Sumatoria de todos los valores del arreglo

                suma = 0; //Limpiamos la variable suma cada vez que se haga la suma
                for (int i = 0; i < nvector.size() ; ++i) {
                    suma = suma + nvector[i];
                }
                cout<<"El resultado de su suma es: "<< suma<<endl;
                break;//----------------------------------------


            case '3'://Mostramos la lista de valores de los arreglos

                if (nvector.size() != 0){
                    for (int i = 0; i < nvector.size() ; ++i) {
                        cout<<"El valor en la posicion "<< i + 1<<" es: "<<"[ "<<nvector[i]<<" ]"<<endl;
                    }//Fin del for
                } else {
                    cout<<"No tiene ningun valor en su vector"<<endl;
                }

                break;//---------------------------------------

            case '4'://Limpiar arrego

                nvector.clear();
                break;//--------------------

            case '5': //Editar un elemento de una posicion en espesifico



                if (nvector.size() != 0){//verifica la existencia de valores dentro del vector
                    cout<<"Que posicion desea modificar.\nEl Rango de su vector es de: 1 - "<<nvector.size()<<endl;
                    cin>>edit;

                    if (edit <= nvector.size()){//Verifica que la posicion a modificar exista dentro del vector
                        cout<<"Ingrese el valor a agregrar"<<endl;
                        cin>>valor;
                        nvector[edit-1] = valor;


                    }else{
                        cout<<"Esa posicion aun no esta en su arreglo"<<endl;
                        }
                    } else{
                    cout<<"No tiene nungun valor su vector"<<endl;
                }
                break;//-------------


            case '6'://Salir case 6
                ciclo = false;
                break;//------------

            default:
                cout<<"Ingrese una opcion valida"<<endl;
                break;

        }//Fin switch
    }//Fin del bucle
    return 0;
}//Fin del main
