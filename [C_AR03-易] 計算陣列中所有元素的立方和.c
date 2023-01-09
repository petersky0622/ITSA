#include<stdio.h>  
  
  
int main(void){  
  
    int a[105];  
    char b;  
    int alen = 0;  
    while(scanf("%d", &a[alen]) != EOF){  
        alen++;  
    }  
    int ans = 0;  
    for (int i = 0; i < 6; i++){  
        ans += a[i] * a[i] * a[i];  
    }  
    printf("%d\n", ans);  
    return 0;  
}
