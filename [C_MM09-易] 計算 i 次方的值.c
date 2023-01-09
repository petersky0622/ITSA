#include<stdio.h>  
#include<string.h>  
  
  
  
int main(void){      
      
    int a;  
    scanf("%d", &a );  
    if (a <= 31){  
        printf("%d\n", 2 << (a - 1));  
    }  
    else{  
        printf("Value of more than 31\n");  
    }  
    return 0;      
}
