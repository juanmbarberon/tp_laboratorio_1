/*
 * calculo.c
 *
 *  Created on: 16 abr 2022
 *      Author: Compumar
 */
#include "calculo.h"

float TotalDescuentoConTarjetaDebito(float valorUno, int descuento) {
	float totalConDescuento;

	totalConDescuento = valorUno - (valorUno * descuento) / 100;

	return totalConDescuento;

}

float TotalConTarjetaDeCredito(float valorUno, int interes) {
	float totalConInteres;

	totalConInteres = valorUno + (valorUno * interes) / 100;

	return totalConInteres;

}

float PagoConBitcoin(float valorUno, float moneda) {
	float totalConCriptoMoneda;

	totalConCriptoMoneda = valorUno / moneda;

	return totalConCriptoMoneda;

}

float PrecioPorKm(float total, int km) {
	float precioUnitario;

	precioUnitario = total / km;

	return precioUnitario;

}

float DiferenciaDePrecios(float precioUno, float precioDos) {
	float diferencia;

	diferencia = precioUno - precioDos;
	if (diferencia < 0) {
		diferencia = diferencia * (-1);
	}
	return diferencia;

}

void CargaForzada() {

	int km;
	int precioA;
	int precioB;
	float aerolineasConDebito;
	float aerolineasConCredito;
	float aerolineasConBitcoin;
	float precioUnitarioAerolineas;
	float latamConDebito;
	float latamConCredito;
	float latamConBitcoin;
	float precioUnitarioLatam;
	float diferenciaPrecioLatamVsAerolineas;

	km = 7090;
	precioA = 162965;
	precioB = 159339;

	aerolineasConDebito = TotalDescuentoConTarjetaDebito(precioA,
			DESCUENTODEBITO);
	aerolineasConCredito = TotalConTarjetaDeCredito(precioA, INTERESCREDITO);
	aerolineasConBitcoin = PagoConBitcoin(precioA, BITCOIN);
	precioUnitarioAerolineas = PrecioPorKm(precioA, km);
	latamConDebito = TotalDescuentoConTarjetaDebito(precioB, DESCUENTODEBITO);
	latamConCredito = TotalConTarjetaDeCredito(precioB, INTERESCREDITO);
	latamConBitcoin = PagoConBitcoin(precioB, BITCOIN);
	precioUnitarioLatam = PrecioPorKm(precioB, km);
	diferenciaPrecioLatamVsAerolineas = DiferenciaDePrecios(precioA, precioB);

	printf("\nKMs Ingresados: %d", km);
	printf("\nAerolineas:");
	Mostrar("\na) Precio con tarjeta de debito: $", aerolineasConDebito);
	Mostrar("\nb) Precio con tarjeta de credito: $", aerolineasConCredito);
	Mostrar("\nc) Precio pagando con bitcoin : $", aerolineasConBitcoin);
	Mostrar("\nd) Precio unitario : $", precioUnitarioAerolineas);
	printf("\nLatam:");
	Mostrar("\na) Precio con tarjeta de debito: $", latamConDebito);
	Mostrar("\nb) Precio con tarjeta de credito: $", latamConCredito);
	Mostrar("\nc) Precio pagando con bitcoin : $", latamConBitcoin);
	Mostrar("\nd) Precio unitario : $", precioUnitarioLatam);

	Mostrar("\n\nDiferencia de Precio: $", diferenciaPrecioLatamVsAerolineas);

}
