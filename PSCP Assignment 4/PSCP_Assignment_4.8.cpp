#include <iostream>
#include <vector>
void arrShift(int arr[], int n, int k){

    for (int i{}; i<k; i++){

        int temp = arr[n-1];
        
        for (int j{n-1}; j>=1; j--){

            arr[j] = arr[j-1];

        }

        arr[0] = temp;

    }

}


int main(){

    
    int n{};
    int k{};

    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    std::cout << "Enter the cycling factor: ";
    std::cin >> k;

    int arr[n]{};

    std::cout << "Enter the numbers in the array: ";
    
    for (int i{}; i<n; i++){

        std::cin >> arr[i];

    }

    arrShift(arr, n, k);

    std::cout << "The new array is: ";

    for (int i{}; i<n; i++){

        std::cout << arr[i] << " ";

    }

    std::cout << '\n';
    return 0;

}