#include <iostream>


int printLine(int num);

int main(){

    int n{4};

    for (int i{1}; i<=n; i++){

        printLine(i);
        std::cout << "\n";

    }

    for (int i = n; i> 0; i--){

        printLine(i);
        std::cout << "\n";
    }



}


int printLine(int num){


    for (int i{}; i< num - 1; i++ ){

        std::cout << num << " * "; 

    }

    std::cout << num;

    return 0;
}