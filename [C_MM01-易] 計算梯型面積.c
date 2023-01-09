#include<stdio.h>  
#include<string.h>  
  
  
  
int main(void){      
      
    float a, b, c;  
    scanf("%f%f%f", &a, &b, &c);  
    float ans = 0;  
    ans = (a + b) / 2 * c;  
    printf("Trapezoid area:%.1f\n", ans);  
    return 0;      
}
