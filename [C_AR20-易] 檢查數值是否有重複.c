#include<stdio.h>  
#include<string.h>  
  
  
  
int main(void){      
      
    int a = 0;  
    int num[150];  
    int visit[150] = {0};  
    int b = 1;  
    scanf("%d", &a);  
    for (int i = 0; i < a; i++){  
        scanf("%d", &num[i]);  
        visit[num[i]]++;  
        if (visit[num[i]] > 1) {  
            printf("0\n");  
            b = 0;  
        }  
    }  
  
    if (b){  
        printf("1\n");  
    }  
  
  
  
    return 0;      
}
