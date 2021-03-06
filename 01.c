#define _CRT_SECURE_NO_WARNINGS //宏定义
//引入头文件
//只有函数的声明，编译时会去找到函数的实现
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


/*
void main(){
	printf("hello world\n");	
	system("pause");
}
*/
//1.基本数据类型
//int short long float double char
/*
int %d
short %d
long %ld
float %f
double %lf
char %c
%x 十六进制
%o 八进制
%s 字符串
*/
/*
void main(){
	int i = 1;
	printf("%d\n",i);

	float f = 23.3;
	printf("%f\n",f);

	//基本数据类型所占的字节数
	printf("int占%d字节\n",sizeof(int));
	printf("char占%d字节\n", sizeof(char));
	printf("float占%d字节\n", sizeof(float));

	//循环
	int n = 0;
	for (; n < 10; n++){
		printf("%d\n",n);
	}

	//等待输入
	system("pause");
}
*/

//2.输入输出函数
/*
void main(){
	int i;
	printf("请输入一个整数：");
	//赋值
	scanf("%d",&i);  //控制台输入，&取地址符
	//打印
	printf("i的值为：%d\n",i);

	system("pause");
}
*/

//指针
//指针存储的是变量的内存地址
//内存地址，系统给数据分配的编号（门牌号）
/*void main(){
	int i = 90;
	//指针变量，创建一个int类型的指针
	int* p = &i; //p的值就是i这个变量的内存地址
	printf("%#x\n",p);

	float f = 89.5f;
	//创建一个float类型的指针
	float *fp = &f;
	printf("%#x\n", fp);

	system("pause");
}*/

/*
void change(int* p){
	*p = 300;
}

//变量名，对内存空间上的一段数据的抽象
void main(){
	int i = 90;
	//i = 89;
	//创建一个int类型的指针
	int *p = &i;
	//输出地址
	printf("p的地址：%#x\n",&p);
	printf("i的地址：%#x\n",&i);

	printf("i的值为：%d\n", i);
	//间接赋值 i = 200;

	//对p存的地址指向的变量进行操作
	//*p = 200;
	//change(p);
	change(&i);  // int *p = &i;
	printf("i的值为：%d\n",i);

	system("pause");
}
*/

void main(){
	int time = 600;
	printf("time:%#x\n",&time);
	while (time > 0){
		time--;
		printf("游戏时间剩余%d秒\n",time);
		//睡眠
		Sleep(1000);
	}
	system("pause");
}

