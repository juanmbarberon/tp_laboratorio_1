/*
 * Input.h
 *
 *  Created on: 11 may 2022
 *      Author: Compumar
 */

#ifndef INPUT_H_
#define INPUT_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// @brief se pide al usuario un flotante
///
/// @param mensaje se indica msj que se quiere mostrar al usuario
/// @return retorna un numero flotante
float IngresarFlotante(char mensaje[]);
/// @brief se pide al usuario un entero
///
/// @param mensaje se indica msj que se quiere mostrar al usuario
/// @return retorna un numero entero
int IngresarEntero(char mensaje[]);
/// @brief se le pide al usuario que ingrese una cadena
/// permite que solo haya letras
/// @param cadena palabra que devuelve
/// @param mensaje se indica msj que se quiere mostrar al usuario
/// @param tam cantidad caracteres que se pueden ingresar por palabra
/// @return retorna -1 error en la palabra, retona 0 cuando esta ok
int getString(char cadena[], char mensaje[], int tam);
/// @brief valida que un numero este entre el minimo y el maximo indicado
///
/// @param msj mensaje se indica msj que se quiere mostrar al usuario
/// @param msjError mensaje de error que se indica msj que se quiere mostrar al usuario
/// @param min numero minimo aceptado
/// @param max numero maximo aceptado
/// @return devuele un numero entero
int enteroValidado ( char msj[], char msjError[], int min , int max);
/// @brief valida que un numero este entre el minimo y el maximo indicado
///
/// @param msj mensaje se indica msj que se quiere mostrar al usuario
/// @param msjError msjError mensaje de error que se indica msj que se quiere mostrar al usuario
/// @param min numero minimo aceptado
/// @param max numero maximo aceptado
/// @return devuele un numero flotante
float flotanteValidado ( char msj[], char msjError[], float min , float max);
/// @brief ingresa un caracter
///
/// @param mensaje mensaje se indica msj que se quiere mostrar al usuario
/// @return retorna un caracter
char IngreseCaracter(char mensaje[]);
/// @brief verifica que el nombre sea valido, que solo contenga letras
///
/// @param stringRecibido palabra a verificar si son solo letras
/// @return retorna -1 si la palabra no contiene solo letras, 0 si es de solo letras
int isValidName(char* stringRecibido);
/// @brief se le pide al usuario que ingrese una cadena y permite
///  que haya letras y numeros
/// @param cadena palabra que devuelve
/// @param mensaje se indica msj que se quiere mostrar al usuario
/// @param tam cantidad caracteres que se pueden ingresar por palabra
/// @return retorna -1 error en la palabra, retona 0 cuando esta ok
int getStringAlfaNumerico(char cadena[], char mensaje[], int tam);
/// @brief verifica que el nombre sea valido, puede contener letras
/// y/o numeros
/// @param stringRecibido palabra que se verifica que sean letras y/o numeros
/// @return retorna -1 si la palabra contiene caracteres distintos a numero y/o letrass,
/// 0 si contiene letras y/o numeros
int esAlfaNumerico(char* stringRecibido);


#endif /* INPUT_H_ */
