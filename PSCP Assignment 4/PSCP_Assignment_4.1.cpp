#include<iostream>


int checks(int arr[], int n){

    int pos{};

    while ((arr[pos] < arr [pos+1]) && pos < n){

        pos++;

    }

    while ((arr[pos] == arr [pos+1]) && pos < n){

        pos++;

    }

    while ((arr[pos] > arr[pos+1]) && pos < n){

        pos++;

    }

    if (pos == n-1){

        return 1;

    }

    return 0;

}

int main(){
 
    int n{};
    std::cout << "Enter the number of elements in the array (The question asked for 20, please enter that :) ): ";
    std::cin >> n;

    int array[n]{};
    
    std::cout << "Enter the elements of the array: \n";

    for(int i{}; i<n; i++){   // Putting the values in the array
    
        std::cin>>array[i];     

    }

    if(checks(array,n)==1){
    
        std::cout<<"The array is Perfect.\n";
    
    }
   
    
    else{

        std::cout<<"The array is Imperfect.\n";
    
    }
 
    return 0;

}