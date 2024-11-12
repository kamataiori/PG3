#include "Refrigerator.h"
#include "Microwave.h"
#include "WashingMachine.h"
#include <stdio.h>

int main() {
    // 家電の基底クラスポインタ配列
    Appliance* appliances[3];

    // 生成フェーズ
    appliances[0] = new Refrigerator();
    appliances[1] = new Microwave();
    appliances[2] = new WashingMachine();

    // 動作フェーズ
    for (int i = 0; i < 3; i++) {
        appliances[i]->powerOn();
        appliances[i]->action();
        appliances[i]->powerOff();
        printf("\n"); // 区切り用の改行
    }

    // 破棄フェーズ
    for (int i = 0; i < 3; i++) {
        delete appliances[i];
    }

    return 0;
}
