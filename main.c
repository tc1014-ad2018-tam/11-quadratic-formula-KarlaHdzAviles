/*Este programa nos ayuda a calcular el resultado de la formula cuadratica a traves de 3 variables dadas por el usuario
 * el programa solo acepta numeros
 * reporta el valor de las x los dos valores
 *
 * Autor: Karla Alexandra Hernandez Aviles
 * Correo: A01411843@itesm.mx
 * Fecha: 04/10/2018
 * */


//librerias que se necesitan para este programa
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main() {
    //declaracion de variables
    char entradaa[30];
    char entradab[30];
    char entradac[30];
    char *residue;
    double a;
    double b;
    double c;
    double discriminant;
    double root1;
    double root2;

    // aqui se valida a
    printf("Welcome,this program will help you with the quadratic formula.  ");

    printf("Give me the value of a:   \n");
    //scanf("%lf",entradaa);
    fgets(entradaa, 30, stdin);
    a = strtod(entradaa, &residue);
    // aqui se valida b
    printf("Give me the value of b:   \n");
    //scanf("%lf",entradab);
    fgets(entradab, 30, stdin);
    b = strtod(entradab, &residue);

    //aqui se valida c
    printf("give me the value of c:    \n");
    //scanf("%lf",entradac);
    fgets(entradac, 30, stdin);
    c = strtod(entradac, &residue);



    //si uno de los valores no es valido

    if ((strlen(entradaa) == strlen(residue)) || (strlen(entradab) == strlen(residue)) ||
            (strlen(entradac) == strlen(residue))){
            printf("Check your values. You must only enter numbers.");

        } else {
        //El valor de a no puede ser 0 debido a que es una division
        if (a != 0);
        {

            // Calcula el valor de la discriminante.
            discriminant = b * b - 4 * a * c;

            // si la discriminante es menos que 0, la raiz no puede ser calculada
            if (discriminant < 0) {

                printf("There are no values of x.");

                // si la discriminante es igual a 0, solo hay un valor de x
            } else if (discriminant == 0) {

                printf("The value of x is: %.2lf ", -b / (2 * a));

                // si la discriminante es mayor que 0, existen los dos valores de x.
            } else {

                printf("The values of x are: %.2lf and %.2lf", (-b + sqrt(discriminant)) / (2 * a),
                       (-b - sqrt(discriminant)) / (2 * a));

            }
        }
    }

            return 0;
}

