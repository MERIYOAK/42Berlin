#include <unistd.h>

void ft_putstr(char *str){
	char i = 0;
	
	while(str[i] != '\0'){
		write(1, &str[i], 1);
		i++;
	}
}

int main(){
	char string[] = "hello world";
	char *str = string;

	ft_putstr(str);
	write(1, "\n", 1);
	
}
