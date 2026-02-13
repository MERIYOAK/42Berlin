#include <stdio.h>

int ft_strlen(char *str){
	int i;

	while(str[i] != '\0'){
		i++;				
	}
	return i;
}

int main(){
	char string[] = "hello world";
	char *str = string;
	int strlen = ft_strlen(str);
	printf("the length is: %d\n", strlen);
}
