#include <unistd.h>

void ft_putchar(char c);

int main(){
	ft_putchar('j');
	write(1, "\n", 1);
}

void ft_putchar(char c){
	write(1, &c, 1);
}
