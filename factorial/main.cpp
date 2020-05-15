#include<iostream>
#include <fstream>
#include <sstream>
#include <math.h> 
#include<cmath>

using namespace std;

int factorial(int valor);

int main(){
    
    std::cout<<"escriba el valor de n "<<std::endl;
    int valor;
    cin >> valor;
    std::cout<<"El valor de n! es: "<<std::endl;
    
    factorial(valor);
    return 0;
}

int factorial(int valor){
    int result=1;
    for(int i=1;i<valor+1;i++){
        result=result*i;
    }
    std::cout<<result<<std::endl;
}