#include <stdio.h> //librerias que usaremos 
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <ctime>

/*Ruben Vicente Fuentes Rodriguez
Entregable 1
Programa 2 Estructuras*/

using namespace std; //se declara namespace para poder usar cin y cout


struct datos{ //Estructura principal
	
	char nombre[35]; //variable tipo texto definida a 35 espacios
	int edad, faltas; // variables enteras
	float promedio; //variable flotante (decimales)
	
}alumnos[100]; //arreglo principal para los datos

int indice; //definimos globalmente la variable indice


void capturar (){ //funcion para capturar datos
		
		system("color 2f");
		printf("\nCuantos Alumnos vas a registrar?: "); 
		scanf("%d",&indice); //registramos en la variable indice cuanto ocuparemos del arreglo
		
		for(int i=0; i<indice; i++){ //Bucle For que depende de lo que indicamos en indice
		fflush(stdin);
		printf("____________________________________________\n"); //lineas esteticas
		printf("Ingresa el Nombre del Alumno #%d: ",(i+1)); //inicializamos en 1 la variable i para no empzar de 0
		gets(alumnos[i].nombre); //guardamos como cadena de texto en la variable nombre
		fflush(stdin); // Limpiamos memoria para no llenar el Buffer
		printf("Ingresa la edad del Alumno #%d: ",(i+1)); 
		scanf("%d",&alumnos[i].edad); //guardamos como entero en variable edad
		fflush(stdin);
		printf("Ingresa las faltas del Alumno #%d: ",(i+1));
		scanf("%d",&alumnos[i].faltas); //guardamos como entero en variable faltas
		fflush(stdin);
		printf("Ingresa el Promedio del Alumno #%d: ",(i+1));
		scanf("%f",&alumnos[i].promedio); //guardamos como decimal en variable promedio
		fflush(stdin);		
	}
}

void mostrartodos(){ //funcion para mostrar datos
	
	printf("Mostrando todos los datos de los alumnos\n");
	for(int i=0; i<indice; i++){ //Buscamos en el indice todos lo que llevamos registrado 
		printf("\n\n____________________________________________\n"); //lineas esteticas
		printf("\nAlumno: #%d",(i+1)); //Se busca desde 1 en vez desde 0 por cuestiones esteticas
		printf("\n\nNombre: %s",alumnos[i].nombre); //Las coincidencias con el arreglo se muestran en pantalla
		printf("\nEdad: %d",alumnos[i].edad);
		printf("\nFaltas: %d",alumnos[i].faltas);
		printf("\nPromedio: %.2f",alumnos[i].promedio); //En promedio se establecen 2 decimales
		printf("\n____________________________________________\n");		
	}
}
void buscaredad(){ //Funcion para busqueda por edad
	int ed, encontrado=0; // se establecen variables auxiliares
	printf("Ingresa la edad a Buscar: "); 
	scanf("%d",&ed); //el criterio a buscar se guarda en la variable ed
	for(int i=0; i<indice; i++){ //comenzamos a discriminar datos con el bucle for 1 a 1
		if(alumnos[i].edad==ed){ //el valor del criterio debe ser igual a algun campo del arreglo
			encontrado=1; //En caso de haber coincidencias se muestran los valores
			printf("\n\n____________________________________________\n"); //se muestran los datos en el orden descrito
			printf("\nAlumno: #%d",(i+1));
			printf("\n\nNombre: %s",alumnos[i].nombre); 
			printf("\nEdad: %d",alumnos[i].edad);
			printf("\nFaltas: %d",alumnos[i].faltas);
			printf("\nPromedio: %.2f",alumnos[i].promedio);
			printf("\n____________________________________________\n");		
		}
		
	}
	if(encontrado==0){ //En caso de que el criterio no coincida se manda texto de que no ha sido encontrado
		printf("No hay alumnos con la Edad %d\n",ed);
	}
}

void buscarpromedio(){ //Funcion para busqueda por edad
	int encontrado=0; // se establecen variables auxiliares
	float prom;
	printf("Ingresa el Promedio a Buscar: ");
	scanf("%f",&prom); //el criterio a buscar se guarda en la variable prom
	for(int i=0; i<indice; i++){ //comenzamos a discriminar datos con el bucle for 1 a 1
		if(alumnos[i].promedio==prom){  //el valor del criterio debe ser igual a algun campo del arreglo
			encontrado=1; //En caso de haber coincidencias se muestran los valores
			printf("\n\n____________________________________________\n"); //se muestran los datos en el orden descrito
			printf("\nAlumno: #%d",(i+1));
			printf("\n\nNombre: %s",alumnos[i].nombre);
			printf("\nEdad: %d",alumnos[i].edad);
			printf("\nFaltas: %d",alumnos[i].faltas);
			printf("\nPromedio: %.2f",alumnos[i].promedio);
			printf("\n____________________________________________\n");	
		}
		
	}
	if(encontrado==0){ //En caso de que el criterio no coincida se manda texto de que no ha sido encontrado
		printf("No hay alumnos con el Promedio solicitado %d\n",prom);
	}	
}

void reins(){ //Funcion para calculo de reinscripciones
    
    int a=1800; //se define el costo de reinscripcion
    int z,y; //se definen variables auxiliares
    int *ap; //se declara puntero -> paso por valor
        
    ap = &a; //se asocia puntero con variable principal
    z=indice;//esta variable nos dice cuantos alumnos hay registrados
    y=z*a; //variable para operacion simple
     
        cout << "Alumnos Registrados: " << z << "\n"; //salida a pantalla 
        cout << "\nCosto por Reiscripcion: $ " << *ap << "\n"; //Se muestra valor actual de puntero
        cout << "\nEl Total de reinscripciones sera:$" << y << "\n"; //Se muestra la variable con el calculo nuevo 
}

void salir(){ //Funcion para salir 
	
	system("cls");
	system("color 1E");
	printf("\n\n\n");
	printf("\n        *************           ***         ***           ************** "); 
	printf("\n        **************          ***         ***           **************"); 
	printf("\n        ***         ***         ***         ***           ***"); 
	printf("\n        ***         ****         ***       ***            ***"); 
	printf("\n        ***         ****          ***     ***             ***"); 
	printf("\n        ***         ****           ***   ***              ***");
	printf("\n        ***         ***             *** ***               ***"); 
	printf("\n        **************               *****                **************"); 
	printf("\n        **************                ***                 **************"); 
	printf("\n        ***         ***               ***                 ***"); 
	printf("\n        ***         ****              ***                 ***"); 
	printf("\n        ***         ****              ***                 ***"); 
	printf("\n        ***         ****              ***                 ***");
	printf("\n        ***         ***               ***                 ***"); 
	printf("\n        **************                ***                 **************"); 	
	printf("\n        *************                 ***                 **************"); 	
	getch();
}	

int main(){ //funcion principal
	
	int opcion; //variable para switch

	do {//ciclo de ejecucion fijo
		system("color 0E");  //color de consola y texto
		system("cls"); //limpiar pantalla
		
		printf("       **********************************\n");	 //detalles esteticos
		printf("       *                                *\n");
		printf("       *       Sistema de Archivo y     *\n");
		printf("       *        Busqueda de Alumnos     *\n");
		printf("       *        EL BUEN ESTUDIANTE      *\n"); 
		printf("       *                                *\n");
		printf("       **********************************\n\n");
		printf("         Ruben Vicente Fuentes Rodriguez \n");
		time_t tiempo = time(0); //funcion para hora y fecha
		tm *tlocal = localtime(&tiempo); //puntero para definir fecha y hora
		char output[128]; //espacio maximo de caracteres de fecha
		strftime(output,128,"             %d/%m/%y      %H:%M:%S",tlocal); //se coloca la fecha definida
		cout<<"\n"<<output<<endl;
		
		printf("\n\n---------------- Menu de Opciones ---------------\n|"); //texto en pantalla tipo menu
		printf("                                               |\n|   1. Captura de Alumnos                       | \n"); //(perdon por tantas lineas, para mi es mas visual asi
		printf("|   2. Mostrar todos los Alumnos                |\n");
		printf("|   3. Mostrar alumnos por Edad                 |\n");             
		printf("|   4. Mostrar alumnos por Promedio             |\n");		
		printf("|   5. Mostrar Ganancia por Reinscripciones     |\n");
		printf("|   6. Salir                                    |\n|                                               |\n");
			printf("-------------------------------------------------\n\n");
		
		printf(" Elija una opcion: ");
	
		scanf("%d",&opcion); //guardamos entrada del teclado en la variable opcion
		system("cls"); //limpiamos pantalla
		
		switch(opcion){ //switch para elegir casos de acuerdo a funciones
			
			case 1:capturar(); //casos de la estructura switch
				break; //freno de caso 
			case 2:mostrartodos(); 
				break;
			case 3:buscaredad();//me gusto aprender a hacerlo porque no lo habia hecho asi
				break;
			case 4:buscarpromedio();//se ve mas limpio
				break;					
			case 5:reins();
				break;	
			case 6:salir();
				break;			
			default: printf("Opcion incorrecta"); //opcion default 
		}
	
		getch(); //palabra reservada para esperar accion de usuario
	}while(opcion!=6); // Bucle que continua mientras la opcion sea diferente a 6
	
	
		system("cls"); //Limpiamos pantalla
	
	system("pause"); //pausa de la ejecucion
	return 0; //retorno 0 que indica que ha llegado a su fin
	
		} //llaves pertenercientes a funciones y ciclos
