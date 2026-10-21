#include <stdio.h>

int main(){
	int x=9,y=3,z=6;
	int max=x;
	
	if (y>max){
		max=y;
	}
	if (z>max){
		max=z;
	}
	printf("max=%d\n",max);
	return 0;
}
