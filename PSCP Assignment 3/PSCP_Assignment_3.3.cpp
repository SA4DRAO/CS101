#include <iostream>

void printStar(int num); // To print the stars
void printGap(int num); // To print the gaps



int main(){

    int n{5}; // This value can be adjusted to whatever you like. Make sure your terminal is large enough to accomodate the changes
    
    
    for (int i{n}; i>0 ; i--){

        printGap(n-i);
        printStar(2*i - 1);
        std::cout << '\n';

    }


}

void printStar(int num){

    for (int i{}; i< num; i++){

        std::cout << " " <<"*";

    }

}

void printGap(int num){

    for (int i{}; i< num; i++){

        std::cout << "  ";

    }

}