//Carlos Yael Hernandez Alcala A01412016
//Programa para obtener operaciones basicas a partir de 2 numeros.

#include <stdio.h>

int main(void) {
    double num1,num2;
    double suma, resta, division, multiplicacion;

    printf("Este programa te va a ayudar a multiplicar, dividir , sumar y restar dos numeros\n");

    printf("Dame el primer numerito: ");
    scanf("%lf",&num1);
    printf("Dame el segundo numerito: ");
    scanf("%lf",&num2);

    suma=num1+num2;
    resta=num1-num2;
    multiplicacion=num1*num2;
    division=num1/num2;

    printf("La suma de los dos numeros es: %lf \n",suma);
    printf("La resta de los dos numeros es: %lf \n",resta);
    printf("La multiplicacion de los dos numeros es: %lf \n",multiplicacion);
    printf("La division de los dos numeros es: %lf \n",division);

    return 0;
}