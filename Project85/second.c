#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
int my_strlen2(const char* str) {
	int count = 0;
	assert(str);
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}
int main(void) {
	char arr[] = "hello bit";
	int len = my_strlen2(arr);
	printf("%d\n", len);
	return 0;
}