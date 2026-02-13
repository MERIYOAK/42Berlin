#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *********nbr){
	*********nbr = 42;
}

int main(){
	int x;
	int *nbr1 = &x;
	int **nbr2 = &nbr1;
	int ***nbr3 = &nbr2;
	int ****nbr4 = &nbr3;
	int *****nbr5 = &nbr4;
	int ******nbr6 = &nbr5;
	int *******nbr7 = &nbr6;
	int ********nbr8 = &nbr7;
	int *********nbr9 = &nbr8;

	ft_ultimate_ft(nbr9);
	printf("the value of x is: %d\n", x);
	printf("The value of first adress1 is: %p\n", (void *) &nbr1);
	printf("The value of first adress2 is: %p\n", (void *) &nbr2);
	printf("The value of first adress3 is: %p\n", (void *) &nbr3);
	printf("The value of first adress4 is: %p\n", (void *) &nbr4);
	printf("The value of first adress5 is: %p\n", (void *) &nbr5);
	printf("The value of first adress6 is: %p\n", (void *) &nbr6);
	printf("The value of first adress7 is: %p\n", (void *) &nbr7);
	printf("The value of first adress8 is: %p\n", (void *) &nbr8);
	printf("The value of first adress9 is: %p\n", (void *) &nbr9);
}

