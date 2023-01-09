#include<stdio.h>  
  
  
int max(int a){  
  
}  
  
int main(void){  
  
    int height = 0, test = 0;  
    while (scanf("%d%d", &height, &test) != EOF){  
        float weight = 0;  
        if (test == 1){  
            weight = (height - 80) * 0.7;  
        }  
        else{  
            weight = (height - 70) * 0.6;  
        }  
  
        printf("%.1f\n", weight);  
    }  
  
    return 0;  
} 
