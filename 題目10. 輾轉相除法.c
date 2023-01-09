#include<stdio.h>      
#include<string.h>      
      
      
      
int main(void){          
        
    int a, b, tmp;    
    scanf("%d%d", &a, &b);    
    if (a < b){    
        tmp = a;    
        a = b;    
        b = tmp;    
    }    
    int max = 1;    
    for (int i = 1; i <= b; i++){    
        if (a % i == 0 && b % i == 0 && i > max){    
            max = i;    
        }    
    }    
    
    printf("%d\n", max);    
    return 0;          
} 
