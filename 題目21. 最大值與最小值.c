#include<stdio.h>  
  
  
  
int main(void){  
  
    float a[10] = {0};  
    for (int i = 0; i < 10; i++){  
        scanf("%f", &a[i]);  
    }  
  
    float max = a[0];  
  
    for (int i = 0; i < 10; i++){  
        if (a[i] > max){  
            max = a[i];  
        }  
    }  
  
    float min = a[0];  
  
    for (int i = 0; i < 10; i++){  
        if (a[i] < min){  
            min = a[i];  
        }  
    }  
  
    printf("maximum:%.2f\n", max);  
    printf("minimum:%.2f\n", min);  
  
    return 0;  
}
