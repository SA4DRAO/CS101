#include <iostream>


void getType(float a, float b, float c);

int main(){

    float a{};
    float b{};
    float c{};

    std::cout << "Enter the 3 angles of the triangle\n";
    std::cin >> a >> b >> c;

    if ((a + b + c) == 180){
        getType(a,b,c);
    }

    else{

        std::cout << "Please enter valid values to form a triangle!\n";
    }

    return 0;
}


void getType(float a, float b, float c){

    if ( (a==b || b ==c || c==a) && (a!=b || b!=c || c!=a)){

        std::cout << "The triangle is isosceles.\n"; // I could've added another condition to check if it
                                                     // was right triangle also, but I think the current way   
    }                                                // works well and looks fine :)

    if ((a==b && b==c) && c==a){

        std::cout << "The triangle is equilateral.\n";


    }

    if (a==90 || b==90 || c==90){

        std::cout << "The triangle is right angled.\n";

    }

    if (((a!=b && b!=c) && c!=a) && ((a!=90 && b!=90) && c!=90)){

        std::cout << "The triangle is scalene.\n";

    }

}