#include <iostream>

int getAbsolutedist(int num1, int num2){

    int n = num1-num2;

    if (n<0){

        return ~n;

    }

    return n;
}


void swap(int* ptr1, int*ptr2){

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}

int main(){

    int z{};
    
    std::cout << "Enter the size of the array: ";
    int n{};
    std::cin >> n;
    std::cout << "Enter the elements of the array: ";
    
    int arr[n]{}; 
    for(int i{}; i<n; i++){

        std::cin >> arr[i];

    }

    std::cout << "Enter the number from which distance is to be calculated: ";
    std::cin >> z;

    for(int i{}; i<n; i++){

        for(int j{}; j<n-i-1; j++){

            if(getAbsolutedist(arr[j],z) > getAbsolutedist(arr[j+1],z)){

                swap(&arr[j],&arr[j+1]);

            }

        }

    }
    std::cout << "The sorted array is: ";
    for(int i{}; i<n; i++){

        std::cout << arr[i] << " ";

    }
    std::cout << '\n';

}