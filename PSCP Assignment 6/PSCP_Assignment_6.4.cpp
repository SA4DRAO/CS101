#include <iostream>

int main(){

    std::cout << "Enter the size of the array: ";
    int n{};
    std::cin >> n;
    std::cout << "Enter the elements of the array: ";
    
    int arr[n]{}; 
    for(int i{}; i<n; i++){

        std::cin >> arr[i];

    }

  
                                                       

    for (int i{}; i<n; i++){

        if (i == 0){                            // Boundary condition for first index

            if (arr[i] > arr[i+1]){

                std::cout << "Peak found at index " << i << " having a value of " << arr[i] << '\n';
    
                

            }

        }

        else if (i == n-1){                          // Boundary condition for last index

            if (arr[i] > arr[i-1]){
                
                std::cout << "Peak found at index " << i << " having a value of " << arr[i] << '\n';


            }

        }


        if ((arr[i-1] < arr[i]) && arr[i] > arr[i+1]){          // Adds to the vector if it is a peak value

            std::cout << "Peak found at index " << i << " having a value of " << arr[i] << '\n';

        }

    }
    
    

    return 0;


}
