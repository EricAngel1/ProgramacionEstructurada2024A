/*********************************************************
 *  Alumno: Eric Eduardo Angel Angel
 *  Fecha: 09/02/2024
 *  Descripcion del programa:
        - Solicitar al usuario un valor, y la serie debe llegar a un valor igual o menor al indicado por el usuario
        - El usuario va a elegir con qué ciclo debe trabajar
        - El programa debe salir cuando el usuario lo indique
 *  Centro Universitario de los Altos
 *  Carrera: Ingeniería en computación/2do semestre
 *  Profesor: SERGIO FRANCO CASILLAS
 **********************************************************/

#include <iostream>
    using namespace std;

    //Inicio del main
    int main(){

            //Declaracion variables
            bool SBucle;
            char salir;
        do {

            //Declaracion variables enteros
            int opc, num0, num1, num2 = 0, num3 = 1;

            cout << "Indique con que bucle desea trabajar \n 1--While \n 2--Do while \n 3--For\n";
            cin>>opc;

            if (opc >= 1 and opc <=3){
            cout<<"Indique el numero hasta donde desea que llegue la serie Fibonacci \n";
            cin>>num0;
            }

            //inicio switch
            switch (opc) {
                case 1:
                    //Serie Fibonacci con while
                while (num2 <= num0){
                    cout<<num2<<" ";
                    num1 = num2 + num3;
                    num2 = num3;
                    num3 = num1;
                    }
                    break;
                    //Serie Fibonacci con DoWhile
                case 2:
                do{
                    cout<<num2<<" ";
                    num1 = num2 + num3;
                    num2 = num3;
                    num3 = num1;
                } while (num2 <= num0);
                break;

                    //Serie Fibonacci con For
                case 3:
                    for (int i = 0; num2 <= num0; num1 = num2 + num3) {
                        cout << num2 << " ";
                        num2 = num3;
                        num3 = num1;
                    }
                    break;

                default:
                    cout<<"Ingrese una opcion valida";
                    break;
            }//Fin switch


            //Inicio sistema para salir
            cout<<"\nDesea salir del programa, \"s\" para salir y \"n\" para continuar\n"<<endl;
            cin>>salir;
            if (salir == 's' || salir =='S' ){
                SBucle = false;
            } else{
                SBucle = true;
            }//Fin del sistema para salir o continuar


            } while (SBucle == true); //Fin bucle

        return 0;
    }//Fin del main
