#include <iostream>

/*
          1
        1 0 1
      2 1 0 1 2
    3 2 1 0 1 2 3
  4 3 2 1 0 1 2 3 4

    Was the question given.

    After asking during class, the teacher informed us that it was a flaw in the question, and that it was supposed to print out 

          0
        1 0 1
      2 1 0 1 2
    3 2 1 0 1 2 3
  4 3 2 1 0 1 2 3 4


    Necessary adjustments can be made to obtain the first output if needed.


*/


void printGap(int num); // Printing the gaps before the first number
void printNum(int num); // Printing the numbers


int main(){

    int n{5}; // We can change this value to whatever we like. Make sure your terminal is big enough to accomodate the changes
    
    for (int i{0}; i<n; i++){

        printGap(n-i);
        printNum(i);
        std::cout << "\n";        

    }

}

void printGap(int num){

    for (int i{}; i<= 2*num + 1  ; i++){

        std::cout << " ";
        
    }

}

void printNum(int num){

    for (int i{}; i<=num; i++){

        std::cout << num - i << " ";

    }

    for (int i{1}; i<=num; i++){

        std::cout << i << " ";

    }

}
