#include <iostream>

void printGap(int num); // To print the gaps
void printStar(int num); // To print the stars

int main(){

    int n{6}; // This value can be adjusted to whatever you like. Make sure your terminal is large enough to accomodate the changes
    
    for (int i{1}; i<n; i++){

        printStar(n-i);
        printGap(i);
        printStar(n-i);
        std::cout << '\n';

    }

    for (int i{1}; i<n; i++){

        printStar(i);
        printGap(n-i);
        printStar(i);
        std::cout << '\n';

    }


}

void printStar(int num){

    for (int i{}; i< num; i++){

        std::cout << " " <<"*";

    }


}

void printGap(int num){

    for (int i{}; i < 2*num-1; i++){

        std::cout << "  ";


    }

}
