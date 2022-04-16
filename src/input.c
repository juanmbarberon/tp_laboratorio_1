/*
 * input.c
 *
 *  Created on: 16 abr 2022
 *      Author: Compumar
 */
#include "input.h"

void Mostrar (char mensaje[], float valor){

    printf("%s%.2f", mensaje, valor);

}

int IngresarKilometros(char mensaje[] ){

	char numeroIngresado;
	int ingresoPasadoaInt;
	printf("%s", mensaje);
	fflush(stdin);
	scanf("%s", &numeroIngresado);
	while((numeroIngresado >= 'a' && numeroIngresado <='z')||(numeroIngresado >= 'A' && numeroIngresado <='Z')){
	    printf("\nNo se puede ingresar letras, ingrese nuevamente Kilometros: ");
	    fflush(stdin);
	    scanf("%s", &numeroIngresado);

	}

    ingresoPasadoaInt=atoi(&numeroIngresado);
	return ingresoPasadoaInt;
}

int VerificadorKm(){

    int valorIngresado;
    while(valorIngresado <= 0){
        printf("Error, Kilometros no puede ser 0 o menos, Ingresar Kilometros Nuevamente: ");
        scanf("%d", &valorIngresado);

    }
   return valorIngresado;
}

int IngresarOpcion(char mensaje[] ){

	char numeroIngresado;
	int ingresoPasadoaInt;
	printf("%s", mensaje);
	fflush(stdin);
	scanf("%s", &numeroIngresado);
	while((numeroIngresado >= 'a' && numeroIngresado <='z')||(numeroIngresado >= 'A' && numeroIngresado <='Z')){
	    printf("\nNo se puede ingresar letras, ingrese nuevamente opcion: ");
	    fflush(stdin);
	    scanf("%s", &numeroIngresado);

	}

    ingresoPasadoaInt=atoi(&numeroIngresado);
	return ingresoPasadoaInt;
}
int VerificadorOpcion(){

    int valorIngresado;
    while(valorIngresado < 1 || valorIngresado > 6){
        printf("Error, Las opciones son del 1 al 6 \n Ingrese opcion: ");
        scanf("%d", &valorIngresado);

    }
   return valorIngresado;
}
float IngresarPrecio(char mensaje[] ){

	char numeroIngresado;
	float ingresoPasadoaInt;
	printf("%s", mensaje);
	 fflush(stdin);
	scanf("%s", &numeroIngresado);
	while((numeroIngresado >= 'a' && numeroIngresado <='z')||(numeroIngresado >= 'A' && numeroIngresado <='Z')){
	    printf("\nNo se puede ingresar letras. \n Ingrese precio: ");
	    fflush(stdin);
	    scanf("%s", &numeroIngresado);

	}

    ingresoPasadoaInt=atof(&numeroIngresado);
	return ingresoPasadoaInt;
}
float NoPuedeSerCero(){

    float valorIngresado;
    while(valorIngresado <= 0){
        printf("Error, El precio no puede ser 0.\n Ingrese el precio: ");
        scanf("%f", &valorIngresado);

    }
   return valorIngresado;
}


