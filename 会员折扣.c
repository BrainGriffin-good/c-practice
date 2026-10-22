#include <stdio.h>

int main(){
	float amount,discount,finalPay;
	int userType;
	printf("请输入消费金额(元):");
	scanf("%f",&amount);
	printf("请选择用户类型(1-会员,2-普通):");
	scanf("%d",&userType);
	if (userType==1){      // 会员用户分支
	    if (amount>=1000) discount=0.8;       //   金额>=1000元:8折
		else if (amount>=500) discount=0.9;        //500<=金额<=1000元:9折
		else discount=0.95;   //金额<500元:95折 
	}
	else if (userType==2){    //普通用户分支
	    if (amount >=1000)discount =0.9;       //金额>=1000元:9折
	    else discount =1.0;   // 金额<1000元:无优惠(原价) 
	}
	else {  //非法输入处理
	    printf("\n错误:无效的用户类型!\n");return 1; 
	}
	finalPay =amount*discount;
	printf("实付金额:%.2f 元\n",finalPay);
	return 0;
}
