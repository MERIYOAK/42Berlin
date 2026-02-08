#include <unistd.h>

void ft_print_numbers();

int main(){
	ft_print_numbers();
	write(1, "\n", 1);
}

void ft_print_numbers(){
	
	for(int i = 48; i <= 57; i++){
		write(1, &i, 1);
	}
}
