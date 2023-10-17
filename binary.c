#include <stdlib.h>
/**
 * convertToBinary - new binary converter
 * @nm: number
 * return: Always 0 (Success)
 */

char *convertToBinary(unsigned int nm)
{
	if (nm == 0)
	{
		char *binary = (char *)malloc(2 * sizeof(char));

		if (binary == NULL)
		{
			exit(EXIT_FAILURE);
		}
		binary[0] = '0';
		binary[1] = '\0';
		return (binary);
	}

	int length = 0;
	unsigned int tmp = nm;

	while (tmp != 0)
	{
		tmp = tmp >> 1;
		length++;
	}

	char *binary = (char *)malloc((length + 1) * sizeof(char));

	if (binary == NULL)
	{
		exit(EXIT_FAILURE);
	}
	binary[length] = '\0';

	for (int i = length - 1; i >= 0; i--)
	{
		binary[i] = (nm & 1) + '0';
		nm = nm >> 1;
	}
	return (binary);
}

/**
 * main - time to test the code)
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned int num = 10;
	char *binary = convertToBinary(num);

	free(binary);
	return (0);
}
