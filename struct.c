//结构体
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
typedef struct stu//结构体关键字struct
{
	char name[20];//名字
	short age;//年龄
	char tele[12];//电话
	char sex[5];//性别
}Stu;
void Print1(Stu tmp)
{
	printf("name:%s\n", tmp.name);
	printf("age:%d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex:%s\n", tmp.sex);
}
Print2(Stu* ps)
{
	printf("name:%s\n", ps->name);
	printf("age:%d\n", ps->age);
	printf("tele:%s\n", ps->tele);
	printf("sex:%s\n", ps->sex);

}
int main()
{
	Stu s1 = { "YuJiang",18,"15048015057","男" };//这个s是局部变量
	Stu s2 = { "SanZhang",22,"11111111111","保密" };
	//打印结构体数据
	Print1(s1);//需要拷贝一份数据，占用内存，花费时间，性能下降
	Print2(&s2);//地址占用空间小，更优
	return 0;
}