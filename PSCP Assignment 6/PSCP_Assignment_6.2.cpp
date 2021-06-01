#include <iostream>

// steps(n) = steps(n-1) + steps(n-2)

int stepCalc(int steps){    // Recursive function to find the number of steps

    if(steps<=1){

        return steps;

    }

    return stepCalc(steps-1) + stepCalc(steps-2);


}



int main(){

    std::cout << "Enter the number of stairs: ";
    int n{};
    std::cin >> n;

    std::cout << "The number of ways to climb the stairs are: " << stepCalc(n+1) << '\n'; 

}