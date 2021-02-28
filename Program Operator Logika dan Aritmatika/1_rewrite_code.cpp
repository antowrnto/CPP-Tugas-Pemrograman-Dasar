#include <stdio.h>
#include <conio.h>

int main()
{
	int x = 20, y = 8;
	
	printf("x = %d dan y = %d \n", x, y);
	printf("x / y = %d \n", x /y);
	printf("x %% y = %d \n", x % y);
	x += 2;
	printf(" Nilai x sekarang : %i \n", x);
	x++;
	printf("nilai x setelah x++ : %i \n", x);
	printf("nilai y : %d \n", y++);
	printf("nilai y setelah : %d \n", y);
	
	getch();
	return 0;
}