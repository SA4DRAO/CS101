#include <iostream>
#include <vector>



int main(){

    std::cout << "Enter the size of the array: ";
    int n{};
    std::cin >> n;
    std::cout << "Enter the elements of the array: ";
    
    int arr[n]{}; 
    for(int i{}; i<n; i++){

        std::cin >> arr[i];

    }

    
                                           // The given array
    std::vector<int> finArr = {};                        // I'm storing the peak values in this.


    for (int i{}; i<n; i++){

        if (i == 0){                            // Boundary condition for first index

            if (arr[i] > arr[i+1]){

                std::cout << "Peak found at index : " << i << '\n';
                finArr.push_back(arr[i]);
                continue;

            }

        }

        if (i == n-1){                          // Boundary condition for last index

            if (arr[i] > arr[i-1]){
                
                std::cout << "Peak found at index : " << i << '\n';
                finArr.push_back(arr[i]);
                continue;

            }

        }


        if ((arr[i-1] < arr[i]) && arr[i] > arr[i+1]){          // Adds to the vector if it is a peak value

            std::cout << "Peak found at index " << i << " having a value of " << arr[i] << '\n';
            finArr.push_back(arr[i]);

        }

    }
    

    if (finArr.capacity() != 0){


        std::cout << "The array of peak value numbers is: ";
        for (int i{}; i<finArr.capacity(); i++){

            std::cout << finArr[i] << " ";

        }

    }

    else if (finArr.capacity() == 0){

        std::cout << "No peak values were found!";

    }

    std::cout << '\n';

    return 0;


}
