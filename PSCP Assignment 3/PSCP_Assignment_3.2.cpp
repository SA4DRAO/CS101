#include <iostream>

void printStar(int num); // To print the stars
void printGap(int num); // To print the gaps

int main(){

    int n{5}; // This value can be adjusted to whatever you like. Make sure your terminal is large enough to accomodate the changes

    // Printing the top half
    for (int i{1}; i <= n; i++){
        
        printStar(i);
        printGap(2*(n-i));
        printStar(i);
        std::cout << '\n';

    }

    // Printing the bottom half
    for (int i{}; i < n; i++){
        
        printStar(n-i);
        printGap(2*i);
        printStar(n-i);
        std::cout << '\n';

    }

}

void printGap(int num){

    for (int i{}; i<= num; i++){

        std::cout << "  ";

    }

}

void printStar(int num){

    for (int i{}; i<num; i++){

        std::cout << " " << "*";

    }

}
