#include<iostream>
#include<cstdlib>
#include<string.h>
#include "paciente.h"

struct Paciente pacientes;

void solicitarCita(paciente[]);
void cancelarCita(paciente[]);
void actualizarPacientes(paciente[]);
void operacion(paciente[]);

void menu(void){  //CREAMOS UN MENU PARA LA GESTION DE LOS PACIENTES

    cout<<"\n\t\t[    REGISTRO DE PACIENTES    ]\n";
    cout<<"\t\t----------------------------\n\n";
    cout<<" 1. SOLICITAR CITA "<<endl;
    cout<<" 2. CANCELAR CITA "<<endl;
    cout<<" 3. ACTUALIZAR PACIENTES "<<endl;
    cout<<" 5. OPERACIONES          "<<endl;
    cout<<" 6. SALIR                                       "<<endl;

    cout<<"\n Ingrese opcion : ";
}

//desarrollar los metodos

void paciente::solicitarCita(paciente pacientes[5]){   //METODO EN EL CUAL EL USUARIO SOLICITA UNA CITA
	
	
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
	
	
void paciente::cancelarCita(paciente pacientes[5]){  //SI EL USUARIO DESEA CANCELAR SU CITA
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

                cout<<"\n\nCITA ELIMINADO...!!!!!\n";

                return;

            }else {
 //FALTA IMPLEMENTAR

        }

    }
    if(paciente[i].codigo==NULL)
        cout<<"\n\tCODIGO INCORRECTO...!!\n";

}

}

void menu_actualizar(void){   //MEMU PARA ACTUALIZAR EL USUARIO TIENE PARA ESCOJER LOS DIFERENTES OPCIONES

    cout<<"\n\t\t[    ESPECIFIQUE CAMPO A ACTUALIZAR    ]\n";
    cout<<"\t\t----------------------------\n\n";
    cout<<" 1. NOMBRES                       "<<endl;
    cout<<" 2. APELLIDOS                     "<<endl;
    cout<<" 3. DIRECCION                     "<<endl;
    cout<<" 4. TELEFONO                      "<<endl;
    cout<<" 5. SALIR                         "<<endl;

    cout<<"\n Ingrese opcion : ";
}
void actualizar_paciente(paciente pacientes[5]{

    int cod, x;  
    

    cout<<"\n\n\n\tACTUALIZAR REGISTRO DE PACIENTE";
    cout<<"\n\n\tINGRESE CODIGO:"; cin>>cod;

    while(pacientes!=NULL){

            if(pacientes->codigo==cod){
                system("cls");
                cout<<"\n\tDATOS DEL PACIENTE  ";
                cout<<"\n\t--------------------";
                cout<<"\n\n\tCODIGO   : "<<pacientes->codigo<<endl;
                cout<<"\n\tNOMBRES  : "<<pacientes->nombres<<endl;
                cout<<"\tAPELLIDOS: "<<pacientes->apellidos<<endl;
                cout<<"\tDIRECCION: "<<pacientes->direccion<<endl;
                cout<<"\tTELEFONO : "<<pacientes->telefono<<endl;

                menu_actualizar();
                cin>>x;

                switch(x){

                    case 1: cout<<"\n\n\tINGRESE NOMBRES:";
                            cin.ignore(); cin.getline(q->nombres,maxchar);
                            break;

                    case 2: cout<<"\n\n\tINGRESE APELLIDOS:";
                            cin.ignore(); cin.getline(q->apellidos,maxchar);
                            break;

                    case 3: cout<<"\n\n\tINGRESE DIRECCION:";
                            cin.ignore(); cin.getline(q->direccion,maxchar);
                            break;

                    case 4: cout<<"\n\n\tINGRESE TELEFONO:";
                            cin>>q->telefono;
                            break;

                    default: cout<<"\nINGRESE UNA OPCION VALIDA...\n"; break;

                }
                cout<<"\n\n\tREGISTRO ACTUALIZADO...!!!!!\n";

                return;

            }else {


                paciente=paciente->sgte;

        }

    }
    if(q==NULL)
        cout<<"\n\tCODIGO INCORRECTO...!!\n";
}
void operacion(Paciente pacientes[5]){
	
 //falta implementar
}




