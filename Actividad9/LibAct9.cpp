#include "iostream"
#include "vector"
#include "string"
#include "algorithm"

using namespace std;

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


        return conjr;
    }//Fin funcion union


    //Funcion de interseccion
     vector <string> interseccion (vector <string> conj1,vector <string> conj2){
        vector <string> conjr;
        //Realiza la interseccion de dos conjuntos
            for (int i = 0; i < conj1.size(); i++)
            {
                for (int j = 0; j < conj2.size(); j++) // Corregida la condición del bucle aquí
                {
                    if (conj1[i] == conj2[j]) {
                        conjr.push_back(conj1[i]);
                    }
                }
            } 
            return conjr;
     }//Funcion de interseccion

    
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

        return conjr;
    }//Fin diferencia A-B

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

        return conjr;
    }//Fin diferencia B-A

    