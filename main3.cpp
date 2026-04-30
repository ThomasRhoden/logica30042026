#include<iostream>

int main(){

    double brlAmount, exchangeRate, usdAmount;

    std::cout<<"------ Currency Converter: BRL to USD -------"<<std::endl;
    
    std::cout<<"Enter the current exchange rate (How much is 1 dollar in Reais?):"<<std::endl;
    std::cin>>exchangeRate;

    std::cout<<"Enter the amount in BRL(R$): "<<std::endl;
    std::cin>>brlAmount;

    if(brlAmount > 0){
        usdAmount = brlAmount / exchangeRate;
        std::cout<<"You will have $"<<usdAmount<<" US Dollars."<<std::endl;
    }else{
        std::cout<<"Error: Please enter a valid amount greater than zero."<<std::endl;
    }

    return 0;
}