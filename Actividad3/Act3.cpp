/*********************************************************
 *  Alumno: Eric Eduardo Angel Angel
 *  Fecha: 08/02/2024
 *  Descripcion del programa:
       - Si el número es mayor a 0 y menor a 500, subir de 5 en 5, 100 veces.
       - Si el número es mayor a 500 y menor a 1000, subir el número de 10 en 10, 50 veces
       - Si el número es mayor a 1000, “No se puede calcular el valor”.
       - Debe hacer un ciclo en donde pregunte si desea terminar el programa.
       - Contar con las veces que realizó una operación.
       - En todo momento mostrar los valores.
 *  Centro Universitario de los Altos
 *  Carrera: Ingeniería en computación/2do semestre
 *  Profesor: SERGIO FRANCO CASILLAS
 **********************************************************/

//Declaracion de librerias
#include "iostream"


using namespace std;

//Inicio del main
int main (){
    //Definicion de variables
    int num1;
    char salir;
    bool bucle;

    //Iniciar ciclo
    do{
        cout<<"Ingrese un numero mayor a 0 y menor a 1000"<<endl;
        cin>>num1;
        //Limpiamos el buffer de entrada
        cin.ignore();

        //Inicio if principal
        if (num1 <= 1000 && num1 > 0){

            //If De las operaciones
            if (num1>= 0 && num1 <= 500){

                //mayor que suma de 100 en 100
                for (int i = 1; i <= 100; ++i) {
                    num1 = num1 + 5;
                    cout<<"Numero de operacion: "<<i<<"\tResultado: "<<num1<<endl;
                }// Fin del for de 100 en 100
            }else{

                //Inicio for 50
                for (int i = 1; i <= 50; ++i) {
                    num1 = num1 + 10;
                    cout<<"Numero de operacion: "<<i<<"\tResultado: "<<num1<<endl;
                }//Fin For 50

            }// Fin del if de las operaciones

            cout<<"Su resultado final es: "<< num1<<endl;

        }else{
            cout<<"No se puede realizar el calculo" <<endl;

        }//Fin if principal

        //Sistema para salir o continuar
        cout<<"Desea salir del programa, \"s\" para salir y \"n\" para continuar"<<endl;
        cin>>salir;

        if (salir == 's' || salir =='S' ){
            bucle = false;
        } else{
            bucle = true;
        }//Fin del sistema para salir o continuar


    } while (bucle == true);

    return 0;
}//Fin del main

