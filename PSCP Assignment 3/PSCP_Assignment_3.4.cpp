#include <iostream>

void printGap(int num); // Printing out the gaps
void printNum (int num, int lim); // Printing the numbers

int main(){


    int n{6}; // This number can be adjusted to print out whatever value you like. Make sure your terminal is big enough to accomodate the changes.
    
    for (int i{1}; i< n; i++){

        int m = 2*i - 1;
        printGap(n-i);
        printNum(m,i);
        std::cout << '\n';

    }



}

void printGap(int num){

    for(int i{}; i < num; i++){

        std::cout << "  ";

    }


}


void printNum(int num, int lim){

    for(int i = lim; i <= num; i++){

        std::cout << " " << i ;

    }

    for (int i = num; i > lim; i--){

        std::cout << " " << i-1 ;

    }


}