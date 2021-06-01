#include <iostream>
#include <vector>
#include <algorithm>  




int isInArray(std::vector<int> numCounter, int n){

    std::sort(numCounter.begin(),numCounter.end()); // Sort the array for binary_search
    
    if (std::binary_search(numCounter.begin(),numCounter.end(),n)){     

        return 1;    // Return 1 if the element is in the array already.

    }

    return 0;        // Return 0 if the element is not in the array.

}


int main(){

    int n1{};
    int n2{};
    int arrSize{};

    std::cout << "Enter the number of elements you are entering: ";
    std::cin >> arrSize;
    
    int max_number{};
    int freqCounter{};
    std::vector<int> numCounter{};


    std::cout << "Enter the sequence of numbers: ";

    while (n2 <= arrSize){

        std::cin >> n1;
        
        if (n1 > max_number){   // Reset the frequency counter if the number entered
                                // is larger than the old max_number
            freqCounter = 0;
            max_number = n1;

        }




        if ((isInArray(numCounter,n1) == 0) ){ // Add element to the array of numbers
                                               // if it isn't present 
            numCounter.push_back(n1);

        }

        if ((isInArray(numCounter,n1) == 1) && n1 == max_number ){ // Add +1 to the frequency counter
                                                                   // if element is already present 
            freqCounter++;

        }

        n2++;

    }



    std::cout << "The largest number was " << max_number << " and it appeared " << freqCounter << " times.\n";

    std::cout << "The numbers read were: ";

    for (int i{}; i<=numCounter.size()-1 ; i++){

        std::cout << numCounter[i] << " ";

    }
    std::cout << '\n';

}