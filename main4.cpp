#include<iostream>

int main(){

    int num;
    int resultado;

    std::cout<<"Digite um numero e descubra se ele e par ou impar:"<<std::endl;
    std::cin>>num;

    resultado = num%2;
    if(resultado == 0){
        std::cout<<"Esse numero e par!"<<std::endl;
    }else{
        std::cout<<"Esse numero e impar!"<<std::endl;
    }

    return 0;

}