#include <iostream>
#include <iomanip> // For std::setprecision. This also allows us to limit the precision of the output.
#include <cmath> // For pow(). This allows us to use Powers easily.


float findPi(int n);

int main(){


    int n{};
    std::cout << "Enter the number of terms up to which you want the series to calculate: \n";
    std::cin >> n;

    std::cout << std::fixed;            
    std::cout << std::setprecision(3);  
    std::cout << "The value of π is: " << findPi(n) << '\n';
    
    return 0;

}


float findPi(int n){

    float res{};

    for(float i{};i<=n;i++){

        res = res + (pow(-1,i))/(2*i + 1);

    }

    return 4*res;

}