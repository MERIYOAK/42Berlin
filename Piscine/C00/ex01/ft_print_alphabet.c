#include <unistd.h>

void ft_print_alphabet();

int main(){
	ft_print_alphabet();
	write(1, "\n", 1);
}

void ft_print_alphabet(){
	char c;
	c = 97;

	while(c <= 122){
		write(1, &c, 1);
		c++;
	}
}
