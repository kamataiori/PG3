#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <functional>

// サイコロの目をランダムに決める関数
int rollDice() {
    return (rand() % 6) + 1;
}

// 3秒間待機
void setTimeout(std::function<void()> callback, int delay) {
    for (int i = 0; i < delay; ++i) {
        printf(". ");
        fflush(stdout);
        for (int j = 0; j < 100000000; ++j); 
    }
    callback();
}

// 判定を行う関数
void judge(int diceRoll, std::function<int()> userGuessFunc, std::function<void(int)> callback) {
    int userGuess = userGuessFunc();
    int isCorrect = ((diceRoll % 2 == 0) && (userGuess == 0)) || ((diceRoll % 2 != 0) && (userGuess == 1));

    // 3秒待機してから結果を表示
    setTimeout([=]() {
        printf("\nサイコロの出た目は %d です", diceRoll);
        callback(isCorrect);
        }, 3);
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
