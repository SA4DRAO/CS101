#include <iostream>



int getLargest(int arr[], int pos, int size){

    int max_value{};

    for (int i{}; i+pos<size; i++){
 
        max_value = std::max(max_value,arr[pos+i]);

    }

    return max_value;

}


int main(){


    int arr[]{7, 5, 8, 9, 6, 8, 5, 7, 4, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::cout << "The given array is: ";
    for (int i{}; i<n; i++){

        std::cout << arr[i] << " ";

    }
    std::cout << "\nThe modified array is: ";
    for(int i{}; i<n; i++){

        arr[i] = getLargest(arr,i,n);
        std::cout << arr[i] << " ";
    }

    std::cout << '\n';

}