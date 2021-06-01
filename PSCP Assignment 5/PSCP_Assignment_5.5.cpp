#include <iostream> 
#include <vector>

void freqCounter(int arr[], int n) 
{ 
    
    std::vector<bool> visited(n,false); 
  

    for (int i{}; i < n; i++) { 
  
        
        if (visited[i] == true){ 
            continue; 
        }
       
        int freqCount = 1;

        for (int j = i + 1; j < n; j++) { 
        
            if (arr[i] == arr[j]) { 
        
                visited[j] = true; 
                freqCount++; 
        
            } 
        
        } 
        
        std::cout << "Element " << arr[i] << " appears " << freqCount << " times.\n"; 
    
    } 


} 
  
int main() 
{ 
    int n{};

    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int arr[n]{};

    std::cout << "Enter the elements of the array: ";
    for(int i{}; i<n; i++){

        std::cin >> arr[i];

    }

    freqCounter(arr, n); 
    return 0; 
} 
