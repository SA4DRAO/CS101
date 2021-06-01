#include <iostream>

/*

    I tried to make the spacing nicer. In hindsight, I could've probably tried counting the number of digits per line and adjust the spacing accordingly,
    but I wasn't sure whether or not it was even necessary to do that, as long as the logic is correct.

*/


void printGap(int num); // To print the gaps before the first number in each line 
void printNum(int num, int count); // To print the numbers in each line 


int main(){

    int n{5};
    int count{1};
    
    for (int i{1}; i<=n; i++){
        
        printGap(n-i);
        printNum(count, i);
        
        count = count + (2*i - 1);
        std::cout << '\n';

    }

}

void printGap(int num){

    for(int i{}; i <= num ; i++){

        std::cout << "   ";

    }

}

void printNum(int num, int count){

    int m = 2*count -1; // Each line starts with a value of m^2
    for (int i{}; i < m ; i++){

        std::cout << (num+i)*(num+i) << " ";
        

    }


}