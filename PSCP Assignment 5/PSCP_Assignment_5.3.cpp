#include <iostream>



int main(){

    int arr[5];

    std::cout << "Enter the second number: ";
    std::cin >> arr[1];

    arr[0] = 2*arr[1] - 1; 
    arr[2] = 10 - arr[1];
    arr[3] = arr[1]+ 1; 
    arr[4] = arr[1]+ 4;

    if( arr[0]+arr[1]+arr[2]+arr[3]+arr[4] == 30 && arr[1]+arr[2] == 10 && arr[4]+arr[2] == 14 ){

        std::cout << "The keycode is: ";
        for(int i{}; i<5; i++){

            std::cout << arr[i] << " ";

        }
        std::cout << '\n';
        return 0;
    }

    std::cout << "The second number is incorrect!\n";

}