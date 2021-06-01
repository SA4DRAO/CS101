#include <iostream>

int main()
{
	
    int son[5]{};
    int manager{};
    int daughters{};
    
    
    for(int y{1}; y<=10; y++){

        son[4] = 256 * y - 1;
        
        if(son[4] % 5 == 0){
      	    manager++;
            break;
        }
    }


    for(int i{3}; i >= 0; i--){
   	    
        son[i]=(5*son[i+1]+1)/4;
   	    manager++;
    
    }
    
    
    daughters=(4*son[4])/5;
    
   
    int total{};
    
    for(int i=0;i<=4;i++){
    
        total+=son[i];
    
    }
   
    total+=manager;
   
    for(int i=0;i<=4;i++){
      
      total+=daughters;
    
    }
    
    std::cout<<"The minimum number of coins the rich man had: "<<total<<'\n';
    
    for(int i=0;i<=4;i++){
   	    
        std::cout<<"Son no. "<<(i+1)<<" received: "<<son[i]<< " coins." <<'\n';
    
    }
   
    std::cout<<"The manager received: "<<manager<< " coins." << '\n';
    
    
    std::cout<<"Each daughter got: "<<daughters<< " coins."<<'\n';

  
    return 0;

}