#include <stdio.h>
#define SIZE 5

_Bool exists(const int[], const int);
void printArray(const int[]);
void ins(int[], const int);
size_t getPos(const int[], const int);
void sh(int[], const int);

int main ()
{
	int a[SIZE] = {0};
	int n;
		
	do {
		printArray(a);
		printf("%s", "Insert a number (Ctrl + d to quit): ");
		scanf("%d", &n);

		if(!exists(a, n))
		{
			sh(a, n);
			ins(a, n);
		}
	} while(getchar() != EOF);

	printArray(a);
	
	puts("Goodbye!");
}

_Bool exists(const int a[], const int n) {
	for(size_t i = 0; i < SIZE; ++i)
	{
		if(a[i] == n)
		{
			return 1;
		}
	}
	return 0;
}

void printArray(const int a[]) {
	for(size_t i = 0; i < SIZE; ++i)
	{
		printf("%d", a[i]);
		if(i == SIZE - 1)
		{
			continue;
		}
		printf("%s", ", ");
	}
	puts("");
}

void ins(int a[], const int n) {
	a[getPos(a, n)] = n;
}

size_t getPos(const int a[], const int n) {
	size_t i = 0;
	while(n > a[i]) {
		i++;
	}
	return i < SIZE ? i : SIZE - 1;
}

void sh(int a[], const int n) {
	for(size_t i = 0; i < getPos(a, n); ++i)
	{
		a[i] = a[i + 1];
	}
}
