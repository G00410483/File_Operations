#include<stdio.h>
#include<string.h>

void main()
{
	FILE* file1;
	FILE* file2;

	int num;
	float rate;
	char letter;
	int i, numIteration;
	int numInputs;

	char str1[50];
	char str2[50];
	int result;

	/*
	file1 = fopen("UserFile.txt", "w");
	file2 = fopen("DataFile.txt", "w");

	printf("Please tell me the number of lines you need to write to the file\n");
	scanf("%d", &numIteration);

	for (i = 0; i < numIteration; i++)
	{
		printf("Please enter an integer, a float and a letter\n");
		scanf("%d %f %c", &num, &rate, &letter);

		if (file1 != NULL)
		{
			fprintf(file1, "Num %d Rate %f Letter %c\n", num, rate, letter);
		}

		if (file2 != NULL)
		{
			fprintf(file2, "%d %f %c\n", num, rate, letter);
		}
	}

	if (file1 != NULL)
	{
		fclose(file1);
	}

	if (file2 != NULL)
	{
		fclose(file2);
	}


	//Append

	file1 = fopen("UserFile.txt", "a");
	file2 = fopen("DataFile.txt", "a");

	printf("Please tell me the number of lines you need to append to the file\n");
	scanf("%d", &numIteration);

	for (i = 0; i < numIteration; i++)
	{
		printf("Please enter an integer, a float and a letter\n");
		scanf("%d %f %c", &num, &rate, &letter);

		if (file1 != NULL)
		{
			fprintf(file1, "Num %d Rate %f Letter %c\n", num, rate, letter);
		}

		if (file2 != NULL)
		{
			fprintf(file2, "%d %f %c\n", num, rate, letter);
		}
	}

	if (file1 != NULL)
	{
		fclose(file1);
	}

	if (file2 != NULL)
	{
		fclose(file2);
	}

	//Read the contents....
	file2 = fopen("DataFile.txt", "r");

	if (file2 == NULL)
	{
		printf("Sorry the data file could not be opened\n");
	}
	else
	{
		while (!feof(file2))
		{
			numInputs = fscanf(file2, "%d %f %c", &num, &rate, &letter);
			if (numInputs == 3)
			{
				printf("The contents are %d %f %c\n", num, rate, letter);
			}
		}

		fclose(file2);
	}
	*/

	printf("Please enter string 1\n");
	scanf("%s", str1);
	printf("The value of string 1 is %s\n", str1);

	printf("Please enter string 2\n");
	gets_s(str2, 49);
	gets_s(str2, 49);
	printf("The value of string 2 is %s\n", str2);

	result = strlen(str1);
	printf("The length of %s is %d\n", str1, result);

	result = strcmp(str1, str2);

	if (result == 0)
		printf("%s is the same as %s\n", str1, str2);
	else if (result < 0)
		printf("%s is smaller than %s\n", str1, str2);
	else
		printf("%s is bigger than %s\n", str1, str2);

	result = strncmp(str1, str2, 4);

	if (result == 0)
		printf("STRNCMP %s is the same as %s\n", str1, str2);
	else if (result < 0)
		printf("STRNCMP %s is smaller than %s\n", str1, str2);
	else
		printf("STRNCMP %s is bigger than %s\n", str1, str2);

	printf("Before strcpy string 1 %s string 2 %s\n", str1, str2);
	strcpy(str2, str1);
	printf("After strcpy string 1 %s string 2 %s\n", str1, str2);

	printf("Please enter string 1\n");
	scanf("%s", str1);

	printf("Please enter string 2\n");
	gets_s(str2, 49);
	gets_s(str2, 49);

	printf("Before strcat string 1 %s string 2 %s\n", str1, str2);
	strcat(str2, str1);
	printf("After strcat string 1 %s string 2 %s\n", str1, str2);

	printf("Please enter string 1\n");
	scanf("%s", str1);

	printf("Please enter string 2\n");
	gets_s(str2, 49);
	gets_s(str2, 49);

	printf("Before strncpy string 1 %s string 2 %s\n", str1, str2);
	strncpy(str2, str1, 4);
	str2[4] = '\0';
	printf("After strncpy string 1 %s string 2 %s\n", str1, str2);


	printf("STRNCAT Please enter string 1\n");
	scanf("%s", str1);

	printf("Please enter string 2\n");
	gets_s(str2, 49);
	gets_s(str2, 49);

	printf("Before strncpy string 1 %s string 2 %s\n", str1, str2);
	result = strlen(str2);
	strncat(str2, str1, 2);
	str2[result + 2] = '\0';
	printf("After strncpy string 1 %s string 2 %s\n", str1, str2);
}