#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	if(t<0||t>100){
		printf("输入的分数不合法!");
	}else{
		t>60?printf("及格!"):printf("不及格!");
	}
	return 0;
}
