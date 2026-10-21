#include <stdio.h>

int main(){
	int a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	
	for (int i=0,j=n-1;i<j;i++,j--){
		int t=a[i];
		a[i]=a[j];
		a[j]=t;
	} 
	for (int i=0;i<n;i++)
	    printf("%d",a[i]);
	printf("\n");
	return 0;
}
