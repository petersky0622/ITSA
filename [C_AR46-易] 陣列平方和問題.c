#include<stdio.h>  
#include<string.h>  
  
  
  
int main(void){      
      
    double a[105];      
    char b;      
    int alen = 0;      
    while(scanf("%lf", &a[alen]) != EOF){      
        alen++;      
    }      
    double ans = 0;      
    for (int i = 0; i < 6; i++){      
        ans += a[i] * a[i];      
    }      
    printf("%.6f\n", ans);      
    return 0;      
}
