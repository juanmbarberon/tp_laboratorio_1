/*
 ============================================================================
 Name        : Tp1Lab.c

 ============================================================================
 */



#include "calculo.h"
#include "input.h"

int main(void) {

	setbuf(stdout, NULL);

		int opcion;
		int km=0;
		float precioAerolineas=0;
	    float precioLatam=0;
	    float aerolineasConDebito;
	    float aerolineasConCredito;
	    float aerolineasConBitcoin;
	    float precioUnitarioAerolineas;
	    float latamConDebito;
	    float latamConCredito;
	    float latamConBitcoin;
	    float precioUnitarioLatam;
	    float diferenciaPrecioLatamVsAerolineas;
	    int datoCargado;
	    int contador=0;
	    int opcionSalida;

	    do {

	            printf("\n-----------------------------MENU------------------------------\n\n");


	            printf("\n1. Ingresar Kilometros : (km= %d)\n",km);
	            printf("2. Ingresar Precio de Vuelos: \n -Precio vuelo Aerolineas: $ %.2f \n -Precio vuelo Latam: $ %.2f \n", precioAerolineas, precioLatam);
	    		printf("3. Calcular todos los costos:\n a) Tarjeta de debito (descuento 10 porciento)\n b) Tarjeta de credito (interés 25 porciento)\n c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)\n d) Mostrar precio por km (precio unitario)\n e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)\n");
	    		printf("4. Informar Resultados.\n" );
	    		printf("5. Carga forzada de datos\n");
	    		printf("6. Salir\n");

	    		printf("---------------------------------------------------------------\n");

	    		opcion = VerificadorOpcion(IngresarOpcion("Ingrese Opcion: "));
	    	    switch(opcion){
	    	        case 1:
	    	        km=VerificadorKm(IngresarKilometros("Ingrese los kilometros: "));
	    	        printf("\nKMs Ingresados: %d", km);
	    	        break;
	    	        case 2:
	    	        precioAerolineas=NoPuedeSerCero(IngresarPrecio("Ingrese precio de Aerolineas: "));
	                precioLatam=NoPuedeSerCero(IngresarPrecio("Ingrese precio de Latam: "));
	                printf("Aerolineas Argentina: $ %.2f\nLatam: $ %.2f", precioAerolineas, precioLatam);
	    	        break;
	    	        case 3:
	    	        datoCargado=1;
	    	        if(precioAerolineas!=0 && precioLatam!=0 && km!=0){
	    	        aerolineasConDebito=TotalDescuentoConTarjetaDebito(precioAerolineas,DESCUENTODEBITO);
	    	        aerolineasConCredito=TotalConTarjetaDeCredito(precioAerolineas,INTERESCREDITO);
	    	        aerolineasConBitcoin=PagoConBitcoin(precioAerolineas, BITCOIN );
	    	        precioUnitarioAerolineas=PrecioPorKm(precioAerolineas,km);
	    	        latamConDebito=TotalDescuentoConTarjetaDebito(precioLatam,DESCUENTODEBITO);
	    	        latamConCredito=TotalConTarjetaDeCredito(precioLatam,INTERESCREDITO);
	    	        latamConBitcoin=PagoConBitcoin(precioLatam, BITCOIN );
	    	        precioUnitarioLatam=PrecioPorKm(precioLatam,km);
	    	        diferenciaPrecioLatamVsAerolineas=DiferenciaDePrecios(precioLatam, precioAerolineas );
	    	        datoCargado=0;}
	    	        else{
	    	            printf("No se pueden realizar calculos.\nSe debe ingresar Kilometros y precios, verificar Opcion 1 y Opcion 2");
	    	        }
	    	        if (datoCargado == 0){
	    	        	printf("¡¡¡Se realizaron los calculos!!!");
	    	        }
	    	        break;
	    	        case 4:
	    	        	if(datoCargado == 0){

	    	        printf("\nLatam:\n");
	    	        Mostrar("\na) Precio con tarjeta de debito: $",latamConDebito);
	    	        Mostrar("\nb) Precio con tarjeta de credito: $",latamConCredito);
	    	        Mostrar("\nc) Precio pagando con bitcoin : $",latamConBitcoin);
	    	        Mostrar("\nc) Precio unitario : $",precioUnitarioLatam);

	    	        printf("\nAerolineas:\n");
	    	        Mostrar("\na) Precio con tarjeta de debito: $",aerolineasConDebito);
	    	        Mostrar("\nb) Precio con tarjeta de credito: $",aerolineasConCredito);
	    	        Mostrar("\nc) Precio pagando con bitcoin : $",aerolineasConBitcoin);
	    	        Mostrar("\nc) Precio unitario : $",precioUnitarioAerolineas);
	    	        Mostrar("\nDiferencia de Precio: $",diferenciaPrecioLatamVsAerolineas);}
	    	        	else{
	    	        		printf("No se hicieron los calculos, se debe ingresar Opcion 3 previamente");
	    	        	}
	    	        break;
	    	        case 5:
	    	        	CargaForzada();
	    	        	break;
	    	        case 6:
	    	        	printf("Esta seguro que desea salir?\n");
	    	        	opcionSalida = IngresarOpcion("Presione 6 para confirmar salida: ");
	    	        	if(opcionSalida == 6){
	    	        		contador++;
	    	        	}
	    	        	break;
	    	    }

	        }while(contador != 1);

	return EXIT_SUCCESS;
}
