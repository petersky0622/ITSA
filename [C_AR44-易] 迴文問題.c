#include<stdio.h>  
#include<string.h>  
  
  
  
int main(void){  
  
    char a[100];  
    scanf("%s", &a);  
    int len = strlen(a);  
    int d = 1;  
  
    for (int i = 0; i <= len / 2; i++){  
        if (a[i] != a[len - 1 - i]){  
            printf("NO\n");  
            d = 0;  
            break;  
        }  
    }  
  
    if (d) printf("YES\n");  
  
    return 0;  
}
