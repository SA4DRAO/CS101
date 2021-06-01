#include <iostream>

// I included a test case to demonstrate that it works. You can easily modify the test data in any way you see fit.

int getMinimax(int matrix[4][4], int n);
int getMaximin(int matrix[4][4], int n);

int main(){

    int n{4};
    int matrix[4][4]{{3,2,1,0},{0,1,2,0},{1,0,2,1},{3,1,2,2}};
    std::cout << "The given array is: \n";
    for(int i{}; i<n; i++){

        for(int j{}; j<n; j++){

            std::cout << matrix[i][j] << ' ';

        }
        std::cout << '\n';

    }

    std::cout << "The Maximin is: " << getMaximin(matrix,n) << '\n';
    std::cout << "The Minimax is: " << getMinimax(matrix,n) << '\n';

}


int getMinimax(int matrix[4][4],int n){

    int max[n]{};
    
    for(int i{}; i<n; i++){
        
        
        for(int j{}; j<n; j++){

            if(matrix[j][i] > max[i]){

                max[i] = matrix[j][i];

            }
    
        }
    
    }


    int temp = max[0];
 


    for (int i{1}; i < n; i++){      
    
        if (max[i] < temp){
    
            temp = max[i];
    
        }
   
    }

    return temp;

}

int getMaximin(int matrix[4][4], int n){

    int max[n]{};

    for(int i{}; i<n; i++){
        
        max[i]= INT8_MAX;   // I could've ditched this, which would've required rewriting the getMaximin() function.
                            // I wanted to keep getMaximin() as close to getMinimax() as possible so that it's easier
                            // for people to understand the logic.

        for(int j{}; j<n; j++){

            if(matrix[i][j]<max[i]){

                max[i] = matrix[i][j];

            }


        }


    }

    int temp = max[0];
  
    for (int i{1}; i < n; i++)
        if (max[i] > temp)
            temp = max[i];
 
    return temp;

}
