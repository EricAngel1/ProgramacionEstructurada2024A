#include "iostream"
#include "vector"
#include "string"
#include "algorithm"

using namespace std;

//-------------------------------------------------------------------------
    void mostrar(vector <string> conj1,vector <string> conj2){
            if (!conj1.empty() and !conj2.empty())//If para verificar si los conjuntos estan vacios
            {
                cout<<"Conjuntos elemento 1"<<endl;

                //For conjuntos1
                for(string elemento: conj1){ //Muestra elementos del conjunto uno mediante un for basado en rangos
                    cout<<" {"<<elemento<<"} ";
                }//Fin for conjuntos 1

                cout<<endl<<"Conjuntos elemento 2"<<endl;

                //For conjuntos 2
                for(string elemento: conj2){
                    cout<<" {"<<elemento<<"} ";
                }//Fin for conjuntos 2
        
            }else{//Inicio del else para indicar que conjunto esta vacio
                if (conj1.empty() and conj2.empty())
                {
                    cout<<"Los dos conjuntos estan vacios"<<endl;
                }else{
                    if (conj1.empty())
                    {
                        cout<<"El conjunto 1 esta vacio"<<endl;
                    }else if (conj2.empty())
                    {
                        cout<<"El conjunto 2 esta vacio"<<endl;
                    }

                }    
            }//Fin del else
    }

//-------------------------------------------------------------------------
    vector <string> eliminarelemento(vector <string> conj, string elemen){
        //Eliminar elemento del vector 1
            for (int i = 0; i < conj.size(); i++) {
                if (conj[i] == elemen) {
                    conj.erase(conj.begin() + i);
                    cout << "Elemento eliminado del conjunto 1" << endl;
                    break;
                }
            }        
        return conj;
    }


//-------------------------------------------------------------------------------------------------------
    //Funcion de union
    vector <string> cnion(vector <string> conj1,vector <string> conj2){
        vector <string> conjr;
        //Insertar elemento al conjunto resultante
        for (int i = 0; i < conj1.size(); i++)
        {
        conjr.insert(conjr.end(), conj1[i]);
        }
        
        //Insertar elementos al conjunto resultante
        for (int i = 0; i < conj2.size(); i++)
        {
        conjr.insert(conjr.end(), conj2[i]);
        }

        sort(conjr.begin(), conjr.end()); //Ordena los elementos
        conjr.erase(unique(conjr.begin(), conjr.end()), conjr.end()); //Elimina elementos duplicados

    //unique(conjr.begin(), conjr.end()) Acomoda todos los numeros repetidos hasta el final del vector 
    //y retorna la posicion del primer elemento repetido
    //conjr.erase(unique(), conjr.end()); //Elimina todos los elementos que se encuentren entre el valor que 
    //regresa el unique hasta el final del vector, los cuales son los valores repetidos

        return conjr;
    }//Fin funcion union

//-------------------------------------------------------------------------------------------------------
    //Funcion de interseccion
     vector <string> interseccion (vector <string> conj1,vector <string> conj2){
        vector <string> conjr;
        //Realiza la interseccion de dos conjuntos
            for (int i = 0; i < conj1.size(); i++)
            {
                for (int j = 0; j < conj2.size(); j++)
                {
                    if (conj1[i] == conj2[j]) {
                        conjr.push_back(conj1[i]);
                    }
                }
            } 
            sort(conjr.begin(), conjr.end());
            conjr.erase(unique(conjr.begin(), conjr.end()), conjr.end());
            return conjr;
     }//Funcion de interseccion

//-------------------------------------------------------------------------------------------------------
    //Funcion que realiza la diferencia A-B
    vector <string> diferencia1_2 (vector <string> conj1,vector <string> conj2){
        vector <string> conjr;    
        //Realiza la diferencia conj1-conj2
        for (int i = 0; i < conj1.size(); i++) {
            bool pertenece = false;
            for (int j = 0; j < conj2.size(); j++) {
                if (conj1[i] == conj2[j]) {
                    pertenece = true;
                    break;
                }
            }
            if (!pertenece) {
                conjr.push_back(conj1[i]);
            }
        }
        sort(conjr.begin(), conjr.end());
        conjr.erase(unique(conjr.begin(), conjr.end()), conjr.end());
        return conjr;
    }//Fin diferencia A-B
    
//-------------------------------------------------------------------------------------------------------
    //Funcion que hace la diferencia B-A
    vector <string> diferencia2_1 (vector <string> conj1,vector <string> conj2){
        vector <string> conjr;    
        //Realiza la diferencia conj2-conj1
        for (int i = 0; i < conj2.size(); i++) {
            bool pertenece = false;
            for (int j = 0; j < conj1.size(); j++) {
                if (conj2[i] == conj1[j]) {
                    pertenece = true;
                    break;
                }
            }
            if (!pertenece) {
                conjr.push_back(conj2[i]);
            }
        }
        sort(conjr.begin(), conjr.end());
        conjr.erase(unique(conjr.begin(), conjr.end()), conjr.end());
        return conjr;
    }//Fin diferencia B-A

//-------------------------------------------------------------------------------------------------------
    //Funcion para verificar el tipo de dato
    bool verificador(string elemen){
        bool verf;

        //For para verificar el string dato por dato
        for (int i = 0; i < elemen.length(); ++i)
        {
            char caracter = elemen[i];

            //Filtra los datos numericos y alfabeticos de los caracteres especiales
            if (caracter >= 'A' and caracter <= 'Z' || caracter >= 'a' and caracter <= 'z' ||caracter >= '0' and caracter <= '9')
            {
                verf = true;
            }else{
                verf = false;
                break;
            }           
        }

            return verf;
    }//Fin funcion verificar
//-------------------------------------------------------------------------------------------------------