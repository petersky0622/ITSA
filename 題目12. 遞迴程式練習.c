#include<stdio.h>  
  
int f(int n){  
    if (n == 1 || n == 0){  
        return n + 1;  
    }  
    else{  
        return f(n - 1) + f(n / 2);  
    }  
}  
  
int main(void){  
  
    int a = 0;  
    scanf("%d", &a);  
    a = f(a);  
    printf("%d\n", a);  
  
  
    return 0;  
}
