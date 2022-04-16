/*
 * input.h
 *
 *  Created on: 16 abr 2022
 *      Author: Compumar
 */

#ifndef INPUT_H_
#define INPUT_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


#define DESCUENTODEBITO 10
#define INTERESCREDITO 25
#define BITCOIN 4482984.69


/// \fn int IngresarKilometros(char[])
/// \brief permite el ingreso de un numero entero. Si ingresa una letra, da aviso para que vuelva a cargar correctemante
/// \param mensaje descripcion para el usuario
/// \return retorna un valor entero
int IngresarKilometros(char mensaje[] );
/// \fn void Mostrar(char[], float)
/// \brief permite cargar un mensaje al usuario y agregar un numero flotante con dos digitos
/// \param mensaje descripcion que se le quiere hacer al usuario
/// \param valor numero flotante que se desea pasar por parametro actual
void Mostrar (char mensaje[], float valor);
/// \fn int VerificadorKm()
/// \brief verifica que el numero ingresado no sea 0 ni menor a 0
/// \return retorna un valor entero
int VerificadorKm();
/// \fn int VerificadorOpcion()
/// \brief verifica que el numero este entre el rango hardcoeado , en este caso entre 1 y 6
/// \return retorna un valor entero que este dentro del rango indicado
int VerificadorOpcion();
/// \fn int IngresarOpcion(char[])
/// \brief permite ingresar un numero entero, si es una letra avisa al usuario para que ingrese un numero luego del mensaje
/// \param mensaje advertencia de error al usuario al momento de haber ingresado un dato incorrecto
/// \return retorna un valor entero
int IngresarOpcion(char mensaje[]);
/// \fn float IngresarPrecio(char[])
/// \brief permite ingresar un numero flotante, si es una letra avisa al usuario para que ingrese un numero luego del mensaje
/// \param mensaje advertencia de error al usuario al momento de haber ingresado un dato incorrecto
/// \return retorna un valor flotante
float IngresarPrecio(char mensaje[] );
/// \fn float NoPuedeSerCero()
/// \brief comprueba que el valor ingresado no haya sido 0 ni menor
/// \return retorna el valor siempre y cuando sea mayor a 0
float NoPuedeSerCero();




#endif /* INPUT_H_ */
