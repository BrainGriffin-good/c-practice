#include <stdio.h>

int main(){
	double x,y,r;
	char op;
	scanf("%1f%c%1f",&x,&op,&y);
	if(op=='+'){
		r=x+y;
	}else if(op='-'){
		r=x-y;
	}else if(op='*'){
		r=x*y;
	}else if(op='/'){
		r=x/y;//假设用户输入的y不为0
	}else{
		printf("超出四则运算的范围"); 
	}
	return 0;
}
