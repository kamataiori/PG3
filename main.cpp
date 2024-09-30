#include <stdio.h>

// テンプレート関数 Min を定義 (if文を使用)
template <typename Type>
Type Min(Type a, Type b) {
    if (a > b) {
        return b;
    }
    else {
        return a;
    }
}

//char型
template <>
char Min(char a, char b) {
    printf("数字以外は代入できません\n");
    return 0;
}

int main() {
    //intの最小値
    int a = 10, b = 20;
    printf("int型の最小値: %d\n", Min(a, b));

    //floatの最小値
    float c = 10.5f, d = 5.5f;
    printf("float型の最小値: %f\n", Min(c, d));

    //doubleの最小値
    double e = 100.123, f = 200.456;
    printf("double型の最小値: %lf\n", Min(e, f));

    //charの場合
    char i = 'add', j = 'min';
    printf("", Min(i, j));

    return 0;
}
