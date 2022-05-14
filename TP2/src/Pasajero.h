/*
 * Pasajero.h
 *
 *  Created on: 11 may 2022
 *      Author: Compumar
 */



#ifndef PASAJERO_H_
#define PASAJERO_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "arrayPassenger.h"


/// @brief imprime en pantalla el contenido del array
///
/// @param Listado array que recorre
/// @param tam tamaño de la lista
void Mostrar(ePasajero Listado[], int tam);
/// @brief busca espacio libre en array para para ser utilizado
///
/// @param lista array que recorre buscando espacio libre
/// @param tam tamaño del array
/// @return retorna -1 si no hay espacio, o el numero de la posicion libre del array
int BuscarPrimerEspacioLibre(ePasajero lista[], int tam);
/// @brief incrementa en 1 de manera automatica un valor.
///
/// @param valor es el valor inicial , desde donde se quiere comenzar a contar
/// @return valor nuevo, ose el anterio incrementado en  1
int incrementarId(int valor);
/// @brief calcula cantidad de pasajeros, hace un total de precios de los pasajes vendidos
/// realiza precio promedio de los pasajes, muestra que cantidad de pasajeros superan
/// el precio promedio
/// @param lista array que recorre para obtener datos, de pasajeros, precios
/// @param tam tamaño del array
void CalculosPasajes(ePasajero lista[], int tam);



#endif /* PASAJERO_H_ */
