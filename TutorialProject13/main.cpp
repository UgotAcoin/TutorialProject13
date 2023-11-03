#include <iostream>
#include <cstdlib>
#include <string>
#include <cstdio>
#include <vector>
#include <conio.h>

using namespace std;

void addOne(int *pointer);

int main()
{
	int a = 5;
	int b = 10;

	int *myPointer = NULL;

	myPointer = &a;
	cout << *myPointer << endl;

	addOne(myPointer);
	cout << *myPointer << endl;

	printf("\nPress any key to quit...\n");
	_getch();
	return 0;
}

void addOne(int *pointer) {
	*pointer += 1;
}