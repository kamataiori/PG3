#include "Refrigerator.h"

// 基底クラスのコンストラクタを呼び出し、冷蔵庫の名前を設定
Refrigerator::Refrigerator() : Appliance("冷蔵庫") {}

// 冷蔵庫の動作を出力
void Refrigerator::action() const {
    printf("%sは冷却しています。\n", name);
}

// 冷蔵庫の電源を入れる操作を出力
void Refrigerator::powerOn() const {
    printf("%sの電源を入れました。\n", name);
}

// 冷蔵庫の電源を切る操作を出力
void Refrigerator::powerOff() const {
    printf("%sの電源を切りました。\n", name);
}
