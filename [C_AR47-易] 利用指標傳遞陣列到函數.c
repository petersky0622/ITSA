#include<stdio.h>    
    
    
int main(void){    
    
    int a[105];    
    char b;    
    int alen = 0;    
    while(scanf("%d", &a[alen]) != EOF){    
        alen++;    
    }    
    
    printf("%d", a[alen - 1]);    
    for (int i = alen - 2; i >= 0; i--){    
        printf(" %d", a[i]);    
    }    
    
    printf("\n");    
    return 0;    
}
