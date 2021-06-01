#include <iostream>

void printGap(int gap); // This function prints out gaps 
void printMid(int num); // This function prints the rows between
void printTopBottom(int top); // This function prints the top and bottom rows


int main(){

    int n{5}; // We can start this off with any value, and it should draw a square. Make sure your terminal is big enough to accomodate it.
    
    printTopBottom(n);

    for (int y{2}; y < n; y++){

        printMid(n);

    }
    
    std::cout << "\n";
    
    printTopBottom(n);
    
    std::cout << '\n';

}


void printMid(int num){
    
    std::cout << "\n";
    std::cout << "1 ";
    printGap(num + num - 4);
    std::cout << "1 ";

}

void printGap(int gap){

    for (int i{}; i < gap; i++){

        std::cout << " ";

    }

}

void printTopBottom(int top){

    for (int i{}; i < top; i++){

        std::cout << "1 ";

    }

}