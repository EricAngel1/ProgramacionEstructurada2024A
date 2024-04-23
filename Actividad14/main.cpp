#include "iostream"
#include "string"
#include "ctime"
#include "cctype"
#include <cstring>
#include <algorithm>



using namespace std;

//Funciones
void mostrarAhorcado(int &vida);

void jugar(string palb, int& vida, const int tamano);
bool verificar(char letra);
void mostrar(int tamano, int& vida, string palb, string ahorcado[]);
void mostrarBienvenida();



//Librerias 
#include "lib.cpp"
#include "mostrar.cpp"

        //Palabras a usar
        string palabras[20] = {
            "Manzana", "Computadora", "Elefante", "Guitarra", "Avion",
            "Libro", "Luna", "Tortuga", "Helado", "Camion",
            "Jirafa", "Zanahoria", "Perro", "Bicicleta", "Piano",
            "Termo", "Cocodrilo", "Playa", "Telescopio", "Ventana"
            };

int main(){
    
    bool bucle = true;
    char opc;
        do
        {

        //Declaracion de variables
        string palb; //Guarda la palabra a adivinar
        int vida = 6;
        int tamano; //Almacena el tamaño del string

        mostrarBienvenida();

        system("pause");
        system("cls");

        //Eleccion de la palabra al azar
        srand(time(NULL));
        int aleatorio =rand() % 20;
        palb = palabras[aleatorio];
        tamano = palb.length();
        
        //Funcion para iniciar el juego
        jugar(palb, vida, tamano);
        
        //Opciones de salida
            do{ 
            system("cls");

            cout<<endl<<"1.- Desea volver a jugar \n2.- Desea salir \nIngrese una opcion: "<<endl;
            cin>>opc;
            if(opc == '1'){
                system("pause");
                system("cls");
            }else if(opc == '2'){
                bucle = false;
            }else{
                cout<<"Ingrese una opcion valida";
                system("pause");
                system("cls");
            }
            }while(opc != '1' && opc != '2');
            

        } while (bucle);

    return 0;
}