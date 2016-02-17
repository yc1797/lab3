#include <studio.h>


int acceptNumb()
{
	int i;
	printf("Please input an integer: ");
	scanf("%i", &i);

	return i;
}

char acceptString()
{
	char inStr[100];
	printf("Please input a string (String should not exceed 100 characters): ");
	scanf("%s", inStr);

	return inStr;
}

void encrypt()
{
	char inStr[100] = acceptString();
	int numb = acceptNumb();
	char newStr[100];

	for (int a = 0; inStr[a] != "/0"; a++)
	{
		int changed = int(inStr[a]) + numb;
		newStr[a] = char(changed);

		printf("%c", newStr[a]);
	}

	for (int a = 0; inStr[a] != "/0"; a++)
	{
		printf("%c", inStr[a]); 
	}
}


int main()
{
	encrypt();

	return 0;
}
