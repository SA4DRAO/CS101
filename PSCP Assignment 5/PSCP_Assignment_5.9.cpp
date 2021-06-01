#include <iostream>
#include <vector>
// The approach I have in mind is to
// 1. Generate the sequence. Store them in the fraction.numerator() and fraction.denominator()
// 2. Check if fraction.numerator() and fraction.denominator() form a fraction in its lowest form
// 3. If they do, then add them to an array.
// 4. Sort that array based on float division of f.numerator/f.denominator
// 5. Print out the result


class fraction{

    public:
        float numerator;
        float denominator;

};

int gcd(int a, int b);
bool isReduced(fraction f);
void sortArr(std::vector<fraction> &array);
float decimalVal(float num, float den);

int main(){

    int k{};
    std::cout << "Enter the order of the series: ";
    std::cin >> k;

    std::vector<fraction> unsortedSeries = {};
    int j{};
    int gcdcount{};                 // This will contain the number of terms in the array.

    for(int den{}; den<=k ; den++){

        for(int num{1}; num < den; num++){

            fraction tempFract;
            tempFract.numerator = num;
            tempFract.denominator = den;

            

            if(isReduced(tempFract)){

                gcdcount++;
                unsortedSeries.push_back(tempFract);
            }
        
        }


    }

    
    sortArr(unsortedSeries);

    std::cout << 0 << "/" << k << ", ";
    for(int i{}; i<gcdcount; i++){

        std::cout << unsortedSeries[i].numerator << "/" << unsortedSeries[i].denominator << ", ";

    }
    std::cout << 1 << "/" << 1 << '\n';


    return 0;

}


bool isReduced(fraction f){

    if (gcd(f.numerator,f.denominator) == 1){

        return true;

    }

    return false;

}

int gcd(int a, int b){

    if (b == 0){
    
        return a;
    
    }

    return gcd(b, a % b); 
     
}


float decimalVal(float num, float den){

    return num/den;

}


void sortArr(std::vector<fraction> &array){

    int n = array.capacity();
   
    for (int i{}; i < n-1; i++){
    
        for (int j{}; j < n-i-1; j++){  
            
            if (decimalVal(array[j].numerator,array[j].denominator) > decimalVal(array[j+1].numerator,array[j+1].denominator)){  
                
                fraction temp;
                temp.numerator = array[j].numerator;
                temp.denominator = array[j].denominator;

                array[j].numerator = array[j+1].numerator;
                array[j].denominator = array[j+1].denominator;

                array[j+1].numerator = temp.numerator;
                array[j+1].denominator = temp.denominator;

            }
        }
    }

}