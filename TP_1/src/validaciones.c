/*
 * validaciones.c
 *
 *
 */
#include <stdio.h>
#include <stdlib.h>

int utn_getSoloNumero(int* pResultado, char* mensaje,char* mensajeError,int minimo,int maximo, int reintentos)
{
	int bufferInt;
	int retorno = -1;

	do
	{
		printf("%s", mensaje);
		fflush(stdin);

		if(scanf("%d", &bufferInt)==1)
		{
			if(pResultado!=NULL && mensaje!=NULL && mensajeError!=NULL && minimo<=maximo && reintentos>=0)
			{
				if(bufferInt>=minimo && bufferInt<=maximo)
				{
					*pResultado = bufferInt;
					retorno = 0;
				}
				else
				{
					printf("%s", mensajeError);
					reintentos--;
				}
			}
		}
		else
		{
			printf("\nError.Ingrese un numero ");
			reintentos--;
		}
	}while(reintentos>0);

	return retorno;
}

int utn_getSoloNumeroFlotante(float* pResultado, char* mensaje,char* mensajeError,int minimo)
{
	float bufferInt;
	int retorno = -1;

			printf("%s", mensaje);
			fflush(stdin);

			if(scanf("%f", &bufferInt)==1)
			{
				if(pResultado!=NULL && mensaje!=NULL && mensajeError!=NULL)
				{
					if(bufferInt>=minimo)
					{
						*pResultado = bufferInt;
						retorno = 0;
					}
					else
					{
						printf("%s", mensajeError);
					}
				}
			}
			else
			{
				printf("\nError.Ingrese un numero ");
			}

		return retorno;
}
