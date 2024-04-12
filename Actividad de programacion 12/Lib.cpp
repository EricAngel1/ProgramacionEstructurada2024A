
#include <iostream>
#include <vector>
#include <string>

using namespace std;



void imprimirTorre(vector<int>& v, string torre);
void imprimir3Torres(vector<int>& t1, vector<int>& t2, vector<int>& t3);
void mover(vector<int>& t1, vector<int>& t2, vector<int>& t3);


void mover(vector<int>& t1, vector<int>& t2, vector<int>& t3, int& contador) {
    int origen = 0, destino = 0;
    string origenString, destinoString;
    vector <int>* vector_origen;
    vector <int>* vector_destino;

    do
    {
    cout << "Ingresa la torre de origen (1, 2 o 3): ";
    cin >> origenString;
    cout << "Ingresa la torre de destino (1, 2 o 3): ";
    cin >> destinoString;

    if(verificador(origenString) and verificador(destinoString)){ //Valida que los datos sean numericos
    origen = stoi(origenString);
    destino = stoi(destinoString);//Comvierte el valor string a numero
    
    // Validar que las torres de origen y destino sean válidas
    if (origen < 1 || origen > 3 || destino < 1 || destino > 3) {
        cout << "Opciones de torre inválidas." << endl;
        return;
    }

    //Se obtienen la torre de origen y destino
    if (origen == 1) {
        vector_origen = &t1;
    } else if (origen == 2) {
        vector_origen = &t2;
    } else {
        vector_origen = &t3;
    }

    if (destino == 1) {
        vector_destino = &t1;
    } else if (destino == 2) {
        vector_destino = &t2;
    } else {
        vector_destino = &t3;
    }

    //Verifica que la torre de origen no este vacia 
    if (vector_origen->empty()) {
        cout << "La torre de origen esta vacia." << endl;
        return;
    }

    // Validar que el disco a mover sea más pequeño que el de arriba en la torre de destino
    if (!vector_destino->empty() && vector_origen->back() > vector_destino->back()) {
        cout << "No se puede mover un disco mas grande sobre uno mas pequeño." << endl;
        return;
    }


    //Movimiento de los discos
    int disco = vector_origen->back();
    vector_origen->pop_back();
    vector_destino->push_back(disco);
    contador++;

    // Imprimir las torres después del movimiento




        
        }else{
            cout<<"Ingresa un valor valido"<<endl;
        }
    
    } while (!verificador(origenString) and !verificador(destinoString));
}

void imprimir3Torres(vector<int>& t1, vector<int>& t2, vector<int>& t3, int contador){
        imprimirTorre(t1, "Torre 1");
        imprimirTorre(t2, "Torre 2");
        imprimirTorre(t3, "Torre 3");
        cout<<endl<<"Movimientos: "<<contador<<endl;
}

void imprimirTorre(vector<int>& v, string torre) {
    cout << torre << ": ";
    for (auto d : v) {
        cout << d << ' ';
    }
    cout << endl;
}

// Función recursiva para resolver las Torres de Hanoi
int MovMin(int n, string Origen, string Destino, string Auxiliar) {
    if (n == 1) {
        return 1;
    }
    int movimientos = 0;
    movimientos += MovMin(n - 1, Origen, Auxiliar, Destino);
    movimientos += 1;
    movimientos += MovMin(n - 1, Auxiliar, Destino, Origen);
    return movimientos;
}