#include<stdio.h>
/*コンパイルの仕方*/
//gcc -o(アウトプット) hello(変換後の新しいものの名前) hello.c(変換するものの名前)
//./hello(変換したファイルをコンパイル)
//⌘+Cでとめられる


//文字列は char型(一文字)の配列 (※終端は「\0」)

void abc(void){
	//char s[] = {'a','b','c','\0'};
	char s[] = "abc";
	//char s[4] = "abc"; //終端の０も含むから四個
	printf("%c\n",s[1] );
}

int main(void)
{
	abc();

	int sales[3];

	sales[0] = 200;
	sales[1] = 400;
	sales[2] = 300;

	int sales2[3] = {200, 400, 300};
	//これでいっぺんにいれられる
	//[3]のところを{}の中の値の個数に揃えたいときは省略して良い

	printf("%d\n",sales[0] );

	return 0;
}


//プロトタイプ宣言
float getMax(float a, float b);
//返り値の型、関数名、引数になにを使うか(関数の一行目)


/*三項演算子		
	返り値 = (条件) ? A :B ;
	条件が真であればAを、そうでなければBを
*/
float getMax(float a, float b){
	/*
	if (a >= b)
	{
		return a;
	} else {
		return b;
	}
	*/
	//三項演算子	
	return (a >= b) ? a : b;
}

void sayHi(void){
	printf("hi!\n");
	//引数に型がない場合の関数
}

void f(void){
	int a = 0;
	a++;
	printf("a:%d\n",a );
}

int __main(void){

	f();

	float result;
	result = getMax(2.3 , 5.2);
	printf("%f\n", result);

	// sayHi();


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
	//この0というのは関数がintだから整数を返してる無事に正常終了したよ
}