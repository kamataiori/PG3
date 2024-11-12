#include <stdio.h>
#include <type_traits>

// クラステンプレート Compare を定義
template <typename T1, typename T2>
class Compare {
public:
    T1 value1;
    T2 value2;

    // コンストラクタで2つの値を初期化
    Compare(T1 v1, T2 v2) : value1(v1), value2(v2) {}

    // Min関数：2つの値のうち小さい方を返す
    auto Min() const -> typename std::common_type<T1, T2>::type {
        return (value1 < value2) ? value1 : value2;
    }
};

int main() {
    // 各型の組み合わせでインスタンスを作成
    Compare<int, int> c1(10, 20);
    Compare<int, float> c2(10, 15.5f);
    Compare<int, double> c3(10, 20.5);
    Compare<float, float> c4(5.5f, 2.5f);
    Compare<float, double> c5(3.5f, 7.0);
    Compare<double, double> c6(1.2, 3.4);

    // Min関数を呼び出して結果を表示
    printf("c1.Min() = %d\n", c1.Min()); // int と int の比較
    printf("c2.Min() = %f\n", c2.Min()); // int と float の比較
    printf("c3.Min() = %f\n", c3.Min()); // int と double の比較
    printf("c4.Min() = %f\n", c4.Min()); // float と float の比較
    printf("c5.Min() = %f\n", c5.Min()); // float と double の比較
    printf("c6.Min() = %f\n", c6.Min()); // double と double の比較

    return 0;
}
