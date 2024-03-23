#include <bits/stdc++.h>
using namespace std;

int strlen(const char* str) {
	assert(str != NULL); //assert(str);¾ÍÐÐ

	int len = 0;
	while ((*str++) != '\0')
		len++;

	return len;
}

int main(void)
{
	const char a[] = "963852";
	int ret = mystrlen(a);
	cout << ret << endl;
	return 0;
}