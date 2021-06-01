#include <iostream>
#include <cmath>


struct BankDep{
    
    float bankdeposit;
    int tenure;

};

struct Dates{
    int date;
    int month;
    int year;
} dob,deposits;

int main(void){

    Dates* ptr_dob;
    ptr_dob = &dob;

    Dates* ptr_deposits;
    ptr_deposits = &deposits;

    BankDep first_dep;
    BankDep* ptr_first_dep;
    ptr_first_dep = &first_dep;

    std::cout<<"Enter date of birth in form of (DD MM YYYY): ";
    std::cin>>ptr_dob -> date>>ptr_dob -> month>>ptr_dob -> year;

    std::cout<<"Enter the date of deposit in form of (DD MM YYYY): ";
    std::cin>>ptr_deposits -> date>>ptr_deposits -> month>>ptr_deposits -> year;

    std::cout<<"Enter the deposit in the bank: ";
    std::cin>>ptr_first_dep -> bankdeposit;
    
    std::cout<<"Enter the tenure: ";
    std::cin>>ptr_first_dep -> tenure;

    float interest_rate{};

    if(ptr_deposits -> year - ptr_dob -> year > 60){
        
        interest_rate = 9;
    
    }
    
    else if(ptr_deposits -> year - ptr_dob -> year == 60){
        
        if(ptr_deposits -> month > ptr_dob -> month)
            interest_rate = 9;
        
        else if(ptr_deposits -> month < ptr_dob -> month)
            interest_rate = 8;
        
        else{
        
            if(ptr_deposits -> date > ptr_dob -> date)
                interest_rate = 9;
        
            else if(ptr_deposits -> date < ptr_dob -> date)
                interest_rate = 8;
        
            else
                interest_rate = 9;
        }

    }
    
    else{
        
        interest_rate = 8;
    
    }

    double amount = (ptr_first_dep -> bankdeposit) * pow( 1+(interest_rate/100), ptr_first_dep -> tenure);
    std::cout <<"The total amount is: " << amount << '\n';
    return 0;

}