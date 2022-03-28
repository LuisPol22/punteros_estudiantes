#include<iostream>
#include <stdlib.h> 
#include <string.h> 
using namespace std;
struct Estudiante{
	int *codigo;
	string *nombre;
	string *apellido;
	string *direccion;
	int *tel;
};

int main(){
int fila_estudiante=0,columna_notas=5;
Estudiante estudiante;
cout<<"Cuantos Estudiantes Desea Ingresar: ";
cin>>fila_estudiante;	





estudiante.codigo = new int[fila_estudiante];
estudiante.nombre = new string[fila_estudiante];
estudiante.apellido= new string[fila_estudiante];
estudiante.direccion = new string [fila_estudiante];
estudiante.tel = new int [fila_estudiante];

for (int i=0;i<fila_estudiante;i++){
	
}

cout<<"--------------Ingrese Notas--------------"<<endl;
string nombre;
for (int i=0;i<fila_estudiante;i++){
	cout<<"Codigo: ";
	cin>>estudiante.codigo[i];
	cin.ignore();
	cout<<"Nombre:";
	getline(cin,estudiante.nombre[i]);
	cout<<"Apellido:";
	getline(cin,estudiante.apellido[i]);
	cout<<"Direccion:";
	getline(cin,estudiante.direccion[i]);
	cout<<"Telefono: ";
	cin>>estudiante.tel[i];
	
	
for (int ii=0;ii<columna_notas;ii++){




	}
	cout<<"------------------------------------"<<endl;
}
	cout<<"--------------Mostrar Notas--------------"<<endl;
for (int i=0;i<fila_estudiante;i++){
	cout<<"Codigo: "<<estudiante.codigo[i]<<" Estudiante: "<<estudiante.nombre[i]<<" "<<estudiante.apellido[i]<<" Direccion: "<<estudiante.direccion[i]<<" Telefono: "<<estudiante.tel[i]<<"."<<endl;

	
}



delete[] estudiante.codigo;
delete[] estudiante.nombre;
delete[] estudiante.apellido;
delete[] estudiante.direccion;
	system("PAUSE");
	return 0;

}


