#include "roadmap"

/**
*main - will call strToUpper() and pass a string to the function
*Return: will return 0 if success
*/

int main(void)
{
	char s[] = "Roadmap To Full Stack Software Engineer!\n";
	char *str;

	str = strToUpper(s);
	printf("%s", str);
	printf("%s", s);

	return (0);
}