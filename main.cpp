#include<iostream>
#include<cmath>

typedef double real;

namespace Basic{
    real add(real a,real b){
        return a+b;
    }
    real substract(real a,real b){
        return a-b;
    }
    real multiply(real a,real b){
        return a*b;
    }
    real divide(real a,real b){
        return a/b;
    }
}

namespace advanced{
    real power(real a,real b){
        return pow(a,b);
    }
    real squareroot(real a){
        return sqrt(a);
    }
}

int main(){
    real a,b;
    std::cout<<"---------CALCULATOR---------"<<'\n'<<'\n';
    std::cout<<"1.ADDITION."<<'\n';
    std::cout<<"2.SUBSTRACTION."<<'\n';
    std::cout<<"3.MULTIPLICATION."<<'\n';
    std::cout<<"4.DIVISION."<<'\n';
    std::cout<<"5.POWER."<<'\n';
    std::cout<<"6.SQUARE ROOT."<<'\n'<<'\n';

    int choice;
    std::cout<<"Enter your choice : ";
    std::cin>>choice;

    switch(choice){
        case 1:
            std::cout<<"Enter two numbers : ";
            std::cin>>a>>b;
            std::cout<<"Result : "<<Basic::add(a,b);
            break;
        case 2:
            std::cout<<"Enter two numbers : ";
            std::cin>>a>>b;
            std::cout<<"Result : "<<Basic::substract(a,b);
            break;
        case 3:
            std::cout<<"Enter two numbers : ";
            std::cin>>a>>b;
            std::cout<<"Result : "<<Basic::multiply(a,b);
            break;
        case 4:
            std::cout<<"Enter two numbers : ";
            std::cin>>a>>b;
            if(b == 0){
                std::cout<<"Cannot divide a number by 0.";
            }
            else{
                std::cout<<"Result : "<<Basic::divide(a,b);
            }
            break;
        case 5:
            std::cout<<"Enter the base and exponent : ";
            std::cin>>a>>b;
            std::cout<<"Result : "<<advanced::power(a,b);
            break;
        case 6:
            std::cout<<"Enter a number : ";
            std::cin>>a;
            if(a < 0){
                std::cout<<"Negative number don't have square root.";
            }
            else{
                std::cout<<"Result : "<<advanced::squareroot(a);
            }
            break;
        default:
            std::cout<<"Invalid choice.";
    }
    return 0;
}