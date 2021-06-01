#include <iostream>
#include <vector>

int getMaxSubArray(int n1, int n2){

    std::cout << "Enter the numbers (-1 to end the sequence): ";
    
    int count{};
    int max{};

    while (n2 != -1){

        std::cin >> n2;

        if (n2 == -1){

            break;

        }

        if (n1 > n2){

            if (count >= max){

                max = count;

            }

            count = 0;
            
            n1 = n2;

        }

        if (n1 <= n2){

            count++;
            n1 = n2;

        }

    }


    return max;


}


int main(){

    int n{};
    
    int maxSubArray = getMaxSubArray(0,0);
    
    std::cout << "The largest subarray has " << maxSubArray << " elements.\n";


}