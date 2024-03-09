/*********************************************************
 *  Alumno: Eric Eduardo Angel Angel
 *  Fecha: 5/03/2024
 *  Descripcion del programa:
        *Tomar la actividad de programación 8, y anexar lo siguiente:
            -Biblioteca de funciones
            -Mejorar y optimizar código propia
            -Además de las tareas ya especificadas (UNIÓN, INTERSECCIÓN, DIFERENCIA Y COMPLEMENTO).
            -Los arreglos no deben introducir símbolos, solo caracteres
            -No debe haber caracteres repetidos en el mismo conjunto
 *  Centro Universitario de los Altos
 *  Carrera: Ingeniería en computación/2do semestre
 *  Profesor: SERGIO FRANCO CASILLAS
 **********************************************************/
//Librerias
#include "iostream"
#include "vector"
#include "string"

#include "LibAct9.1.cpp"

using namespace std;


//Inicio del main
int main(){

    vector<string> conj1;//Conjunto 1
    vector<string> conj2;//conjunto 2
    vector<string> conjr;//Conjunto resultante
    string elemen;//Elemento a ingresar a los vectores
    char opc,opc2;//Menus
    bool verf;
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

            //Funcion para verificar el tipo de dato
            verf = verificador(elemen);
            if (verf == true){
                conj1.insert(conj1.end(), elemen);
                cout<<"El valor se ingreso correctamente"<<endl;
            }else{
                cout<<"El valor ingresado no es valido"<<endl<<"Porfavor ingresa un valor numerico o alfabetico"<<endl;
            }


            system("pause");
            break;//------------------------------
        
        case '2'://Ingresar elemento al conjunto 2
            cout<<"Ingresa un elemento al conjunto 2"<<endl;
            cin>>elemen;
            
            //Funcion para verificar el tipo de dato
            verf = verificador(elemen);
            if (verf == true){
                conj2.insert(conj2.end(), elemen);
                cout<<"El valor se ingreso correctamente"<<endl;
            }else{
                cout<<"El valor ingresado no es valido"<<endl<<"Porfavor ingresa un valor numerico o alfabetico"<<endl;
            }

            system("pause");
            break;//------------------------------

        case '3'://Mostrar conjuntos
            mostrar(conj1, conj2);
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

                    switch (opc2) {//Inicio switch eliminar elemento
                            case '1': //Eliminar elementos conjunto 1
                            conj1 = eliminarelemento(conj1, elemen);
                            break;//-----------------------------------

                            case '2'://Eliminar elementos conjunto 2
                            conj2 = eliminarelemento(conj2, elemen);
                                break;//------------------------------
                            default:
                                cout << "Opción no válida. Seleccione 1 o 2." << endl;
                                break;
                        }//Fin switch eliminar elemento

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

                        if (!conj1.empty() or !conj2.empty())

                            {
                                conjr.clear();
                                conjr = cnion(conj1, conj2);

                                for(string elemento: conjr){
                                cout<<" {"<<elemento<<"} ";
                                }  
                            }else{
                                cout<<"Uno de los conjutos esta vacio";
                            }

                    system("pause");
                    break;//-----

                    case '2': //Interseccion

                        if (!conj1.empty() or !conj2.empty()){

                            conjr.clear();
                            conjr = interseccion(conj1, conj2);

                            for(string elemento: conjr){
                            cout<<" {"<<elemento<<"} ";
                            }

                        }else{
                            cout<<"Uno de los conjutos esta vacio";
                        }


                    system("pause");
                    break;//------------

                    case '3': //Diferencia A - B

                        if (!conj1.empty() or !conj2.empty()){

                            conjr.clear();
                            conjr = diferencia1_2(conj1, conj2);

                            for(string elemento: conjr){
                            cout<<" {"<<elemento<<"} ";
                            }                    

                        }else{
                            cout<<"Uno de los conjutos esta vacio";
                        }

                    system("pause");                    
                    break;//----------

                    case '4': //Diferencia B-A

                        if (!conj1.empty() or !conj2.empty()){
                            conjr.clear();
                            conjr = diferencia2_1(conj1, conj2);

                            for(string elemento: conjr){
                            cout<<" {"<<elemento<<"} ";
                            }
                        }else{
                            cout<<"Uno de los conjutos esta vacio";
                        }


                    system("pause");  
                    break;//--------------

                    case '5': //Complemento de A´

                        if (!conj1.empty() or !conj2.empty()){
                        
                            conjr.clear();
                            conjr = diferencia2_1(conj1, conj2);

                            for(string elemento: conjr){
                            cout<<" {"<<elemento<<"} ";
                            }

                        }else{
                            cout<<"Uno de los conjutos esta vacio";
                        }

                    system("pause");  
                    break;//-----------

                    case '6'://Complemento de B´
                        if (!conj1.empty() or !conj2.empty()){
                            conjr = diferencia1_2(conj1, conj2);
                            for(string elemento: conjr){
                            cout<<" {"<<elemento<<"} ";
                            }
                        }else{
                            cout<<"Uno de los conjutos esta vacio";
                        }
                    system("pause");  
                    break;//----------------

                    default:
                        cout<<"Ingrese una opcion valida"<<endl;
                        system("pause");
                        break;
                }//Fin switch 2

            break;//Fin case 6 operaciones de conjuntos
        
        case '0'://Salir
            bucle = false;
            break;
        

        default:
            cout<<"Ingrese una opcion valida"<<endl;
            system("pause");
            break;
        }//Fin del switch




    }while(bucle);//Fin bucle

    return 0;
}//Final del main