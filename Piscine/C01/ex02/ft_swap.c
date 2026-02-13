#include <stdio.h>

void ft_swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int a = 1;
	int b = 2;
	
	int *p = &a;
	int *q = &b;

	ft_swap(p, q);
	printf("the value of a is: %d\n", *p);
	printf("the value of b is: %d\n", b);
}
