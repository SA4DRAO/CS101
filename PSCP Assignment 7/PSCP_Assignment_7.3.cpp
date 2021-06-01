#include <iostream>

struct student{
    
    int number;
    std::string name;
    float marks;
    std::string branch;

};

int main(){


    int students{3};    // Modify this value. The question asked for 60, but I've reduced it to 3 just to make it simpler to test.
    

    student array[students];
    student* ptr_array = array;
    
    for(int i{}; i<students; i++){
    
        std::cout << "Enter the Roll Number of student " << i+1 << ": ";
        std::cin>>(ptr_array+i) -> number;
    
        std::cout << "Enter the name of student " << i+1 << ": ";
        std::cin>>(ptr_array+i) -> name;
    
        std::cout << "Enter the marks of student " << i+1 << ": ";
        std::cin>>(ptr_array+i) -> marks;
    
        std::cout << "Enter the branch of student " << i+1 << " (Ex: CSE, ECE etc.): ";
        std::cin>>(ptr_array+i) -> branch;
    
    }
    
    for(int i{}; i<students; i++){
        
        if((ptr_array+i) -> name == "Aditya" && (ptr_array+i) -> branch == "CSE" && (ptr_array+i) -> marks>60){
        
            std::cout<<(ptr_array+i)->name<< " got " << (ptr_array+i)->marks << '\n' ;
        
        }
    
    }


    return 0;


}