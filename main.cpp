#include <stdio.h>

// 再帰的な資金体系の時給を計算する関数
int calculateRecursiveWage(int hour) {
    if (hour == 1) {
        return 100;
    }
    return calculateRecursiveWage(hour - 1) * 2 - 50;
}

int main() {
    //一般的な時給
    const int standardWage = 1072;
    //働く時間数
    int totalHours; 

    //働く時間数を入力
    printf("何時間働きますか？: ");
    scanf_s("%d", &totalHours);

    //一般的な資金体系の合計賃金
    int totalStandardWage = 0;
    //再帰的な資金体系の合計賃金
    int totalRecursiveWage = 0;

    //各時間ごとの時給と合計賃金を計算
    for (int i = 1; i <= totalHours; i++) {
        //再帰的な時給
        int recursiveWage = calculateRecursiveWage(i);
        //一般的な時給を追加
        totalStandardWage += standardWage;
        //再帰的な時給を追加
        totalRecursiveWage += recursiveWage;

        //各時間ごとの時給を表示
        printf("\n労働時間:%d時間\n 一般的な時給: %d円\n 再帰的な時給: %d円\n",  i, totalStandardWage, recursiveWage);
    }

    //合計賃金を表示
    printf("\n合計賃金: 一般的な資金体系: %d円, 再帰的な資金体系: %d円\n", totalStandardWage, totalRecursiveWage);

    //再帰的な資金体系が一般的な資金体系を上回るかどうかを表示
    if (totalRecursiveWage > totalStandardWage) {
        printf("再帰的な資金体系のほうが儲かります。\n");
    }
    else {
        printf("一般的な資金体系のほうが儲かります。\n");
    }

    return 0;
}
