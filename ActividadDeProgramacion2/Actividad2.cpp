/*********************************************************
 *  Alumno: Eric Eduardo Angel Angel
 *  Fecha: 06/02/2024
 *  Programa donde se utilicen 6 caracteres de escape
 *  y 6 cadenas de control de tipos de salida
 *  Centro Universitario de los Altos
 *  Carrera: Ingeniería en computación/2do semestre
 *  Profesor: SERGIO FRANCO CASILLAS
 **********************************************************/

#include <iostream>
#include <string>

using namespace std;

int main() {
    //Declaracion de variables
    //Cadenas de texto
    string nombre = "Eric Eduardo Angel Angel";
    //Numeros Flotantes
    int matricula = 223992884;
    //Numeros con punto decimal
    float edad = 18.6, altura = 1.70, peso = 64.9;
    //Caracter
    char genero = 'M';

    //Imprime mi nombre usando una tabulacion, comillas, cadenas de texto y salto de linea
    printf("\tMi nombre es:  \"%s\" \n", nombre.c_str());
    //Imprime mi edad usando una tabulación, número con decimal y un caracter especial "ñ"
    printf("\tTengo:  %g a%cos \n",edad, 164);
    //Imprime mi matricula con una tabulación, numero entero y salto de linea
    printf("\tMatricula:  %d \n",matricula);
    //Imprime mi genero con una tabulacion, un caracter, una tabulacion vertical y un salto de linea
    printf("\tGenero: %c \v \n", genero);
    //Imprime mi altura con una tabulacion un numero con punto decimal y salto de linea
    printf("\tAltura\? %f M\n", altura);
    //Imprime mi peso con una tabulacion y numero con punto decimal
    printf("\tPeso\? %g KG", peso);



    return 0;
}