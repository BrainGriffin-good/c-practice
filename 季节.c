#include <stdio.h>

int main(){
	int month;
	scanf("%d",&month);
	switch(month){
		case 3:
			printf("33节!\n");
		case 4:
		case 5://5独有的特点不能与3和4分享
		     printf("春天!");
			 break;
		case 6:case 7:case 8:
		    printf("夏天!");
			break;
		case 9:case 10:case 11:
		    printf("秋天!");
			break;
		case 12:case 1:case 2:
		    printf("冬天!");
			break;
		default:
		    printf("不是一个合法的月份数字!"); 
	}
	

//  int Level=score/10;
//  switch(Level){
//      case 10: case 9:
//
//  }
}
