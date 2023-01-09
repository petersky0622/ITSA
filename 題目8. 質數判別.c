#include<stdio.h>  
  
  
int main(void){  
  
    int a = 0;  
    scanf("%d", &a);  
    for (int i = 1; i <= a / 2; i++){  
        if (a % i == 0 && i != a && i != 1){  
            printf("NO\n");  
            break;  
        }  
  
        if (i == a / 2){  
            printf("YES\n");  
        }  
  
    }  
  
    return 0;  
}
