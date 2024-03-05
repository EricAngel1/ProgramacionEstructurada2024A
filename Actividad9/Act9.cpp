//Librerias
#include "iostream"
#include "vector"
#include "string"

#include "LibAct9.cpp"

using namespace std;


//Inicio del main
int main(){

    vector<string> conj1;
    vector<string> conj2;
    vector<string> conjr;
    string elemen, a , b;
    char opc,opc2;//Menus
    bool bucle = true;

    do{//Inicio del bucle
        system("cls");
        cout<<"Menu----------------------------"<<endl;
        cout<<"0.- Salir del programa"<<endl;
        cout<<"1.-Ingresar elemento al conjunto 1"<<endl;
        cout<<"2.-Ingresar elemento al conjunto 2"<<endl;
        cout<<"3.-Mostrar conjuntos"<<endl;
        cout<<"4.-Eliminar conjuntos"<<endl;
        cout<<"5.-Eliminar un elemento"<<endl;
        cout<<"6.-Realizar operacion de conjuntos Union, Interseccion, Diferencia y complemento"<<endl;
        cout<<"Elija una opcion: "<<endl;
        cin>>opc;

        switch (opc)//Inicio del switch
        {
        case '1'://Ingresar elemento al conjunto 1
            cout<<"Ingresa un elemento al conjunto 1"<<endl;
            cin>>elemen;
            conj1.insert(conj1.end(), elemen);

            break;//------------------------------
        
        case '2'://Ingresar elemento al conjunto 2
            cout<<"Ingresa un elemento al conjunto 2"<<endl;
            cin>>elemen;
            conj2.insert(conj2.end(), elemen);

            break;//------------------------------

        case '3'://Mostrar conjuntos
            cout<<"Conjuntos elemento 1"<<endl;
            for(string elemento: conj1){ //Muestra elementos del conjunto uno mediante un for basado en rangos
                cout<<" {"<<elemento<<"} ";
            }
            
            cout<<endl<<"Conjuntos elemento 2"<<endl;
            for(string elemento: conj2){
                cout<<" {"<<elemento<<"} ";
            }
            
            system("pause");
            break;//----------------
        
        case '4'://Eliminar conjuntos
            conj1.clear();
            conj2.clear();
            cout<<"Elementos eliminados"<<endl;
            system("pause");
            break;//-----------------

        case '5'://Eliminar un elemento
            cout << "Ingrese el elemento a eliminar: ";
            cin >> elemen;

            // Selecciona el conjunto de donde se eliminará el elemento
            cout << "Seleccione el conjunto (1 o 2): ";
            cin >> opc2;

                    switch (opc2) {
                            case '1': //Eliminar elementos conjunto 1
                            //Eliminar elemento del vector 1
                                for (int i = 0; i < conj1.size(); i++) {
                                    if (conj1[i] == elemen) {
                                        conj1.erase(conj1.begin() + i);
                                        cout << "Elemento eliminado del conjunto 1" << endl;
                                        break;
                                    }
                                }
                            break;//-----------------------------------

                            case '2'://Eliminar elementos conjunto 2
                            // Eliminar el elemento del conjunto 2
                                for (int i = 0; i < conj2.size(); i++) {
                                    if (conj2[i] == elemen) {
                                        conj2.erase(conj2.begin() + i);
                                        cout << "Elemento eliminado del conjunto 2" << endl;
                                        break;
                                    }
                                }
                                break;//------------------------------
                            default:
                                cout << "Opción no válida. Seleccione 1 o 2." << endl;
                                break;
                        }

             system("pause");           
            break;//-------------------
        
        case '6'://Case 6 operaciones de conjuntos
                cout<<"1.-Union"<<endl;
                cout<<"2.-Interseccion"<<endl;
                cout<<"3.-Diferencia A-B"<<endl;
                cout<<"4.-Diferencia B-A"<<endl;
                cout<<"5.-Complemento de A"<<endl;
                cout<<"6.-Complemento de B"<<endl;
                cout<<"Elija una opcion: "<<endl;
                cin>>opc2;

                switch (opc2)//Inicio switch 2
                {
                case '1': //Union
                    conjr.clear();
                    conjr = cnion(conj1, conj2);

                    for(string elemento: conjr){
                    cout<<" {"<<elemento<<"} ";
                    }

                    system("pause");
                    break;//-----

                case '2': //Interseccion
                    conjr.clear();
                    conjr = interseccion(conj1, conj2);
                    
                    for(string elemento: conjr){
                    cout<<" {"<<elemento<<"} ";
                    }

                    system("pause");
                    break;//------------
                case '3': //Diferencia A - B
                    conjr.clear();
                    conjr = diferencia1_2(conj1, conj2);

                    for(string elemento: conjr){
                    cout<<" {"<<elemento<<"} ";
                    }

                    system("pause");                    
                    break;//----------

                case '4': //Diferencia B-A
                    conjr.clear();
                    conjr = diferencia2_1(conj1, conj2);

                    for(string elemento: conjr){
                    cout<<" {"<<elemento<<"} ";
                    }

                    system("pause");  

                    break;//--------------

                case '5': //Complemento de A´
                    conjr.clear();
                    conjr = diferencia2_1(conj1, conj2);

                    for(string elemento: conjr){
                    cout<<" {"<<elemento<<"} ";
                    }

                    system("pause");  
                    break;//-----------
                
                case '6'://Complemento de B´
                    conjr = diferencia1_2(conj1, conj2);
                    for(string elemento: conjr){
                    cout<<" {"<<elemento<<"} ";
                    }

                    system("pause");  
                    break;//----------------
                
                default:
                    cout<<"Ingrese una opcion valida"<<endl;
                    system("pause");
                    break;
                }//Fin switch 2


            break;//Fin case 6 operaciones de conjuntos
        
        

        default:
            cout<<"Ingrese una opcion valida"<<endl;
            system("pause");
            break;
        }//Fin del switch




    }while(bucle);//Fin bucle

    return 0;
}//Finald del main

