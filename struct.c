//�ṹ��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
typedef struct stu//�ṹ��ؼ���struct
{
	char name[20];//����
	short age;//����
	char tele[12];//�绰
	char sex[5];//�Ա�
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
	Stu s1 = { "YuJiang",18,"15048015057","��" };//���s�Ǿֲ�����
	Stu s2 = { "SanZhang",22,"11111111111","����" };
	//��ӡ�ṹ������
	Print1(s1);//��Ҫ����һ�����ݣ�ռ���ڴ棬����ʱ�䣬�����½�
	Print2(&s2);//��ַռ�ÿռ�С������
	return 0;
}