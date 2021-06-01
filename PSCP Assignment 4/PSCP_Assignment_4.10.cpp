#include <iostream> // Using <iostream> for console input and output
#include <cmath> // Using the <cmath> library for sqrt

float getArea(float a, float b, float c);
bool isTriangle(float a, float b, float c);


int main(){

    float a{}; // Initializing the variables to hold the 
    float b{}; // length of the sides of the triangle.
    float c{}; // Using floats for decimal number sides :) 

    std::cout << "Enter the 3 values for the sides: ";
    std::cin >> a >> b >> c;


    if (isTriangle(a,b,c) == true){

        std::cout << "The area of the triangle is: " << getArea(a,b,c)<< '\n'; 

    }

    else{

        std::cout << "The three numbers do not form a triangle\n";

    }

    return 0;

}


float getArea(float a, float b, float c){   // getArea() function which uses Heron's formula

    
    float s = (a + b + c) / 2;
    return sqrt(s*(s-a)*(s-b)*(s-c));


    

}

bool isTriangle(float a, float b, float c){ // isTriangle function checks whether the sum of any
                                            // 2 sides of a triangle is greater than the third side.
    if (a+b > c && a+c > b && b+c > a){

        return true;
    }
    
    else{

        return false;
    }

}