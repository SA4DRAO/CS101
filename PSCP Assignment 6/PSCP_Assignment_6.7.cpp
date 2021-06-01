#include <iostream>


int factorial(int num);
void addToMatrix(int* matrix,int rows);


int main(){


    
    int rows{};    //Edit this value to get the lower triangular matrix with pascal's triangle of any size
    std::cout << "Enter the number of rows of the Pascal Matrix: ";
    std::cin >> rows;


    int matrix[rows][rows+1]{};

    addToMatrix(*matrix,rows);
    

    // Printing out the matrix
    for(int i{}; i<rows; i++){

        for(int j{}; j<rows; j++){

            std::cout << matrix[i][j] << ' ';


        }

        std::cout << '\n';
    }


}



int factorial(int num){
    int product{1};
    for(int y{};y < num; y++){

        product = product*(num-y);

    }
    return product;

}

void addToMatrix(int* matrix,int rows){         // The function which adds the numbers to the matrix
                                                // I passed the matrix as a pointer to modify the original value itself.

    for(int i{}; i<rows; i++){
    

        for (int k{}; k <= i ; k++){

            *((matrix+i*rows)+ k+i) = factorial(i)/(factorial(k)*factorial(i-k));
            
        }

    }



}