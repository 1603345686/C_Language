#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


int main0401() {
	
	union Data
	{
		int i;
		float f;
		char str[20];
	}data;

	printf("Memory size occupied by data : %d\n", sizeof(data));
	return 0;
}

int main0402() {
	union Data {
		int i;
		float f;
		char str[20];
	};
	union Data data;
	data.i = 10;
	data.f = 220.5;
	strcpy(data.str, "C 语言");

	printf("data.f : %f\n", data.f);
	printf("data.i : %d\n", data.i);
	printf("data.str: %s\n", data.str);


	return 0;
}
int main() {
	union Data {
		int i;
		float f;
		char str[20];
	};
	union Data data;
	data.i = 10;
	printf("data.i : %d\n", data.i);

	data.f = 220.5;
	printf("data.f : %f\n", data.f);

	strcpy(data.str, "C 语言");
	printf("data.str: %s\n", data.str);
  
	return 0;
}
 
