# include <iostream>
# include <stdlib.h>
using namespace std;
 
struct nodo{
 	
 	int info;
 	nodo *sig;
 	
 };
 int main(){
 	
 	nodo*cab,*p,*aux;
 	cab=new nodo();
 	cout<<"digite valor"<<endl;
 	cin>>cab->info; //para java seria cab.info;
 	cab->sig=NULL;
 	p=new nodo();
 	cin>>p->info;
 	system("cls");
 	p->sig=NULL;
 	cab->sig=p; //encadena los dos nodos
 	aux=cab;
 	while(aux!=NULL){
 		cout<<aux->info<<endl;
 		aux=aux->sig;
 	}
 	
 	
 }
 //tarea!!! menu 
 //1.ingresar nodo
 //2.listar
 //3.salir
