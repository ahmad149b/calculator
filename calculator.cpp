#include<iostream>
int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout<<"********************CALCULATOR********************\n";

    std::cout<<"Enter any Operator from (+ - * /)";
    std::cin>>op;

    std::cout<<"Enter Number 1\n";
    std::cin>>num1;

    std::cout<<"Enter number 2\n";
    std::cin>>num2;

    switch(op){
        case '+':
        result= num1 + num2;
        std::cout<<"Your Answer is = "<<result;
        break;
        
        case '-':
        result= num1 - num2;
        std::cout<<"Your Answer is = "<<result;
        break;

        case '*':
        result=  num1 * num2;
        std::cout<<"Your Answer is = "<<result;
        break;

        case '/':
        result= num1 / num2;
        std::cout<<"Your Answer is = "<<result;
        break;

        default: 
        std::cout<<"Only Enter + - * /"<<'\n';

    }

    
    std::cout<<"\n**************************************************\n";

    return 0;
}