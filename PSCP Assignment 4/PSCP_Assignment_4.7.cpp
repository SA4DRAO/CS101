#include <iostream>
#include <cmath> // For sin, cos, pow and other functions.


float getDist(float x1,float x2, float y1,float y2){

    float dist = 3963 * acos(sin(x1) * sin(x2) + cos(x1) * cos(x2) * cos(y2 - y1));
    return dist;

}


int main(){
    
    float x1{};
    float x2{};

    float y1{};
    float y2{};


    std::cout<<"Enter the coordinates of the first point(x y): ";
    std::cin>>x1>>y1;

    std::cout<<"Enter the coordinates of the second point(x y): ";
    std::cin>>x2>>y2;

    std::cout<<"The distance between the given coordinates are - "<< getDist(x1,x2,y1,y2) << " Nautical Miles\n";
    return 0;


}