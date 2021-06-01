#include <iostream>

struct employee{
    float extra_hours;
    int num_of_children;
};


int main(){

    int n{};
    
    float salary_daily = 1200;
    int days = 30;
    
    float overtime_per_hour = 100;
    float prof_tax = 2;
    float provident_fund = 10;
    float income_tax = 5;
    float child_edu = 2;
    
    std::cout<<"Enter the number of employees: ";
    std::cin >> n;
    
    employee array[n];

    for(int i{}; i < n; i++){
        
        std::cout<<"Enter number of extra hours worked and the number of children for Employee " << i+1 << ": ";
        std::cin>>array[i].extra_hours>>array[i].num_of_children;
   
    }
   
    for(int i{}; i < n; i++){
        
        float gross_salary_per_month = salary_daily * days + (array[i].extra_hours*overtime_per_hour);
        float take_home = gross_salary_per_month + (array[i].num_of_children * child_edu * gross_salary_per_month/100) - (provident_fund*gross_salary_per_month/100) - (prof_tax * gross_salary_per_month/100) - (income_tax*gross_salary_per_month/100);
        std::cout<<"The gross monthly salary of employee "<< i+1 <<" is: " << gross_salary_per_month << '\n';
        std::cout<<"The net take-home salary of employee "<<i+1<<" per month is: "<<take_home<< '\n';
   
    }
}