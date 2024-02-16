/*********************************************************
 *  Alumno: Eric Eduardo Angel Angel
 *  Fecha: 15/02/2024
 *  Descripcion del programa:
        -Elaborar una suma de un arreglo con las siguientes características
            *Tener máximo 10 espacios
            *El usuario final debe elegir cuando entra un valor a cada posición
            *Mostrar lista de valores
            *Mostrar sumatoria de todos los elementos
            *Borrado y edición de elementos
            *Vaciado de arreglo
 *  Centro Universitario de los Altos
 *  Carrera: Ingeniería en computación/2do semestre
 *  Profesor: SERGIO FRANCO CASILLAS
 **********************************************************/

//declaracion de librerias
#include "iostream"

using namespace std;

//Inicio del main
int main (){

    //Declaracion de variables
    //Arreglo
    int numar[10]; // Arreglo
    int posnumar = 0; //Indica la posicion del arreglo
    int suma;//Variable que contiene la suma
    char opc;//Opciones del usuario
    bool ciclo = true;

    //Inicio del bucle
    while(ciclo){
    cout<<"1.- Ingresar valores"<<endl;
    cout<<"2.- Sumar valores"<<endl;
    cout<<"3.- Mostrar lista de valores"<<endl;
    cout<<"4.- Eliminar valores"<<endl;
    cout<<"5.- Salir"<<endl;
    cout<<"Elije una opcion"<<endl;
    cin>>opc;

    switch (opc) {
        //Ingresar valores case1
        case '1':
            //Sistema para ingresar valores
            if (posnumar < 10){
                cout<<"Ingresa el valor a agregar en la posicion "<<posnumar<<endl;
                cin>>numar[posnumar];
                posnumar++;
            }else{
                cout<<"Ha llegado al limite del arreglo porfavor limpia el arreglo"<<endl;
            }
            break;//Fin Case1

            //Suma de valores case2
        case '2':
            //Sumatoria de todos los valores del arreglo
            suma = 0; //Limpiamos la variable suma cada vez que se haga la suma
            for (int i = 0; i < posnumar ; ++i) {
               suma = suma + numar[i];
            }
            cout<<"El resultado de su suma es: "<< suma<<endl;
            break;//Fin case2

            //Mostrar lista de valores case3
        case '3':
            //Mostramos la lista de valores de los arreglos
            if (posnumar != 0){
            for (int i = 0; i < posnumar ; ++i) {
                cout<<"El valor en la posicion "<< i<<" es: "<<"[ "<<numar[i]<<" ]"<<endl;
            }//Fin del for
            } else {
                cout<<"No tiene ningun valor en su arreglo"<<endl;
            }

            break;//Fin case3

            //Limpiar arreglo case4
        case '4':
            posnumar = 0;
            for (int i = 0; i < 10 ; ++i) {
                numar[i] = 0;
            }
            break;//Fin case4


            //Salir case 4
        case '5':
            ciclo = false;
            break;//Fin case 4

        default:
            cout<<"Ingrese una opcion valida"<<endl;
            break;

    }//Fin switch



    }//Fin del bucle



    return 0;
}//Fin del main
