#include <iostream>


int main(){
    
    int count{};
    int m{6};   //Number of rows
    int n{6};   //Number of columns

    int matrix[m][n]{{8,0,0,0,0,0},{0,2,0,0,3,0},{0,0,0,0,0,0},{5,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0}}; // Sample data in question

    std::cout << "The non-zero elements are: \n";

    for(int i{}; i<m; i++){

        for(int j{}; j<n; j++){

            if(matrix[i][j] != 0){

                std::cout << '<' << i << ',' << j << ',' << matrix[i][j] << '>' << '\n';
                count++;
            }
        }
    }
    
    if (count >= m*n/2 ){

        std::cout << "The matrix is not sparse.\n";
        return 0;

    }

    std::cout << "The matrix is sparse.\n";
    return 0;

}