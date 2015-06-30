#include<stdio.h>
/*コンパイルの仕方*/
//gcc -o(アウトプット) hello(変換後の新しいものの名前) hello.c(変換するものの名前)
//./hello(変換したファイルをコンパイル)
//⌘+Cでとめられる

int main(void){
	//char(1文字) %c
	/*演算子
	代入を伴う場合 x=x+5; → x+=5;
	++(プラス1),--(マイナス1)*/
	/*
	int x = 10;
	float y = 5.2;
	char c = 'A';

	printf("x = %d, y = %f, c = %c \n",x,y,c);
	*/

	//if文
	/*
	int score = 80;
	if (score >= 60){
		printf("OK!\n");
	} else{
		printf("NG!\n"); 
	}
	*/

	//ループ(for文)
	/*

	*/
	int m ;
	for (int m = 0; m < 10; m++)
	{
		if (m == 3)
		{
			continue;
			//一回ループを抜ける
		}
		if (m == 8)
		{
			break;
			//8からループ自体を抜ける
		}
		//まずmを初期化、条件をかく、繰り返す内容
		printf("m: %d\n",m );
	}


	//ループ(while文)
	/*
	int m = 0;
	while(m < 10){
		//10より小さかったらmを1ずつ増やす
		printf("m: %d\n",m );
		m++;
	}

	int n = 0;
	do{
		printf("n:%d\n",n );
		n++;
		//do whileだと条件に合っていなくても一度は実行される
	} while( n < 10);
	*/

	//switch文
	/*
	int rank = 2;
	switch(rank){
		case 1: 
			printf("Gold!\n");
			break;
		case 2: 
			printf("Silver!\n");
			break;
		case 3: 
			printf("Bronze!\n");
			break;
		default:
			printf("no medal...\n");
			break;
	}
	*/

	return 0;
}