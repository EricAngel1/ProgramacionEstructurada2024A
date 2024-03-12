#include "iostream"
#include "time.h"

using namespace std;

const int tmax = 15;//Tamaño maximo de las matrices
const int limInf = -200, limSup = 400; //El limite para los numeros generados aleatoriamente 

//Funcion para definir el tamaño de la matriz a trabajar
int ingresarTamano(){
    int TMu;   
        do//Inicio bucle
        {
            cout<<"Ingresa el Tamano de las matrices (MAX 15)";
            cin>>TMu;
            if (TMu >= 2 and TMu <= 15)//Inicio del if
            {
                cout<<"Tamaño definido Correctamente"<<endl;
            }else{
                cout<<"Porfavor ingrese un valor valido"<<endl;
            }//Fin del if
            
        } while (!(TMu >= 2 and TMu <= 15));//FinBucle


    return TMu;
}

//Funcion que muestra los valores que contiene la matriz 
void mostrarMatriz(int matriz[tmax][tmax], int TMu) {
    for (int i = 0; i < TMu; ++i) {
        for (int j = 0; j < TMu; ++j) {
            cout << "[" << matriz[i][j] << "]\t";
        }
        cout << endl;
    }
}

//Funcion que ingresa los elementos a las matrices 
void ingresar(int matriz[tmax][tmax], int TMu) {
    cout << "Introduzca los elementos de la matriz:" <<endl;
    for (int i = 0; i < TMu; i++) {
        for (int j = 0; j < TMu; j++) {
            cout << "matriz[" << i << "][" << j << "]: ";
            cin>>matriz[i][j];
        }
    }
}

//Funcion que limpia las matrices
void limpiarMatriz (int matriz[tmax][tmax], int TMu){
        for (int i = 0; i < TMu; ++i) {
            for (int j = 0; j < TMu; ++j) {
                matriz[i][j] = 0;
        cout << endl;
        }
    }
}

//Funcion que hace la suma de dos matrices
void SumaMatriz(int matriz1[tmax][tmax], int matriz2[tmax][tmax],int matrizR[tmax][tmax], int TMu){
    cout << "Resultado de la suma:"<<endl;
    for (int i = 0; i < TMu; ++i) {
        for (int j = 0; j < TMu; ++j) {
            matrizR[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

//Funcion que hace la resta de dos matrices
void RestaMatriz(int matriz1[tmax][tmax], int matriz2[tmax][tmax],int matrizR[tmax][tmax], int TMu){
    cout << "Resultado de la Resta"<<endl;
    for (int i = 0; i < TMu; ++i) {
        for (int j = 0; j < TMu; ++j) {
            matrizR[i][j] = matriz1[i][j] - matriz2[i][j];           
        }
    }
}

//Funcion que multiplica dos matrices 
void multiplicarMatriz(int matriz1[tmax][tmax], int matriz2[tmax][tmax], int matrizR[tmax][tmax], int TMu) {
    cout<<"Resultado de la multiplicacion: "<<endl;
    for (int i = 0; i < TMu; ++i) {
        for (int j = 0; j < TMu; ++j) {
            matrizR[i][j] = 0;
            for (int k = 0; k < TMu; ++k) {
                matrizR[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

//Funcion que genera los valores aleatorios y rellena las matrices
void valoresaleatorios(int matriz[tmax][tmax], int TMu){
        for (int i = 0; i < TMu; ++i) {
        for (int j = 0; j < TMu; ++j) {
            matriz[i][j] = limInf + rand() % (limSup - limInf + 1); // Números aleatorios entre -200 y 400
        }
    }
}

//Funcion que elimina un valor de las matrices
void eliminarValor(int matriz[tmax][tmax], int TMu) {
    bool val = false;
    int elemen;
    cout << "Ingrese el valor a eliminar: ";
    cin >> elemen;

    for (int i = 0; i < TMu; ++i) {
        for (int j = 0; j < TMu; ++j) {
            if (matriz[i][j] == elemen) {
                matriz[i][j] = 0;
                val = true;
            }
        }
    }
    if (val == true){
        cout<<"Valor eliminado correctamente"<<endl;
    }else{
        cout<<"Valor no encontrado"<<endl;
    }
}