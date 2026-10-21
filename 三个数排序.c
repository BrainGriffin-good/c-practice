#include <stdio.h>

int main(){
	int x=9,y=3,z=6,t;
	
	if (x>y){
		t=x;x=y;y=t; 
	}
	if (x>z){
		t=x;x=z;z=t;
	}
	if (y>z){
		t=y;y=z;z=t;
	}
	
	printf("%d %d %d\n",x,y,z);
	return 0;
}
