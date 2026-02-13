#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr){
	*nbr = 42;
}

int main(void){
	int x;
	int *p = &x;

	ft_ft(p);
	printf("value of x is: %d\n", x);
	printf("The adress is: %p\n", (void *) &x);
	printf("value of x is: %d\n", *p);
}
