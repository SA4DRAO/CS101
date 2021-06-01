#include <iostream>
#include <cmath>

struct point{

    float x;
    float y;

} point1,point2;


int main(){


    point* p1 = &point1;
    point* p2 = &point2;

    std::cout << "Enter the coordinates of Point 1: (x,y) ";
    std::cin >> (p1->x) >> (p1->y);
    std::cout << "Enter the coordinates of Point 2: (x,y) ";
    std::cin >> p2->x >> p2->y;
   

    float dist = sqrt(pow(p1->x - p2->x,2) + pow(p1->y - p2->y , 2));


    std::cout << "The distance between the points is: " << dist << '\n';

}

