#include <iostream>

int getParityCheck(int array[],int n){

    int count{};

    for(int i{}; i<n; i++){

        if (array[i] == 1){

            count++;

        }


    }

    return count%2 ^ 1;

}



int main(){

    int n{};
    std::cout << "Enter the size of the message: ";
    std::cin >> n;

    int arr[n]{};

    std::cout << "Enter the message (in 0 and 1s): ";

    for (int i{1}; i<=n; i++){

        int x{};
        std::cin >> x;

        if (x==1 || x==0){

            arr[i] = x;

        }

        else{

            std::cout << "Please enter a valid message!";
            return 1;

        }

    }

    int count = getParityCheck(arr,sizeof(arr)/sizeof(arr[0]));

    arr[0] = count;

    std::cout << "The encoded message is: ";
    for (int i{}; i<=n; i++){

        std::cout << arr[i] << " ";

    }


    std::cout << '\n';

}