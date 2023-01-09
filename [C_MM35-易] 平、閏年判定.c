#include<stdio.h>  
#include<string.h>  
  
  
  
int main(void){      
      
    int a;  
    scanf("%d", &a );  
    if ((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0)){  
        printf("Bissextile Year\n");  
    }  
    else{  
        printf("Common Year\n");  
    }  
    return 0;      
}
