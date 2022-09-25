/*
  	Barresi Carolina DIV J TT
	TP 1 Programación/Laboratorio 1
*/

#include <stdio.h>
#include <stdlib.h>
#include "validaciones.h"
#include "funcionesMenu.h"

int main(void)
{ setbuf (stdout, NULL);

	char respuesta;
	int opcionMenuPrincipal;
	int opcionGastos;
	float acumuladorHospedaje;
	float costoHospedaje;
	float acumuladorComida;
	float costoComida;
	float acumuladorTransporte;
	float costoTransporte;
	float costoMantenimiento;
	float aumentoMantenimiento;
	float costoMantenimientoFinal;
	int posicionJugador;
	int numCamiseta;
	int contadorArqueros;
	int contadorDefensores;
	int contadorMediocampistas;
	int contadorDelanteros;
	int opcionConfederacion;
	int contadorAFC;
	int contadorCAF;
	int contadorCONCACAF;
	int contadorCONMEBOL;
	int contadorUEFA;
	int contadorOFC;
	float promedioAFC;
	float promedioCAF;
	float promedioCONCACAF;
	float promedioCONMEBOL;
	float promedioUEFA;
	float promedioOFC;
	int totalJugadores;
	int banderaGastos;
	int banderaPosicionJugador;
	int banderaCalculos;
	int retornoFuncionSoloNumero;
	int retornoFuncionSoloNumeroFlotante;

	respuesta = 'n';
	acumuladorHospedaje = 0;
	acumuladorComida = 0;
	acumuladorTransporte = 0;
	aumentoMantenimiento = 0;
	contadorArqueros = 0;
	contadorDefensores = 0;
	contadorMediocampistas = 0;
	contadorDelanteros = 0;
	contadorAFC = 0;
	contadorCAF = 0;
	contadorCONCACAF = 0;
	contadorCONMEBOL = 0;
	contadorUEFA = 0;
	contadorOFC = 0;
	banderaGastos = 0;
	banderaPosicionJugador = 0;
	banderaCalculos = 0;

	do
	{

			mostrarMenuPrincipal(&acumuladorHospedaje,&acumuladorComida,&acumuladorTransporte,&contadorArqueros,&contadorDefensores,&contadorMediocampistas,&contadorDelanteros);
			utn_getSoloNumero(&opcionMenuPrincipal,"\nElija una opcion -> ","\nError.Ingrese una opcion valida",1,5,0);

		switch(opcionMenuPrincipal)
		{
			case 1:
				mostrarMenuCostosMantenimiento(&acumuladorHospedaje,&acumuladorComida,&acumuladorTransporte);
				retornoFuncionSoloNumero = utn_getSoloNumero(&opcionGastos,"\nElija una opcion -> ","\nError.Ingrese una opcion valida",1,3,0);


					banderaGastos = 1;

				if(retornoFuncionSoloNumero == 0)
				{

					switch (opcionGastos)
					{
						case 1:
							printf("\nIngrese costo de hospedaje ");
							retornoFuncionSoloNumeroFlotante = utn_getSoloNumeroFlotante(&costoHospedaje,"->","\nError.Ingrese una opcion valida",0);
							if(retornoFuncionSoloNumeroFlotante == 0)
							{
								acumuladorHospedaje = acumuladorHospedaje + costoHospedaje;
							}
						break;
						case 2:
							printf("\nIngrese costo de comida ");
							retornoFuncionSoloNumeroFlotante = utn_getSoloNumeroFlotante(&costoComida,"->","\nError.Ingrese una opcion valida",0);
							if(retornoFuncionSoloNumeroFlotante == 0)
							{
								acumuladorComida = acumuladorComida + costoComida;
							}
						break;
						case 3:
							printf("\nIngrese costo de transporte ");
							retornoFuncionSoloNumeroFlotante = utn_getSoloNumeroFlotante(&costoTransporte,"->","\nError.Ingrese una opcion valida",0);
							if(retornoFuncionSoloNumeroFlotante == 0)
							{
								acumuladorTransporte = acumuladorTransporte + costoTransporte;
							}
						break;
					}
				}
			break;

			case 2:
						mostrarMenuPosicionJugadores(&contadorArqueros,&contadorDefensores,&contadorMediocampistas,&contadorDelanteros);
						retornoFuncionSoloNumero = utn_getSoloNumero(&posicionJugador,"\nElija una opcion -> ","\nError.Ingrese una opcion valida",1,4,0);
					if(retornoFuncionSoloNumero == 0)
					{
							banderaPosicionJugador = 1;

						switch(posicionJugador)
						{
							case 1:
							if(contadorArqueros<2)
							{

								printf("\nIngrese el numero de camiseta ");
								retornoFuncionSoloNumero = utn_getSoloNumero(&numCamiseta,"-> ","\nError.Ingrese un numero valido",1,99,0);

								if(retornoFuncionSoloNumero == 0)
								{
									mostrarMenuConfederaciones();
									opcionesMenuConfederaciones(&opcionConfederacion,&contadorAFC,&contadorCAF,&contadorCONCACAF,&contadorCONMEBOL,&contadorUEFA,&contadorOFC);
									retornoFuncionSoloNumero = utn_getSoloNumero(&opcionConfederacion,"\nElija una opcion -> ","\nError.Ingrese una opcion valida",1,6,0);
									if(retornoFuncionSoloNumero ==0)
									{
										contadorArqueros++;
									}
								}
							}
							else
							{
								printf("\nSe alcanzó el maximo de arqueros");
							}
							break;

							case 2:
								if(contadorDefensores<8)
								{

									printf("\nIngrese el numero de camiseta ");
									retornoFuncionSoloNumero = utn_getSoloNumero(&numCamiseta,"-> ","\nError.Ingrese un numero valido",1,99,0);

									if(retornoFuncionSoloNumero == 0)
									{
										mostrarMenuConfederaciones();
										opcionesMenuConfederaciones(&opcionConfederacion,&contadorAFC,&contadorCAF,&contadorCONCACAF,&contadorCONMEBOL,&contadorUEFA,&contadorOFC);
										retornoFuncionSoloNumero = utn_getSoloNumero(&opcionConfederacion,"\nElija una opcion -> ","\nError.Ingrese una opcion valida",1,6,0);
										if(retornoFuncionSoloNumero ==0)
										{
											contadorDefensores++;
										}
									}
								}
								else
								{
									printf("\nSe alcanzó el maximo de defensores ");
								}
							break;

							case 3:
								if(contadorMediocampistas<8)
								{

									printf("\nIngrese el numero de camiseta ");
									retornoFuncionSoloNumero = utn_getSoloNumero(&numCamiseta,"-> ","\nError.Ingrese un numero valido",1,99,0);

									if(retornoFuncionSoloNumero == 0)
									{
										mostrarMenuConfederaciones();
										opcionesMenuConfederaciones(&opcionConfederacion,&contadorAFC,&contadorCAF,&contadorCONCACAF,&contadorCONMEBOL,&contadorUEFA,&contadorOFC);
										retornoFuncionSoloNumero = utn_getSoloNumero(&opcionConfederacion,"\nElija una opcion -> ","\nError.Ingrese una opcion valida",1,6,0);
										if(retornoFuncionSoloNumero ==0)
										{
											contadorMediocampistas++;
										}
									}
								}
								else
								{
									printf("\nSe alcanzó el maximo de mediocampistas");
								}
							break;

							case 4:
								if(contadorDelanteros<4)
								{

									printf("\nIngrese el numero de camiseta ");
									retornoFuncionSoloNumero = utn_getSoloNumero(&numCamiseta,"-> ","\nError.Ingrese un numero valido",1,99,0);

									if(retornoFuncionSoloNumero == 0)
									{
										mostrarMenuConfederaciones();
										opcionesMenuConfederaciones(&opcionConfederacion,&contadorAFC,&contadorCAF,&contadorCONCACAF,&contadorCONMEBOL,&contadorUEFA,&contadorOFC);
										retornoFuncionSoloNumero = utn_getSoloNumero(&opcionConfederacion,"\nElija una opcion -> ","\nError.Ingrese una opcion valida",1,6,0);
										if(retornoFuncionSoloNumero ==0)
										{
											contadorDelanteros++;
										}
									}
								}
								else
								{
									printf("\nSe alcanzó el maximo de delanteros");
								}
								break;
						}
					}
				break;

			case 3:
					if(acumuladorHospedaje>0 && acumuladorComida>0 && acumuladorTransporte>0 && banderaGastos == 1 && banderaPosicionJugador == 1)
					{
						totalJugadores = contadorArqueros + contadorDefensores + contadorMediocampistas + contadorDelanteros;

						calcularPromedio(&promedioAFC,&contadorAFC,&totalJugadores);
						calcularPromedio(&promedioCAF,&contadorCAF,&totalJugadores);
						calcularPromedio(&promedioCONCACAF,&contadorCONCACAF,&totalJugadores);
						calcularPromedio(&promedioCONMEBOL,&contadorCONMEBOL,&totalJugadores);
						calcularPromedio(&promedioUEFA,&contadorUEFA,&totalJugadores);
						calcularPromedio(&promedioOFC,&contadorOFC,&totalJugadores);

						costoMantenimiento = acumuladorHospedaje + acumuladorComida + acumuladorTransporte;

						if(contadorUEFA>contadorAFC && contadorUEFA>contadorCAF && contadorUEFA>contadorCONCACAF && contadorUEFA>contadorCONMEBOL && contadorUEFA>contadorOFC)
						{
							aumentoMantenimiento = (costoMantenimiento*35/100);
							costoMantenimientoFinal = costoMantenimiento + aumentoMantenimiento;
						}
						printf("\nCalculos realizados ");
						banderaCalculos = 1;
					}
					else
					{
						printf("\nError al realizar calculos. Ingrese todos los costos y la carga de jugadores");
					}
			break;

			case 4:

					if(banderaGastos == 1 && banderaPosicionJugador == 1 && banderaCalculos == 1)
					{

						printf("Los porcentajes de cada confederación son: "
								"\nAFC -> %.2f"
								"\nCAF -> %.2f"
								"\nCONCACAF -> %.2f"
								"\nCONMEBOL -> %.2f"
								"\nUEFA -> %.2f"
								"\nOFC -> %.2f",promedioAFC,promedioCAF,promedioCONCACAF,promedioCONMEBOL,promedioUEFA,promedioOFC);

						banderaGastos =0;
						banderaPosicionJugador =0;
						banderaCalculos =0;

						if(aumentoMantenimiento>0)
						{
							printf("\nEl costo de mantenimiento era de %.2f y recibió un aumento de %.2f, su nuevo valor es de %.2f ",costoMantenimiento, aumentoMantenimiento,costoMantenimientoFinal);
						}
						else
						{
							printf("\nEl costo de mantenimiento es de %.2f", costoMantenimiento);
						}
					}
					else
					{
						printf("\nDebe realizar los calculos primero ");
					}
			break;

			case 5:
					do
					{
						printf("¿Desea salir? s/n ");
						fflush(stdin);
						scanf("%c",&respuesta);
					}while(respuesta != 's' && respuesta != 'n');
			break;
		}

	}while(respuesta == 'n');

	return EXIT_SUCCESS;
}
