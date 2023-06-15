#include <stdio.h>  
   
main() 
{  
    int counter; 
    printf("even numbers between 50 to 70\n");  
  
    for(counter = 50; counter <= 70; counter++)
    {  
        
        if(counter%2 == 0) 
		{ 
            
            printf("%d ", counter);  
        }  
    }
    for(counter = 50; counter <= 70; counter++)
    {  
        
        if(counter%2 == 1) 
		{ 
            
            printf("%d ", counter);  
        }  
    }
	
} 
