#include <iostream>

void printArray(int arr[], int n){

    for (int i{}; i < n; i++){

        std::cout << arr[i] << " ";

    }

    std::cout << '\n';

}

void swap(int *num1, int *num2){

    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;

}

int binarySearch(int arr[],int start, int end, int element){

    if (end >= start){

        int mid = start + (end-start)/2;

        if (arr[mid] == element){

            return mid;

        }

        if (arr[mid] > element){

            return binarySearch(arr, start, mid -1, element);
        }

        if (arr[mid] < element){

            return binarySearch(arr, mid + 1, end, element);

        }


    }

    return -1;


}

void bubbleSort(int arr[], int n){


    for (int i{}; i < n-1; i++){
      
        for (int j{}; j < n-i-1; j++){
      
            if (arr[j] > arr[j+1]){  

                swap(&arr[j], &arr[j+1]);

            }


        }

    }


}


int main(){

    int arr[] = {4, 9 , 2, 7 , 8 , 6, 5 , 10};          // The question didn't specify an input, so I just added one randomly
    int n = sizeof(arr)/sizeof(arr[0]);                 


    bubbleSort(arr, n); // Sorts the array
    
    std::cout << "The sorted array is: ";
    printArray(arr,n);

    int res = binarySearch(arr, 0, n-1, 5);
    
        if (res != -1){
        
            std::cout << "The number 5 is located at index: " << res << '\n';
        
        }

        else if (res == -1){

            std::cout << "Number does not exist in the array\n";

        }

    return 0;

}