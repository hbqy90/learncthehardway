#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	char str[10];
	char *pStr = str;

	cout << sizeof(str) << endl;
	cout << sizeof(pStr) << endl;

	return 0;
}