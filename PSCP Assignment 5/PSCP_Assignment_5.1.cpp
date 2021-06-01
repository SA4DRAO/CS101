#include <iostream>


int main(){
    
    int n{};
    std::cout << "Enter the number of elements of the array: ";
    std::cin >> n;
    int arr[n]{};

    std::cout << "Enter the elements of the array: ";
    
    for(int i{}; i<n; i++){

        std::cin >> arr[i];

    }

    int k{};
    int count{};
    std::cout << "Enter the divisibility factor: ";
    std::cin >> k;
    std::cout << "The pairs whose sum is divisible by " << k << " are: ";
    for(int i{}; i<n; i++){

        for(int j{i+1}; j < n ; j++){


            if((arr[i] + arr[j]) % k == 0){

                std::cout << "{" << arr[i] << "," << arr[j] << "} ";
                count++;
            }


        }



    }
    std::cout << "\nThe total number of pairs are " << count << ".";
    std::cout << '\n';
    return 0;


}