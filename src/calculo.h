/*
 * calculo.h
 *
 *  Created on: 16 abr 2022
 *      Author: Compumar
 */

#ifndef CALCULO_H_
#define CALCULO_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "input.h"

#define DESCUENTODEBITO 10
#define INTERESCREDITO 25
#define BITCOIN 4482984.69

/// \fn float TotalDescuentoConTarjetaDebito(float, int)
/// \brief  se calcula importe con descuento incluido
/// \param valorUno flotante indica precio total sin descuentos
/// \param descuento porcentaje del descuento a aplicar
/// \return resultado total , es importe total menos el descuento
float TotalDescuentoConTarjetaDebito(float valorUno, int descuento );
/// \fn float TotalConTarjetaDeCredito(float, int)
/// \brief se calcula importe con interes incluido
/// \param valorUno flotante indica precio total sin interes
/// \param interes porcentaje del interes a aplicar
/// \return resultado total , es importe total mas el ineteres
float TotalConTarjetaDeCredito(float valorUno, int interes );
/// \fn float PagoConBitcoin(float, float)
/// \brief calcula el valor en distinta moneda a la utilizada
/// \param valorUno valor de la moneda local
/// \param moneda valor de la moneda extranjera o distinta a la utilizada expresaba en 1 en base a la moneda local
/// \return devuelve el importe , cambiando el valor a la moneda extranjera
float PagoConBitcoin(float valorUno, float moneda );
/// \fn float PrecioPorKm(float, int)
/// \brief devuelve el importe unitario por kilometro, divide el total del importe por los kms
/// \param total importe a pagar
/// \param km distancia que realiza
/// \return retorna el precio por km
float PrecioPorKm(float total, int km );
/// \fn float DiferenciaDePrecios(float, float)
/// \brief realiza la diferencia entre dos numeros flotantes. si el resultado es negativo se invierte el valor para que sea positivo
/// \param precioUno valor "x"
/// \param precioDos valor "y"
/// \return retorna diferencia de manera positiva engre "x" e "y"
float DiferenciaDePrecios(float precioUno, float precioDos );
/// \fn void CargaForzada()
/// \brief Se le pasan valores Hardcodeados. En base a ellos se realizan calculos, y al final los muestra.
void CargaForzada();


#endif /* CALCULO_H_ */
