#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

//Este codigo fue basado en RK4 que hice en en python para la tarea de "Meter un gol" en la clase magistral
//Simplemente le quite la fuerza de friccion y le dos condiciones iniciales solamente en Y para que sea en una dimension

void rk4(int n);
double fy();

int main(){
    
    int n=1000; /*Numero de iteraciones maximas pata el rk4*/
    rk4(n);
    
    
    return 0;
}


void rk4(int n){
    double h=0.1; /*Sensibilidad del paso del paso*/
    /*Inicializamos las velocidades y las posiciones */
    double *Y=new double[n];
    double *VY=new double[n];   
    /*Condiciones iniciales*/     
    double y_ini=7.5;
    double vy_ini=20.0;
    Y[0]=y_ini;
    VY[0]=vy_ini;
    int i=0;
    while(i<=n){   
    /*Actualizamos los tamaños de los pasos para X y para Y*/
    double k1y=h*fy();
        
    double k2y=h*fy();   
        
    double k3y=h*fy();   
        
    double k4y=h*fy();

    double k5y=h*VY[i];
        
    double k6y=h*(VY[i]+0.5*k1y);
        
    double k7y=h*(VY[i]+0.5*k2y);
        
    double k8y=h*(VY[i]+k3y);
        
    /*Añadimos los pasos siguientes*/   
    Y[i+1]=Y[i]+(k5y+2*k6y+2*k7y+k8y)/6;
    VY[i+1]=VY[i]+(k1y+2*k2y+2*k3y+k4y)/6;
    float t=h*i;
    std::cout<<Y[i]<<" "<<t<<std::endl;
    i+=1;
    if(Y[i]<0){
        break;
    }   
    }
}

double fy(){
    return -10;
}