/*
 * funcionesMenu.c
 *
 *
 */
#include <stdio.h>
#include <stdlib.h>

void mostrarMenuPrincipal(float* acumuladorHospedaje,float* acumuladorComida,float* acumuladorTransporte,int* contadorArqueros,int* contadorDefensores,int* contadorMediocampistas,int* contadorDelanteros)
{
	printf("\n1.Ingreso de costos de mantenimiento"
		   "\nCosto de hospedaje -> %.2f"
		   "\nCosto de comida -> %.2f"
		   "\nCosto de transporte -> %.2f"
		   "\n2.Carga de jugadores"
		   "\nArqueros -> %d"
		   "\nDefensores -> %d"
		   "\nMediocampistas -> %d"
		   "\nDelanteros -> %d"
		   "\n3.Realizar todos los cálculos"
		   "\n4.Informar todos los resultados"
		   "\n5.Salir",*acumuladorHospedaje,*acumuladorComida,*acumuladorTransporte,*contadorArqueros,*contadorDefensores,*contadorMediocampistas,*contadorDelanteros);
}

void mostrarMenuCostosMantenimiento(float* acumuladorHospedaje,float* acumuladorComida,float* acumuladorTransporte)
{
	printf("\n¿Qué gasto desea ingresar?"
			"\n1. Hospedaje -> %.2f"
			"\n2.Comida -> %.2f"
			"\n3.Transporte -> %.2f", *acumuladorHospedaje,*acumuladorComida,*acumuladorTransporte);
}

void mostrarMenuPosicionJugadores(int* contadorArqueros,int* contadorDefensores,int* contadorMediocampistas,int* contadorDelanteros)
{
	printf("\n¿Qué posición desea cargar?"
			"\n1.Arqueros -> %d"
			"\n2.Defensores -> %d"
			"\n3.Mediocampistas ->%d"
			"\n4.Delanteros -> %d",*contadorArqueros,*contadorDefensores,*contadorMediocampistas,*contadorDelanteros);
}

void mostrarMenuConfederaciones()
{
	printf("\nIngrese la confederación"
			"\n1.AFC"
			"\n2.CAF"
			"\n3.CONCACAF"
			"\n4.CONMEBOL"
			"\n5.UEFA"
			"\n6.OFC");
}

void opcionesMenuConfederaciones(int* opcionConfederacion, int* contadorAFC, int* contadorCAF, int* contadorCONCACAF,int* contadorCONMEBOL, int* contadorUEFA, int* contadorOFC)
{

	switch(*opcionConfederacion)
	{
		case 1:
			(*contadorAFC)++;
		break;
		case 2:
			(*contadorCAF)++;
		break;
		case 3:
			(*contadorCONCACAF)++;
		break;
		case 4:
			(*contadorCONMEBOL)++;
		break;
		case 5:
			(*contadorUEFA)++;
		break;
		case 6:
			(*contadorOFC)++;
		break;
	}
}

void calcularPromedio(float* resultado, int* numeroUno,int* numeroDos)
{
	*resultado= (float) (*numeroUno) / (*numeroDos);
}










