#include <iostream>

void printLetters (char num, int start);

int main(){

    int n{5}; // We can change this to print out the limit to any other value than 5 - E. Make sure your terminal is big enough to accomodate it.
    
    for (int i{0}; i < n; i++){

        printLetters('A' + i , n);

    }


}


void printLetters(char num, int start){

    
    while(num <= ('A'+ start-1)) {

        std::cout << num << " ";
        num++;

    }
    
    std::cout << "\n";
    

}