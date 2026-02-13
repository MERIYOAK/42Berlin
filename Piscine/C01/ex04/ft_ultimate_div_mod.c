#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b){
	int temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

int main(){
	int x = 9;
	int y = 2;
	int *a = &x;
	int *b = &y;
	
	ft_ultimate_div_mod(a, b);
	printf("the division result is: %d\n", *a);
	printf("the remainder is: %d\n", *b);
}
