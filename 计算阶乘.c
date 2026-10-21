#include <stdio.h>

int main(){
	int n=5;
	int result=1;
	
	for (int i=1;i<=n;i++){
		result*=i;
	}
	printf("%d!=%d\n",n,result);
	return 0;
}
