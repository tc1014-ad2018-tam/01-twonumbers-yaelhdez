//Carlos Yael Hernandez Alcala
//A01412016
//A01412016@ITESM.MX

#include <stdio.h>

int main(void) {
    double num1,num2; //Declaration of variables
    double suma, resta, division, multiplicacion; //Declaration of variables

    printf("Este programa te va a ayudar a multiplicar, dividir , sumar y restar dos numeros\n");
    //Explication of the program

    printf("Dame el primer numerito: \n ");
    scanf("%lf",&num1); //Variable "num1" request
    printf("Dame el segundo numerito: \n ");
    scanf("%lf",&num2); //Variable "num2" request

    suma=num1+num2; //addition operation
    resta=num1-num2; //Subtraction operation
    multiplicacion=num1*num2; //multiplication operation
    division=num1/num2; //division operation

    printf("La suma de los dos numeros es: %lf \n",suma); //result of the addition
    printf("La resta de los dos numeros es: %lf \n",resta); //result of the Subtraction
    printf("La multiplicacion de los dos numeros es: %lf \n",multiplicacion); //result of the multiplication
    printf("La division de los dos numeros es: %lf \n",division); //result of the division

    return 0;
}