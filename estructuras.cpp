#include <stdio.h>  
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <ctime>



using namespace std; 


struct datos{ 
	
	char nombre[35]; 
	int edad, faltas; 
	float promedio;
	
}alumnos[100]; 

int indice; 


void capturar (){ 
		
		system("color 2f");
		printf("\nCuantos Alumnos vas a registrar?: "); 
		scanf("%d",&indice); 
		
		for(int i=0; i<indice; i++){ 
		fflush(stdin);
		printf("____________________________________________\n"); 
		printf("Ingresa el Nombre del Alumno #%d: ",(i+1)); 
		gets(alumnos[i].nombre); 
		fflush(stdin); 
		printf("Ingresa la edad del Alumno #%d: ",(i+1)); 
		scanf("%d",&alumnos[i].edad); 
		fflush(stdin);
		printf("Ingresa las faltas del Alumno #%d: ",(i+1));
		scanf("%d",&alumnos[i].faltas); 
		fflush(stdin);
		printf("Ingresa el Promedio del Alumno #%d: ",(i+1));
		scanf("%f",&alumnos[i].promedio); 
		fflush(stdin);		
	}
}

void mostrartodos(){ 
	
	printf("Mostrando todos los datos de los alumnos\n");
	for(int i=0; i<indice; i++){ 
		printf("\n\n____________________________________________\n");
		printf("\nAlumno: #%d",(i+1)); 
		printf("\n\nNombre: %s",alumnos[i].nombre); 
		printf("\nEdad: %d",alumnos[i].edad);
		printf("\nFaltas: %d",alumnos[i].faltas);
		printf("\nPromedio: %.2f",alumnos[i].promedio); 
		printf("\n____________________________________________\n");		
	}
}
void buscaredad(){ 
	int ed, encontrado=0; 
	printf("Ingresa la edad a Buscar: "); 
	scanf("%d",&ed); 
	for(int i=0; i<indice; i++){ 
		if(alumnos[i].edad==ed){ 
			encontrado=1; 
			printf("\n\n____________________________________________\n");
			printf("\nAlumno: #%d",(i+1));
			printf("\n\nNombre: %s",alumnos[i].nombre); 
			printf("\nEdad: %d",alumnos[i].edad);
			printf("\nFaltas: %d",alumnos[i].faltas);
			printf("\nPromedio: %.2f",alumnos[i].promedio);
			printf("\n____________________________________________\n");		
		}
		
	}
	if(encontrado==0){ 
		printf("No hay alumnos con la Edad %d\n",ed);
	}
}

void buscarpromedio(){ 
	int encontrado=0; 
	float prom;
	printf("Ingresa el Promedio a Buscar: ");
	scanf("%f",&prom); 
	for(int i=0; i<indice; i++){ 
		if(alumnos[i].promedio==prom){  
			encontrado=1; 
			printf("\n\n____________________________________________\n"); 
			printf("\nAlumno: #%d",(i+1));
			printf("\n\nNombre: %s",alumnos[i].nombre);
			printf("\nEdad: %d",alumnos[i].edad);
			printf("\nFaltas: %d",alumnos[i].faltas);
			printf("\nPromedio: %.2f",alumnos[i].promedio);
			printf("\n____________________________________________\n");	
		}
		
	}
	if(encontrado==0){ 
		printf("No hay alumnos con el Promedio solicitado %d\n",prom);
	}	
}

void reins(){ 
    
    int a=1800; 
    int z,y; 
    int *ap; 
        
    ap = &a; 
    z=indice;
    y=z*a; 
     
        cout << "Alumnos Registrados: " << z << "\n";
        cout << "\nCosto por Reiscripcion: $ " << *ap << "\n";
        cout << "\nEl Total de reinscripciones sera:$" << y << "\n"; 
}

void salir(){ 
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

int main(){ 
	
	int opcion; 

	do {
		system("color 0E");  
		system("cls"); 
		
		printf("       **********************************\n");	
		printf("       *                                *\n");
		printf("       *       Sistema de Archivo y     *\n");
		printf("       *        Busqueda de Alumnos     *\n");
		printf("       *        EL BUEN ESTUDIANTE      *\n"); 
		printf("       *                                *\n");
		printf("       **********************************\n\n");
		printf("         Ruben Vicente Fuentes Rodriguez \n");
		time_t tiempo = time(0); 
		tm *tlocal = localtime(&tiempo); 
		char output[128]; 
		strftime(output,128,"             %d/%m/%y      %H:%M:%S",tlocal); 
		cout<<"\n"<<output<<endl;
		
		printf("\n\n---------------- Menu de Opciones ---------------\n|"); 
		printf("                                               |\n|   1. Captura de Alumnos                       | \n"); 
		printf("|   2. Mostrar todos los Alumnos                |\n");
		printf("|   3. Mostrar alumnos por Edad                 |\n");             
		printf("|   4. Mostrar alumnos por Promedio             |\n");		
		printf("|   5. Mostrar Ganancia por Reinscripciones     |\n");
		printf("|   6. Salir                                    |\n|                                               |\n");
			printf("-------------------------------------------------\n\n");
		
		printf(" Elija una opcion: ");
	
		scanf("%d",&opcion); 
		system("cls"); 
		
		switch(opcion){ 
			
			case 1:capturar(); 
				break; 
			case 2:mostrartodos(); 
				break;
			case 3:buscaredad();
				break;
			case 4:buscarpromedio();
				break;					
			case 5:reins();
				break;	
			case 6:salir();
				break;			
			default: printf("Opcion incorrecta"); 
		}
	
		getch(); 
	}while(opcion!=6); 
	
	
		system("cls"); 
	
	system("pause"); 
	return 0; 
	
		} 
