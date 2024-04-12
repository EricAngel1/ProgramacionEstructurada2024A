#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include "validador.cpp"
#include "Lib.cpp"
int main() {

    vector<int> torre1;
    vector<int> torre2;
    vector<int> torre3;
    string numDiscos;
    char opc;
    int numericValue = 0, contador = 0;

        
        do {
        cout << "Bienvenido al juego de las Torres de hanoi" << endl;

        cout << "Ingresa el numero de discos 3-8: ";
        cin >> numDiscos;
        
                if (verificador(numDiscos)) {//Verifica que el valor ingresado sea valido
                    numericValue = stoi(numDiscos);//Convierte el valor string a numerico
                    if (numericValue < 3 || numericValue > 8) {//Verifica el rango del valor ingresado
                        cout << "Numero de discos invalido. Debe estar entre 3 y 8." << endl;
                        return 0;
                    } else {
                        for (size_t i = numericValue; i > 0; i--) {
                            torre1.push_back(i); //agregar los discos a la torre 1
                        }
                        break; // Salir del bucle
                    }
                } else {
                    cout << endl << "Ingresa un valor numerico vuelva a intentar" << endl;
                }
            } while (!verificador(numDiscos));//En caso de el valor no ser valido saldra del bucle
                
        
            while (torre3.size() != numericValue) {
                imprimir3Torres(torre1, torre2, torre3,contador);
                mover(torre1, torre2, torre3, contador);
                
                system("pause");
                system("cls");
            }

            cout<<endl<<"Has terminado el juego con un total de "<<contador<<" Movimientos"<<endl;
            cout << "La cantidad minima de movimientos para resolver el juego es de: " << MovMin(numericValue, "Torre 1", "Torre 2", "Torre 3") << endl;
    system("pause");
    return 0;
}

