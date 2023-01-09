#include<stdio.h>    
#include<string.h>    
    
    
    
int main(void){        
    int b = 0;  
    double a = 0;    
    while(scanf("%lf", &a) != EOF){    
        if (b != 0){  
            printf("\n");  
        }  
    printf("%.1lf\n", a * a+0.05);  
        b++;  
    }    
    return 0;        
}
