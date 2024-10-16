#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// ランダムにサイコロを振る関数
int rollDice() {
	return (rand() % 6) + 1;
}

// 判定結果を表示する関数
void printResult(int isCorrect) {
	if (isCorrect) {
		printf("\n正解！\n");
	}
	else {
		printf("\n不正解...\n");
	}
}

// 判定を行う関数（コールバック関数として使用）
void judge(int diceRoll, int (*userGuessFunc)(), void (*callback)(int)) {
	int userGuess = userGuessFunc();
	int isCorrect = ((diceRoll % 2 == 0) && (userGuess == 0)) || ((diceRoll % 2 != 0) && (userGuess == 1));

	// 3秒待機
	printf(". ");
	Sleep(1000);
	printf(". ");
	Sleep(1000);
	printf(". ");
	Sleep(1000);

	// コールバック関数を使って結果を表示
	printf("\nサイコロの出た目は %d です", diceRoll);
	callback(isCorrect);
}

// ユーザーの入力を受け取る関数
int getUserGuess() {
	int guess;
	printf("\nサイコロの出目は奇数か偶数かを当ててください (0: 偶数, 1: 奇数): ");
	scanf_s("%d", &guess);
	return guess;
}

int main() {
	// 乱数の初期化
	srand(time(NULL));

	// サイコロを振る
	int diceRoll = rollDice();
	printf("サイコロを振りました...");

	// 判定を行う
	judge(diceRoll, getUserGuess, printResult);

	return 0;
}
