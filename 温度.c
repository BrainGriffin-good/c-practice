#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	if(t>37){
		printf("今天超出37°，橙色高温!\n");
		printf("外出工作注意身体！");
	}else{
		printf("今天温度很合适!"); 
	}
	return 0;
}
