/*********************************************************
 *  Alumno: Eric Eduardo Angel Angel
 *  Fecha: 12/03/2024
 *  Descripcion del programa:
        *Tomar la actividad de programación 8, y anexar lo siguiente:
            Realizar las funciones para cada tarea
            Incrementar el grado de la matriz (15 x 15)
            Los valores aleatorios serán entre -200 y 400
            Agregar las funciones se División
            El usuario debe elegir, cúal matriz es el numerador.
 *  Centro Universitario de los Altos
 *  Carrera: Ingeniería en computación/2do semestre
 *  Profesor: SERGIO FRANCO CASILLAS
 **********************************************************/

#include "iostream"
#include "time.h"

using namespace std;

#include "LibAct10.cpp"




int main(){//Inicio del main

    const int tmax = 15;//Tamaño maximo de las matrices
    int matriz1[tmax][tmax];//Matriz 1
    int matriz2[tmax][tmax];//Matriz 2
    int matrizR[tmax][tmax];//Matriz resultante
    bool bucle = true;
    int TMu = 0;//El tamaño de matriz con el que el usuario va a trabajar
    char opc;//Opciones de los swiches
    srand(time(0));//Funcion del tiempo para la generacion de numeros aleatorios

    do{//Inicio del bucle
    system("cls");

    //ImprimirMenu------------------------------------
    if (TMu != 0)
    {
        cout<<"El tamano de su arreglo es: "<<TMu<<endl;
    }else{
        cout<<"Tamano todavia no definido"<<endl;
    }
    

    cout<<"0.-Salir"<<endl;
    cout<<"1.-Definir el tamano del arreglo"<<endl;
    cout<<"2.-Ingresar valores de la matriz 1"<<endl;
    cout<<"3.-Ingresar valores de la matriz 2"<<endl;
    cout<<"4.-Mostrar Matrices"<<endl;
    cout<<"5.-Operaciones con matrices"<<endl;
    cout<<"6.-Vaciar matrices"<<endl;
    cout<<"7.-Eliminar elemento"<<endl;
    cout<<"8.-Llenar los arreglos con valores aleatorios"<<endl;
    cin>>opc;

    srand(time(0));
    //------------------------------------------------
    
    switch (opc)//Inicio del switch
    {

    case '0'://Case0Salir-----------
        bucle = false;
    break;//FinCase0-----------

    case '1'://Case1Definir Tamaño Matriz--------------------
        TMu = ingresarTamano();
        limpiarMatriz(matriz1, TMu);
        limpiarMatriz(matriz2, TMu);
    break;//FinCase1--------------------

    case '2'://Ingresar valores Matriz1-------------------------
        ingresar(matriz1,TMu);
        system("pause");
    break;//FinCase2----------------------------
    
    case '3'://Ingrear valores Matriz2-------------------------
        ingresar(matriz2,TMu);
        system("pause");
    break;//Fincase3----------------------------


    case '4'://Case4Mostrar matrices--------------------
        cout<<"Los valores de la matriz 1 son: "<<endl;
        mostrarMatriz(matriz1, TMu);
        cout<<"Los valores de la matriz 2 son:"<<endl;
        mostrarMatriz(matriz2, TMu);
        
        system("pause");
    break;//FinCase4--------------------
    
    case '5'://Case5Operaciones--------------------
        system("cls");

        cout<<"1.-Suma"<<endl;
        cout<<"2.-Resta"<<endl;
        cout<<"3.-Multiplicacion"<<endl;
        //cout<<"4.-Division"<<endl;
        cin>>opc;
        switch (opc)
        {
        case '1'://Funcion que realiza la suma de dos matrices
            cout<<"Los valores de la matriz 1 son: "<<endl;
            mostrarMatriz(matriz1, TMu);
            cout<<"Los valores de la matriz 2 son:"<<endl;
            mostrarMatriz(matriz2, TMu);

            SumaMatriz(matriz1, matriz2, matrizR, TMu);
            mostrarMatriz(matrizR, TMu);
        system("pause");
        break;//FinSuma--------------------------------------
        
        case '2'://Funcion que realiza la resta de dos matrices
            cout<<"Los valores de la matriz 1 son: "<<endl;
            mostrarMatriz(matriz1, TMu);
            cout<<"Los valores de la matriz 2 son:"<<endl;
            mostrarMatriz(matriz2, TMu);

            RestaMatriz(matriz1, matriz2, matrizR, TMu);
            mostrarMatriz(matrizR, TMu);
        system("pause");
        break;//FinResta-------------------------------------
        
        case '3'://Funcion que realiza la multiplicacion de dos matrices
            cout<<"Los valores de la matriz 1 son: "<<endl;
            mostrarMatriz(matriz1, TMu);
            cout<<"Los valores de la matriz 2 son:"<<endl;
            mostrarMatriz(matriz2, TMu);

            multiplicarMatriz(matriz1, matriz2, matrizR, TMu);
            mostrarMatriz(matrizR, TMu);
        system("pause");
        break;//FinMultiplicacion--------------------------------------
        
        case '4'://Funcion que realiza la division de dos matrices
        break;//FinDivision--------------------------------------    
        
        default://InicioDefault-------------------
            cout<<"Ingresa un opcion valida"<<endl;
        break;//FinDefault------------------------
        }

    break;//FinCase5--------------------

    case '6'://VaciarMatrices--------------------------
        limpiarMatriz(matriz1, TMu);
        limpiarMatriz(matriz2, TMu);
        cout<<"Matrices vaciadas corerctamente";
        system("pause");
    break;//-------------------------------------------

    case '7'://Case7EliminarElemento-----------------------------------------
    cout<<"Ingrese la matriz a eliminar el valor 1/2"<<endl;
    cin>>opc;
    system("cls");
        if (opc == '1')
        {
            cout << "Los valores de su matriz 1 son"<<endl;
            mostrarMatriz(matriz1, TMu);
            eliminarValor(matriz1, TMu);
        }else if (opc == '2')
        {
            cout << "Los valores de su matriz 1 son"<<endl;
            mostrarMatriz(matriz2, TMu);
            eliminarValor(matriz2, TMu);
        }else{
            cout<<"Ingresa un valor valido"<<endl;
        }
        
        system("pause");
    break;//FinCase7

    case '8'://Case8ValorAleatorio-------------
        valoresaleatorios(matriz1, TMu);
        valoresaleatorios(matriz2, TMu);
        cout<<"Valorea aleatorios asignados correctamente"<<endl;
        system("pause");
    break;//FinCase8----------------------------
    
    
    default://InicioDefault-------------
        cout<<"Ingresa un opcion valida"<<endl;
    break;//FinDefault--------------
    }

    }while(bucle);//Fin del bucle
    
    return 0;
}//Fin del main
