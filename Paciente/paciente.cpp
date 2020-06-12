#include<iostream>
#include<cstdlib>
#include<string.h>
#include "paciente.h"

struct Paciente pacientes;

void solicitarCita(paciente[]);
void cancelarCita(paciente[]);
void operacion(paciente[]);


//desarrollar los metodos

void solicitarCita(paciente pacientes[5]){
	
	
	cout<<"\n\n\t\t[  REGISTRO  ]\n";
    cout<<"\t\t------------";
    cout<<"\n\tDATOS DEL PACIENTE ";
    for(int i=0;i<5;i++){
    	
    	cout<<"Codigo:" <<endl;
        cin.getline(pacientes[i].codigo,20);
    	cout<<"Nombre de la persona:" <<endl;
        cin.getline(pacientes[i].nombre,20);
        cout<<"Apellido Paterno" <<endl;
        cin.getline(pacientes[i].apellidoPaterno,20);
        cout<<"Apellido Paterno:" <<endl;
        cin.getline(pacientes[i].apellidoMaterno,20);
        cout<<"Sexo:" <<endl;
        cin.getline(pacientes[i].sexo,20);
        cout<<"Telefono:" <<endl;
        cin.getline(pacientes[i].telefono,20);
        cout<<"direccion:" <<endl;
        cin.getline(pacientes[i].direccion,20);
	
	}
	
	
void cancelarCita(paciente pacientes[5]){
	 int cod;
	
	 cout<<"\n\n\n\tCANCELAR UNA CITA";
    cout<<"\n\n\tINGRESE CODIGO:"; cin>>cod;
   for(int i=0;i<5;++i){
 
    while(pacientes[i]!=NULL){

            if(pacientes[i].codigo==cod){

                if(pacientes[i].codigo==lista)
                   //FALTA IMPLEMENTAR

                else
                    //FALTA IMPLEMENTAR

                delete(q);

                cout<<"\n\n\CITA ELIMINADO...!!!!!\n";

                return;

            }else {
 //FALTA IMPLEMENTAR

        }

    }
    if(paciente[i].codigo==NULL)
        cout<<"\n\tCODIGO INCORRECTO...!!\n";

}

}
void operacion(Paciente pacientes[]){
	
	//falta implementar
}


