#include<stdio.h>

const char* getWord(char);//ָ�뺯��,��Ҫ���ؾֲ�������ָ��
const char* getWord(char c)
{
	switch (c)
	{
	case'A':return"Apple";
	case'B':return"Banana";
	case'C':return"Cat";
	case'D':return"Dog";
	default:return"None!";

	}
}

int main()
{
	char input;

	printf("������һ����ĸ��");
	scanf_s("%c", &input);

	printf("%s\n", getWord(input));

	return 0;

}