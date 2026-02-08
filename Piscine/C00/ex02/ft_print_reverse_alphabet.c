#include <unistd.h>

void ft_print_reverse_alphabet();

int main(){
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
}

void ft_print_reverse_alphabet(){
	char c;
	c = 122;

	while(c >= 97){
		write(1, &c, 1);
		c--;
	}
}
