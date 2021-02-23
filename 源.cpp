#include<stdio.h>

const char* getWord(char);//指针函数,不要返回局部变量的指针
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

	printf("请输入一个字母：");
	scanf_s("%c", &input);

	printf("%s\n", getWord(input));

	return 0;

}