#include "WashingMachine.h"

// 基底クラスのコンストラクタを呼び出し、洗濯機の名前を設定
WashingMachine::WashingMachine() : Appliance("洗濯機") {}

// 洗濯機の動作を出力
void WashingMachine::action() const {
    printf("%sは洗濯を行っています。\n", name);
}

// 洗濯機の電源を入れる操作を出力
void WashingMachine::powerOn() const {
    printf("%sの電源を入れました。\n", name);
}

// 洗濯機の電源を切る操作を出力
void WashingMachine::powerOff() const {
    printf("%sの電源を切りました。\n", name);
}
