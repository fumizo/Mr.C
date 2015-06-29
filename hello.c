#include<stdio.h>
/*コンパイルの仕方*/
//gcc -o(アウトプット) hello(変換後の新しいものの名前) hello.c(変換するものの名前)
//./hello(変換したファイルをコンパイル)

int main(void){
	//char(1文字) %c

	int x = 10;
	float y = 5.2;
	char c = 'A';

	printf("x = %d, y = %f, c = %c \n",x,y,c);
	return 0;
	
}