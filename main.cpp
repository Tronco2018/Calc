#include <iostream>

float summ(float a, float b) //sum function
{
    return a+b;
} float sub(float a, float b) //sub function
{
    return a-b;
} float mult(float a, float b) //mult function
{
    return a*b;
} float div(float a, float b) //divide function
{
    if (b != 0){
        return a/b;
    } else {
        std::cout << "Cannot divide by zero" << std::endl;
        return 11111;
    }
}
int main() //main function
{
    while (1) //while loop
    {
        //defining variables
        float a, b; 
        char op;

        std::cout << "--------------------------------------" << std::endl; //placeholder lines
        //getting inputs
        std::cin >> a;
        std::cin >> op;
        std::cin >> b;

        //switch case for operator
        switch (op)
        {
            case '+': //case for sum
                std::cout << "Result: " << summ(a, b) << std::endl; //returning result
                break;
            case '-': //case for sub
                std::cout << "Result: " << sub(a, b) << std::endl; //returning result
                break;
            case '*': //case for mult
                std::cout << "Result: " << mult(a, b) << std::endl; //returning result
                break;
            case '/': //case for div
                std::cout << "Result: " << div(a, b) << std::endl; //returning result
                break; 
            default: //default case 
                std::cout << "Error, no valid char found for: " << op << std::endl; //error message
                break; 
        }
    }
    
}