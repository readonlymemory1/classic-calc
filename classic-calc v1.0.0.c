#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a, b;
	char c;
	printf("classic-calc v1.0.0        C edition\n");
	
	while(1){
		
		scanf("%d %c %d", &a, &c, &b);
		if(c == '+'){
			printf("%d", a+b);
		}else if(c == '-'){
			printf("%d", a-b);
		}else if(c == '*'){
			printf("%d", a*b);
		}else if(c == '/'){
			printf("%d", a/b);
		}
	}
	return 0;
}
