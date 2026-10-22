#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	float x,y,a;
	
	printf("正在绘制爱心,请稍等...\n");
	for(y=1.5f;y>=-1.5f;y-=0.1f){
		for(x=-1.5f;x<=1.5f;x+=0.05f){
			a=x*x+y*y-1;
			if(a*a*a-x*x*y*y*y<=0)
			   putchar('*');
			else
			   putchar(' ');
		}
		
		putchar('\n');
		fflush(stdout);
		Sleep(120);
	}
	
	printf("\n我的朋友\n");
	printf("想对你说\n");
	printf("我好想你!\n");
	printf("要永远快乐开心!\n");
	printf("好好吃饭!\n");
	printf("好好睡觉!\n");
	printf("好好照顾自己!\n");
	
	system("pause");
	return 0; 
}
