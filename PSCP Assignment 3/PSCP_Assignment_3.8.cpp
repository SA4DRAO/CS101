#include <iostream>

void printLine(int num); // This function prints out each individual row.

int main(){

    for(int i{1}; i<=10; i++){

        printLine(i);

    }

}


void printLine(int num){

    for (int i{1}; i<=num; i++){

        std::cout << i*num << " ";

    }

    std::cout << '\n';
    
}