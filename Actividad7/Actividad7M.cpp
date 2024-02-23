/*********************************************************
 *  Alumno: Eric Eduardo Angel Angel
 *  Fecha: 23/02/2024
 *  Descripcion del programa:
        -Elaborar una calculadora de matrices cuadradas que realice la suma, resta y multiplicación de 2 
        matrices. Las condiciones son la siguientes:
            *Matriz cuadrada mínima es de 2x2 y máxima 10x10
            *El valor los puede meter el usuario e indicar en qué matriz irá dicho valor
            *Tendrá la opción de ser llenada con valores aleatorios entre - 100  y 100
            *Realizar la operación que indique el usuario final
            *Borrado y edición de elementos
            *Vaciado de matrices
 *  Centro Universitario de los Altos
 *  Carrera: Ingeniería en computación/2do semestre
 *  Profesor: SERGIO FRANCO CASILLAS
 **********************************************************/
#include "iostream"
#include "cstdlib"
#include "time.h"

using namespace std; 


//Inicio del main
int main(){
    
    int size; //Tamaño de la matriz
    int sizeMax = 10;//Tamaño maximo de la matriz
    int limSup = 100, limInf=-100;//Limites de los numeros aleatorios
    int fila,columna;//Posicion para edicion de elementos
    char opc, opc2;//Opciones de los switches
    bool ciclo = true;
    char matriz;//Seleccion de matriz
    int value;//Valor a ingresar en la edicion de la matriz
    int matrizA[sizeMax][sizeMax], matrizB[sizeMax][sizeMax], matrizR[sizeMax][sizeMax];//Definicion de las matrices

    srand(time(0));//Funcion del tiempo para la generacion de numeros aleatorios

    do {//Se define el tamaño que tendra la matriz
        
        cout << "Ingrese el tamaño de la matriz cuadrada minimo 2 maximo 10 "<<endl;
        cin>> size;
        if (size < 2 || size > 10){
            cout<<"Eliga un valor dentro del rango"<<endl;
            system("pause");
        }
         
    } while (size < 2 || size > 10);

    do//Inicio del bucle
    {
        system("cls");
        cout<<"Menu-----------------------------"<<endl;
        cout<<"1.-llenar matriz 1 manualmente"<<endl;
        cout<<"2.-llenar matriz 2 manualmente"<<endl;
        cout<<"3.-llenar matriz 1 aleatoriamente"<<endl;
        cout<<"4.-llenar matriz 2 aleatoriamente"<<endl;
        cout<<"5.-Listado de matrices"<<endl;
        cout<<"6.-Realizar una operacion"<<endl;
        cout<<"7.-Vaciado de matrices"<<endl;
        cout<<"8.-Edicion de elementos"<<endl;
        cout<<"9.-Salir del programa"<<endl;
        cout<<"Elija un valor"<<endl;
        cin>>opc;
        
        switch (opc) //Inicio del switch
        {
        case '1'://Llenar la matriz 1 manualmente
        
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                cout << "Matriz A[" << i + 1 << "][" << j + 1 << "]: ";
                cin >> matrizA[i][j];
            }
        }  
            system("pause");
            break;
            ;//------------------------------
        
        case '2'://Llenar matriz 2 manualmente
        
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                cout << "Matriz B[" << i + 1 << "][" << j + 1 << "]: ";
                cin >> matrizB[i][j];
            }
        }  
            system("pause");
            break;//--------------------------
        
        case '3'://Llenar la matriz 1 aleatoriamente

            for (int i = 0; i < size; ++i) {
                for (int j = 0; j < size; ++j) {
                    matrizA[i][j] = limInf + rand() % (limSup - limInf + 1); // Números aleatorios entre -100 y 100
                }
            }

            cout << "Matriz A generada aleatoriamente:\n";
            for (int i = 0; i < size; ++i) {
                for (int j = 0; j < size; ++j) {
                    cout <<"["<< matrizA[i][j]<<"]" << "\t";
                }
            cout << endl;
            }
            system("pause");
            break;//--------------------------------

        case '4'://Llenar la matriz 2 aleatoriamente
            for (int i = 0; i < size; ++i) {
                for (int j = 0; j < size; ++j) {
                    matrizB[i][j] = limInf + rand() % (limSup - limInf + 1); // Números aleatorios entre -100 y 100
                }
            }

            cout << "Matriz A generada aleatoriamente:\n";
            for (int i = 0; i < size; ++i) {
                for (int j = 0; j < size; ++j) {
                    cout <<"["<< matrizB[i][j]<<"]" << "\t";
                }
            cout << endl;
            }
            system("pause");
            break;//--------------------------------
        case '5'://Listado de matrices
                cout << "Matriz A:\n";
                for (int i = 0; i < size; ++i) {
                    for (int j = 0; j < size; ++j) {
                        cout <<"["<< matrizA[i][j]<<"]" << "\t";
                    }
                cout << endl;
                }
                cout << "Matriz B:\n";
                for (int i = 0; i < size; ++i) {
                    for (int j = 0; j < size; ++j) {
                        cout <<"["<< matrizB[i][j]<<"]" << "\t";
                    }
                cout << endl;
                }
            system("pause");
            break;//------------------

        case '6'://Operaciones con matrices

                cout<<"1.-Suma"<<endl;
                cout<<"2.-Resta"<<endl;
                cout<<"3.-Multiplicacion"<<endl;
                cout<<"Eliga una opcion"<<endl;
                cin>>opc2;
                

                switch (opc2)
                {
                case '1'://Suma
                        cout << "Resultado de la suma:\n";
                        for (int i = 0; i < size; ++i) {
                            for (int j = 0; j < size; ++j) {
                                matrizR[i][j] = matrizA[i][j] + matrizB[i][j];
                                cout << matrizR[i][j] << "\t";
                            }
                            cout << endl;
                        }  
                    system("pause");
                    break;//-----
                case '2':
                        cout << "Resultado de la resta:\n";
                        for (int i = 0; i < size; ++i) {
                            for (int j = 0; j < size; ++j) {
                                matrizR[i][j] = matrizA[i][j] - matrizB[i][j];
                                cout << matrizR[i][j] << "\t";
                            }
                            cout << endl;
                        }  
                    system("pause");
                    break;
                case '3'://Multiplicacion
                        cout << "Resultado de la resta:\n";
                        for (int i = 0; i < size; ++i) {
                            for (int j = 0; j < size; ++j) {
                                matrizR[i][j] = matrizA[i][j] * matrizB[i][j];
                                cout << matrizR[i][j] << "\t";
                            }
                            cout << endl;
                        } 
                    system("pause");
                    break;//----------------
                default:
                    cout<<"Ingrese una opcion valida";
                    
                    system("pause");
                    break;
                }
        break;//-------------------------------

        case '7'://Vaciado de elementos
            for (int i = 0; i < size; ++i) {
                for (int j = 0; j < size; ++j) {
                    matrizA[i][j] = 0;
                    matrizB[i][j] = 0; 
                    matrizR[i][j] = 0;
                }
            }
            system("pause");
            break;//------------------

        case '8'://Edicion de elementos
            cout<<"Que matriz deseas modificar A/B";
            cin>>matriz;

            if (matriz = 'A')
            {
                cout<<"Ingrese la fila a modificar"<<endl;
                cin>>fila;
                cout<<"Ingresa la columna a modificar"<<endl;
                cin>>columna;
                cout<<"Ingrese el valor a ingresar"<<endl;
                cin>>value;
                matrizA[fila-1][columna-1] = value;
            }else if (matriz = 'B')
            {
                cout<<"Ingrese la fila a modificar"<<endl;
                cin>>fila;
                cout<<"Ingresa la columna a modificar"<<endl;
                cin>>columna;
                cout<<"Ingrese el valor a ingresar"<<endl;
                cin>>value;
                matrizB[fila-1][columna-1] = value;
            }else{
                cout<<"Elija una opcion valida"<<endl;
            }
            
            system("pause");
            break;//-----------------

        case '9':
            ciclo = false;
            break;

        default:
            cout<<"Ingrese una opcion valida";
            system("pause");
            break;
        }//Fin del switch




    } while (ciclo);//Fin del bucle
    

    return 0;
}//Fin del main