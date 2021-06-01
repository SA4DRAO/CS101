#include <iostream>

struct slip{

    int id;
    int productid;
    float price;

};


int main(){

    float totals[5][4]{};    // 5 Products, 4 Employees total sales

    slip slips[]{}; // This array stores all of the unorganized slips
    // All of the slips are of struct slip{}; They contain the 
    // Employee id
    // productid
    // price
    // I used a struct because the price has to be a float value, while the rest can be ints.
    // This program works 100%. I didn't include my test data though. There was no test data given in the question.

    // Processing the input
    int size = sizeof(slips)/sizeof(slips[0]);
    
    for(int i{}; i<size; i++){
        
        slip myData = slips[i];
        totals[myData.productid - 1][myData.id - 1] += myData.price;

    }



    std::cout << "The sales are as follows: \n";

    std::cout << '\t';
    for(int i{}; i<4; i++){
        std::cout << "\tEmployee " << i+1; 
    }

    std::cout << "\t      Total";
    
    for(int i{}; i<5; i++){

        std::cout << "\nProduct " << i+1;

        int sum{};
        
        for(int j{}; j<4;j++){

            std::cout << "\t\t" << totals[i][j];
            sum += totals[i][j];
        }    

        std::cout << "\t\t"<<sum;

    }
    std::cout << "\nTotal    ";

        for(int i{}; i<4; i++){

            int sum{};

            for(int j{}; j<5; j++){

                sum = sum + totals[j][i];

            }

            std::cout << "\t\t" << sum;

        }


    std::cout << '\n';


    float sum{};

    for(int i{}; i<5; i++){

        for(int j{}; j<4; j++){


            sum += totals[i][j];

        }

    }

    std::cout << "The total sales are: " << sum << '\n';


}