#include "Microwave.h"

// 基底クラスのコンストラクタを呼び出し、電子レンジの名前を設定
Microwave::Microwave() : Appliance("電子レンジ") {}

// 電子レンジの動作を出力
void Microwave::action() const {
    printf("%sは加熱を行っています。\n", name);
}

// 電子レンジの電源を入れる操作を出力
void Microwave::powerOn() const {
    printf("%sの電源を入れました。\n", name);
}

// 電子レンジの電源を切る操作を出力
void Microwave::powerOff() const {
    printf("%sの電源を切りました。\n", name);
}