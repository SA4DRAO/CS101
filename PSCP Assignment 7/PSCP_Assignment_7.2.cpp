#include <iostream>

struct student{
    int rollno;
    char section;
    float marks;
};


struct avg_marks{
    char section;
    float avg;
};


int main(){
    
    int students = 2;
    int total_students = students*7;    // 7 Sections
    
    student array[students*7]{};
    char array_sections[7] = {'G', 'H', 'K', 'L', 'M', 'N', 'Q'}; // 7 Sections
    avg_marks section_array[7];
    
    float gl_avg;
    float sum{};
    
    for(int i{}; i<students*7; i++){
        
        std::cout << "Enter Student " << i+1 << "'s Roll Number: "; 
        std::cin >> array[i].rollno;
        
        
        std::cout << "Enter Student " << i+1 << "'s section: "; 
        std::cin >> array[i].section;
        
        std::cout << "Enter Student " << i+1 << "'s marks: "; 
        std::cin >> array[i].marks;
                
        sum += array[i].marks;
    }
    
    gl_avg = sum/total_students;
    

    for(int i{}; i<7; i++){
        
        section_array[i].section = array_sections[i];

    }

    for(int i{}; i<7; i++){
        float sum{}; 
        for(int j{}; j<students*7; j++){
            
            if(array[j].section == section_array[i].section){
                
                sum += array[j].marks;
            
            }
        }
   
        section_array[i].avg = sum/students;
   
    }
    
    std::cout<<"Average marks of each section is: \n";

    for(int i{}; i<7; i++){
 
        std::cout<<section_array[i].section<<": " << section_array[i].avg << '\n';
 
    }
 
    std::cout<<"The global average is: "<< gl_avg << '\n';
    

    
    return 0;

}