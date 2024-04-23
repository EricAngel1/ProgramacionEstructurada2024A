
void jugar(string palb, int& vida, const int tamano) {

    string letra; 
    string ahorcado[tamano];
    string min;
    bool ResVida;
    int EspRes;
   
    while(true){//Inicio del bucle
        system("cls");
        letra.clear();
    
    
    mostrar(tamano, vida, palb, ahorcado);
   
    cout << endl;
   
    cout << "Ingrese una letra: ";
    getline(cin, letra);


    if (letra.length() == 1 && isalpha(letra[0])) { //Verifica que la letra sea alfabetico y de tamaño 1

        min = palb;//Igualamos la palabra a jugar con la palabra en minusculas
        transform(letra.begin(), letra.end(), letra.begin(), ::tolower);//Convertimos la letra a minuscula
        transform(min.begin(), min.end(), min.begin(), ::tolower);//Convertimos la palabra a minusculas


        //Verificamos que la letra esta en la palabra e igualamos la variable ahorcado con la palabra en la misma posicion
        ResVida = false;
        for (int i = 0; i < min.length(); i++)
        {
            if(min[i] == letra[0]){
                ahorcado[i] = palb[i];
                ResVida = true;
            }
        }

        //if (vida != 0)//Verifica la cantidad de vida
        //{
        
            if (ResVida == false) {
                vida--;
            }
            else if (letra[0] == 'a' || letra[0] == 'e' || letra[0] == 'i' || letra[0] == 'o' || letra[0] == 'u'){
                vida--;
            }
        
        //} 
        
        if(vida == 0){//En caso de perder cierra la funcion
            system("cls");
    
            mostrar(tamano, vida, palb, ahorcado);
            cout<<"Perdiste" <<endl;
            cout<<"La palabra era: "<<palb<<endl;
            system("pause");
            return;
        }


        EspRes = 0;//Cuenta los espacios vacios
        for (int i = 0; i < tamano; i++)
        {
            if (ahorcado[i].empty())
            {
                EspRes++;
            }
        }

        if(EspRes == 0){//En caso de que ni haya ningun espacio vacio en el arreglo, cierra la funcion
            system("cls");

            mostrar(tamano, vida, palb, ahorcado);
            cout<<"Felicidades" <<endl;
            system("pause");
            return;
        }

        
   } else {
       cout << "Ingresa un valor valido" << endl;
       system("pause");
   }

    }//Fin del bucle
}


void mostrar(int tamano, int& vida, string palb, string ahorcado[]){
    cout << "Su palabra tiene el siguiente tamano: " << tamano << " " /*<< palb*/ << endl;
    cout << "Tienes " << vida << " vidas" << endl;

    mostrarAhorcado(vida);
    
    //Imprime la palabra a adivinar
    for (int i = 0; i < tamano; i++) {
        if (ahorcado[i].empty()) {
            cout << " _ ";
        } else {
            cout << ahorcado[i];
        }
    }
    cout<<endl;
}


