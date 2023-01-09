#include<stdio.h>  
  
int main(void){  
    int a = 0;  
    scanf("%d", &a);  
    int sum = 0;  
    for (int i = 1; i <= a; i++){  
        if (i % 3 == 0){  
            sum += i;  
        }  
    }  
    printf("%d\n", sum);  
    return 0;  
}
