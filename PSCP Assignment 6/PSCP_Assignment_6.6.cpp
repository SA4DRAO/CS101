#include <iostream>


float polCalc(float p, float x){    // Recursive function to calculate the Legendre polynomial

    if (p==1){

        return x;

    }
    
    if (p==0){

        return 1;

    }
    
    return ((2*p - 1) * x * polCalc(p-1,x) / p) - ((p-1) * polCalc(p-2,x) / p);

}

int main(){
  
    int p{};
    float x{};

    std::cout << "Enter the value of p <int>: ";
    std::cin >> p;
    std::cout << "Enter the value of x (-1,1): ";
    std::cin >> x;
    
    std::cout << "The legendre polynomial is: " << polCalc(p,x) << '\n';


}