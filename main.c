#include <stdio.h>
//#include
//包含头文件，C库函数的声明代码。
//标准的输入输出头文件，standard input output

//以#开头的，都是“宏定义”语句，包含C库的头文件。
#define A 1//定义字符串、表达式、常量数字
#define PI 3.1415926
#define SEC_PER_YEAR (365 * 24 * 3600) // 一年多少秒。
//int printf(const char* fmt,...);
//int scanf (const char* fmt,...);

//echo $? 可以查看上一程序的返回值。
//int main(int argc, char* argv[]) argc:参数个数 argv:每个参数的字符串。

//1,每一行的语句都以(英文)分号结尾。

//2,函数的主体，以大括号{}表示出来。

//3，函数的声明，返回值 函数名([参数类型 参数名,参数类型 参数名])

//4,以main()函数作为整个程序的入口。

//其他函数是否被运行到，要看main()会不会直接或间接的调用它。

//5,函数被调用的语法，函数名(参数[,参数]);
//相反数

//int printf(const char* fmt,...);

//6,函数的返回值，用return语句。

//7,函数的声明语句，是给“使用者”看的，要告诉使用者 每个参数的类型!

//8,函数的调用语句，是给“C语言的编译器”看的，调用语句不需要带参数的类型.
int neg(int i){
	return -i;
}
int add(int i, int j){
	return i +j;
}
int main (){
	printf("%s(), %d\n",__func__, __LINE__);// __LINE__查看行号，__func__查看函数.
	printf("hello world,%d\n",add(1,2)); //对C库函数的调用
// int a;
// scanf("%d",&a);
// printf("a:%d\n",a);
return 0;
}
