// Consol#include <iostream>
#define SQUARE(x) ((x)*(x))
#define ABS(x) (((x)<0)?-(x):(x))

int main()
{
	printf("안녕하세요. C++의 세계에 오신 것을 환영합니다.\n\n");

	printf("2의 제곱: %d\n", SQUARE(2));
	printf("5의 제곱: %d\n", SQUARE(5));
	printf("1.2의 제곱: %f\n", SQUARE(1.2));
	int x = 7;
	printf("%d의 제곱: %d\n", x + 1, SQUARE(x + 1));
	printf("-5의 절대값 :%d\n", ABS(-5));
	printf("7의 절대값 :%d\n", ABS(7));
	printf("7의 절대값 :%d\n", SQUARE (ABS(9)));


	//std::cout << "안녕하세요. C++의 세계의 오신것을 환영합니다!\n"
