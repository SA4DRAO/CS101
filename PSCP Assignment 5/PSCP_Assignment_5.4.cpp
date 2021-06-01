#include <iostream>
#include <vector>
#include <algorithm>


bool isInArray(std::vector<int> uniqueArr, int n){

    std::sort(uniqueArr.begin(),uniqueArr.end()); // Sort the array for binary_search
    
    if (std::binary_search(uniqueArr.begin(),uniqueArr.end(),n)){     

        return true;    // Return true if the element is in the array already.

    }

    return false;        // Return false if the element is not in the array.

}


int main(){


    std::vector<int> uniqueElements = {};
    
    int n{};
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::cout << "Enter the elements of the array: ";
    int arr[n]{};

    for (int z{}; z<n; z++){

        std::cin >> arr[z];
        
        if(~isInArray(uniqueElements,z)){

            uniqueElements.push_back(arr[z]);

        }

    }

    std::sort(uniqueElements.begin(),uniqueElements.end());
    
    std::cout << "Enter the value of i: ";
    int i{};
    if(i>n){

        std::cout << "Enter a proper value of i!";
        return 0;

    }
    std::cin >> i;

    std::cout << "Enter the value of j: ";
    int j{};
     if(j>n){

        std::cout << "Enter a proper value of i!";
        return 0;

    }
    std::cin >> j;


    std::cout << "The ith largest number is: " << arr[n-i-1] << '\n';
    std::cout << "The jth smallest number is: " << arr[j-1] << '\n';



    return 0;

}