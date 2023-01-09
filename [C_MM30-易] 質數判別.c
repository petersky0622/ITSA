#include<stdio.h>  
  
int main(void){  
    int a;  
    scanf("%d", &a);  
    int max = 1;  
    for (int i = 1; i < a; i++){  
        if (a % i == 0 && i > max) max = i;  
    }  
  
    if (max == 1){  
        printf("YES\n");  
    }  
    else{  
        printf("NO\n");  
    }  
  
    return 0;  
} 
