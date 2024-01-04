#include<stdio.h>
#include<string.h>

int main(){
	char a[100]; 
	char b[100];
	printf("please enter two string seperated by space\n");
	scanf("%s %s\n", &a, &b);
	printf("you have entered two String --> first: %s.\nsecond: %s.\n", a, b);
	return 0;
}
