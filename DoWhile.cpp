#include <iostream>
using namespace std;

int main(){
    int saldo =1000,opcion=0, dinero=0, retiro=0,cuenta=0;
    do{
        cout<<"-----Menu-----"<<endl;
        cout<<"1.Consultar saldo."<<endl;
        cout<<"2.depositar dinero."<<endl;
        cout<<"3.Retirar dienro."<<endl;
        cout<<"4.Salir."<<endl;
        cout<<"Elige una opcion:"<<endl;
        cin>>opcion;
        
    
    switch (opcion){

    case 1:
        cout<<"Su saldo total es de "<<saldo<<" dolares."<<endl;
        break;
    case 2:
        cout<<"Cantidad a depositar: "<<endl;
        cin>>dinero;
        if(dinero > 0){
            cout<<dinero<<" dolares depositado."<<endl;
            cuenta=saldo+dinero;
            cout<<"Saldo disponible: "<<cuenta<<". Muchas gracias."<<endl;
        }else{
            cout<<"ERROR, no se permiten depositos negativos"<<endl;
        }

        break;
    case 3:
        cout<<"Cantidad a retirar: "<<endl;
        cin>>retiro;
        if(retiro <=1000 && retiro > 0){
            cout<<retiro<<" dolares han sido retirados. Muchas gracias."<<endl;
            cuenta=saldo-retiro;
            cout<<"Saldo disponible: "<<cuenta<<endl;
        }else if(retiro <= 0){
            cout<<"Error. no es posible realizar un retiro negativo."<<endl;
        }
        else{
            cout<<"Error. Retiro mayor al saldo diponible"<<endl;
        }
        break;
    case 4:
        cout<<"Usuario cerrado. Muchas Gracias por su confianza."<<endl;
        break;
    
    default:
        cout<<"Opcion invalida."<<endl;
        break;
    }
    }while(opcion !=4);
    return 0;
}