#include<stdio.h>

int main(void){
	int	a;
	scanf("%d", &a);
	int sum = 0;
	for (int i = 1; i <= a; i++){
		if (i % 2 == 0 && i % 3 == 0 && i % 12 != 0){
			sum += i;
		}
	}
	printf("%d\n", sum);
	return 0;
}
