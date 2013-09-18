#include <iostream>
#include <stdlib.h>
using namespace std;

 void cargar();
 
 void mostrar(int v[5]);
 

 int main(){
     int op;
    
   do{ 
       cout<<"menu\ 1.cargar y mostrar\n 2.salir\ndigite opcion:";
       cin>>op;
       
       switch(op){
       	case 1:cargar();break;
       	case 2:cout<<"fin del programa"<<endl;
       	}
       	
       } while(op!=2);
       return 0;
   }
   
   void cargar(){
   	
   	int v[5];//int v[]=new int[5]//forma e declarar en java// 
   	cout<<"digite datos\n";
   	for (int i=0;i<5;i++){
   		cout<<"v["<<i<<"]:";
   		cin>>v[i];
   		
	   }
	   mostrar(v);
   }
       void mostrar(int v[5]){
       	cout<<"los datos del arreglo son:\n";
       	for(int i=0;i<5;i++)
       	cout<<v[i]<<" ";
       	
       	 system ("pause");
    }
     
       
             
     

    
     
    
