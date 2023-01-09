#include<stdio.h>

int main(void){
	int x, y;
	scanf("%d%d", &x, &y);
	if (x > 100 || y >100){
		printf("outside\n");
	}
	else{
		printf("inside\n");
	}
	return 0;
}
