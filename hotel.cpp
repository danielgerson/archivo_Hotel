#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <conio.h>

using namespace std;

struct info{
	char nombre[50];
	char apellido[50];
	char habitacion[50];
	char id[50];
	int cantidad;
}turistas;

void menu();

char auxID[50];
bool encontrado = false;
int opcion=0;
int numeroPersonas=0;

void ingresos(){
	ofstream archivo;
	archivo.open("turistas.txt", ios::out | ios::app);
	if (archivo.is_open()){
		fflush(stdin);
		cout<<endl<<" Que habitacion desea reservar"<<endl;
		cout<<" 1. Bungalow 1"<<endl;
		cout<<" 2. Bungalow 2"<<endl;
		cout<<" 3. Bungalow 3"<<endl;
		cout<<" 4. Bungalow 4"<<endl;
		cout<<" 5. Bungalow 5"<<endl;
		cout<<" 6. Habitacion 1 con seis literas"<<endl;
		cout<<" 7. Habitacion 2 con seis literas"<<endl;
		cout<<" 8. Salir al menu principal"<<endl;
		cout<<endl<<" Que habitacion desea: ";
		cin>>opcion;
		switch(opcion){
			case 1:
				cout<<endl<<" *** Bienvenido a Bungalow 1 ***"<<endl;
				cout<<" Cuantas personas desea ingresar: ";
				cin>>numeroPersonas;
					for( int i=0; i<numeroPersonas; i++){
						cout<<endl<<"Ingrese los datos que se le solicitan porfavor."<<endl;
						cout<<"_________________________"<<endl;
						cout<<endl<<" ID de Bungalow 1 (B1): ";
						cin>>turistas.id;
						cout<<" Nombre: ";
						cin>>turistas.nombre;
						cout<<" Apellido: ";
						cin>>turistas.apellido;
						cout<<" Habitacion: ";
						cin>>turistas.habitacion;
						archivo<<turistas.id<<" "<<turistas.nombre<<" "<<turistas.apellido<<" "<<turistas.habitacion<<" "<<endl;
						getch();
					}
					cout<<endl<<" Se ingresaron los datos con exito"<<endl; 
				break;
					
			case 2:
				cout<<endl<<" *** Bienvenido a Bungalow 2 ***"<<endl;
				cout<<" Cuantas personas desea ingresar: ";
				cin>>numeroPersonas;
					for( int i=0; i<numeroPersonas; i++){
						cout<<endl<<"Ingrese los datos que se le solicitan porfavor."<<endl;
						cout<<"_________________________"<<endl;
						cout<<endl<<" ID de Bungalow 2 (B2): ";
						cin>>turistas.id;
						cout<<" Nombre: ";
						cin>>turistas.nombre;
						cout<<" Apellido: ";
						cin>>turistas.apellido;
						cout<<" Habitacion: ";
						cin>>turistas.habitacion;
						archivo<<turistas.id<<" "<<turistas.nombre<<" "<<turistas.apellido<<" "<<turistas.habitacion<<" "<<endl;
						getch();
					}
					cout<<endl<<" Se ingresaron los datos con exito"<<endl; 
				break;
				
			case 3:
				cout<<endl<<" *** Bienvenido a Bungalow 3 ***"<<endl;
				cout<<" Cuantas personas desea ingresar: ";
				cin>>numeroPersonas;
					for( int i=0; i<numeroPersonas; i++){
						cout<<endl<<"Ingrese los datos que se le solicitan porfavor."<<endl;
						cout<<"_________________________"<<endl;
						cout<<endl<<" ID de Bungalow 3 (B3): ";
						cin>>turistas.id;
						cout<<" Nombre: ";
						cin>>turistas.nombre;
						cout<<" Apellido: ";
						cin>>turistas.apellido;
						cout<<" Habitacion: ";
						cin>>turistas.habitacion;
						archivo<<turistas.id<<" "<<turistas.nombre<<" "<<turistas.apellido<<" "<<turistas.habitacion<<" "<<endl;
						getch();
					}
					cout<<endl<<" Se ingresaron los datos con exito"<<endl;
				break;
				
			case 4:
				cout<<endl<<" *** Bienvenido a Bungalow 4 ***"<<endl;
				cout<<" Cuantas personas desea ingresar: ";
				cin>>numeroPersonas;
					for( int i=0; i<numeroPersonas; i++){
						cout<<endl<<"Ingrese los datos que se le solicitan porfavor."<<endl;
						cout<<"_________________________"<<endl;
						cout<<endl<<" ID de Bungalow 4 (B4): ";
						cin>>turistas.id;
						cout<<" Nombre: ";
						cin>>turistas.nombre;
						cout<<" Apellido: ";
						cin>>turistas.apellido;
						cout<<" Habitacion: ";
						cin>>turistas.habitacion;
						archivo<<turistas.id<<" "<<turistas.nombre<<" "<<turistas.apellido<<" "<<turistas.habitacion<<" "<<endl;
						getch();
					}
					cout<<endl<<" Se ingresaron los datos con exito"<<endl;
				break;
				
			case 5:
				cout<<endl<<" *** Bienvenido a Bungalow 5 ***"<<endl;
				cout<<" Cuantas personas desea ingresar: ";
				cin>>numeroPersonas;
					for( int i=0; i<numeroPersonas; i++){
						cout<<endl<<"Ingrese los datos que se le solicitan porfavor."<<endl;
						cout<<"_________________________"<<endl;
						cout<<endl<<" ID de Bungalow 5 (B5): ";
						cin>>turistas.id;
						cout<<" Nombre: ";
						cin>>turistas.nombre;
						cout<<" Apellido: ";
						cin>>turistas.apellido;
						cout<<" Habitacion: ";
						cin>>turistas.habitacion;
						archivo<<turistas.id<<" "<<turistas.nombre<<" "<<turistas.apellido<<" "<<turistas.habitacion<<" "<<endl;
						getch();
					}
					cout<<endl<<" Se ingresaron los datos con exito"<<endl;
				break;
				
			case 6:
				cout<<endl<<" *** Bienvenido a Habitacion 1 con seis literas ***"<<endl;
				cout<<" Cuantas personas desea ingresar: ";
				cin>>numeroPersonas;
					for( int i=0; i<numeroPersonas; i++){
						cout<<endl<<"Ingrese los datos que se le solicitan porfavor."<<endl;
						cout<<"_________________________"<<endl;
						cout<<endl<<" ID de Habitacion 1 (H1): ";
						cin>>turistas.id;
						cout<<" Nombre: ";
						cin>>turistas.nombre;
						cout<<" Apellido: ";
						cin>>turistas.apellido;
						cout<<" Habitacion: ";
						cin>>turistas.habitacion;
						archivo<<turistas.id<<" "<<turistas.nombre<<" "<<turistas.apellido<<" "<<turistas.habitacion<<" "<<endl;
						getch();
					}
					cout<<endl<<" Se ingresaron los datos con exito"<<endl;
				break;
				
			case 7:
				cout<<endl<<" *** Bienvenido a Habitacion 2 con seis literas ***"<<endl;
				cout<<" Cuantas personas desea ingresar: ";
				cin>>numeroPersonas;
					for( int i=0; i<numeroPersonas; i++){
						cout<<endl<<"Ingrese los datos que se le solicitan porfavor."<<endl;
						cout<<"_________________________"<<endl;
						cout<<endl<<" ID de Habitacion 2 (H2): ";
						cin>>turistas.id;
						cout<<" Nombre: ";
						cin>>turistas.nombre;
						cout<<" Apellido: ";
						cin>>turistas.apellido;
						cout<<" Habitacion: ";
						cin>>turistas.habitacion;
						archivo<<turistas.id<<" "<<turistas.nombre<<" "<<turistas.apellido<<" "<<turistas.habitacion<<" "<<endl;
						getch();
					}
					cout<<endl<<" Se ingresaron los datos con exito"<<endl;
				break;
				
			case 8:
				menu();
				break;
				
			default:
				cout<<endl<<" Por favor elija una opcion."<<endl;
		}
	} else {
		cout<<"  ERROR, al crear y abrir el archivo turistas.txt.";
	}
        
        archivo.close();
}

void reporte(){
	ifstream reporte;
	reporte.open("turistas.txt", ios::out | ios::in);
	if (reporte.is_open()){
		reporte>>turistas.id;
		
		cout<<endl<<" *** Mostrando turistas registrados ***"<<endl;
		cout<<"_________________________"<<endl;
		while(!reporte.eof()){
			reporte>>turistas.nombre;
			reporte>>turistas.apellido;
			reporte>>turistas.habitacion;
			
			cout<<endl<<" ID de habitacion: "<<turistas.id<<endl;
			cout<<" Nombre: "<<turistas.nombre<<endl;
			cout<<" Apellido: "<<turistas.apellido<<endl;
			cout<<" Habitacion: "<<turistas.habitacion<<endl;
			
			reporte>>turistas.id;
			cout<<"_________________________"<<endl;
			getch();
		}
	} else {
		cout<<endl<<" ERROR, al arbir el archivo turistas.txt"<<endl;
	}
	reporte.close();
}

void eliminar(){
	ofstream auxiliar;
	ifstream eliminar;
	
	auxiliar.open("auxiliar.txt", ios::out);
	eliminar.open("turistas.txt", ios::in);
	
	if (auxiliar.is_open() && eliminar.is_open()) {
		cout<<endl<<" Ingrese ID de habitacion desea liberar: ";
		cin>>auxID;
		eliminar>>turistas.id;
		encontrado = false;
		while(!eliminar.eof()){
			eliminar>>turistas.nombre>>turistas.apellido>>turistas.habitacion;
			if (strcmp(auxID, turistas.id) == 0){
				cout<<endl<<" Habitacion liberada exitosamente."<<endl;
				getch();
				encontrado = true;
			} else {
				auxiliar<<turistas.id<<" "<<turistas.nombre<<" "<<turistas.apellido<<" "<<turistas.habitacion<<endl;
				
			}
			eliminar>>turistas.id;
		}
	} else {
		cout<<" ERROR al abrir el archivo turistas.txt."<<endl;
	}
	if (encontrado == false){
		cout<<" No se encontro ID de habitacion: "<<auxID<<endl;
	}
	auxiliar.close();
	eliminar.close();
	
	remove("turistas.txt");
	rename("auxiliar.txt", "turistas.txt");
}

void menu(){
	int opcion=0;
	
	do{
		cout<<endl<<"   -------- Hotel Monterrico --------   "<<endl;
		cout<<"    Menu   "<<endl;
		cout<<" 1. Registrarse"<<endl;
		cout<<" 2. Reporte"<<endl;
		cout<<" 3. Liberar Habitaciones"<<endl;
		cout<<" 4. Salir"<<endl;
		cout<<endl;
		cout<<"****************************************************************"<<endl;
		cout<<endl<<" ¿Que Opcion Desea?: ";
		cin>>opcion;
		switch(opcion){
			case 1:
				ingresos();
				break;
			
			case 2:
				reporte();
				break;
			
			case 3:
				eliminar();
				break;
		}
	}while(opcion !=4);
}

int main() {
	
	menu();

}