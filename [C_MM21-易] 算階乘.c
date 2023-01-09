#include<stdio.h>  
  
int main(void){  
    long long int a;  
    while(scanf("%lld", &a) != EOF){  
    long long int ans = 1;  
  
    while(a){  
        ans *= a;  
        a--;  
    }  
      
    printf("%lld\n", ans);  
    }  
  
    return 0;  
} 
