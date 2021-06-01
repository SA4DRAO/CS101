#include <iostream>

int element_picker(int array_1[], int array_2[], int number, int length_1, int length_2);

int main(){

    int len1{};
    int len2{};

    std::cout<<"Enter the number of elements in array 1: ";
    std::cin>>len1;
    std::cout<<"Enter the number of elements in array 2";
    std::cin>>len2;



    int arr1[len1]{};
    int arr2[len2]{};
    
    
    std::cout<<"Enter the elements of the first array: ";
    
    for(int i{}; i < len1; i++){
       
        std::cin>>arr1[i];
    
    }
    
    
    std::cout<<"Enter the elements of the second array: ";
    
    for(int i{}; i < len2; i++){

        std::cin>>arr2[i];
    
    }
    
    int finalArray[len1+len2]{};
    
    for(int i=0; i<len1+len2; i++){
    
        finalArray[i] = element_picker(arr1, arr2, i, len1, len2);
    
    }
    
    std::cout << "The final array is: ";
    
    for(int i=0; i<len1+len2; i++){
    
        std::cout<<finalArray[i]<<" ";
    
    }

    std::cout << '\n';

    return 0;

}



int element_picker(int arr1[], int arr2[], int number, int len1, int len2){
    
    if(len1<=len2){
    
        if(number < 2*len1){
    
            if(number%2 == 0){
                return arr1[number/2];
            }
            else{
                return arr2[(number-1)/2];
            }
        }
        else{
            return arr2[(number-len1)];
        }
    }

    else{
        
        if(number < 2*len2){
            
            if(number % 2 == 0){
            
                return arr1[number/2];
            
            }
            
            else{
            
                return arr2[(number-1)/2];
            
            }
        }
   
        else{
   
            return arr1[(number-len2)];
   
        }
   
    }

}