#include "Appliance.h"
#include <stdio.h>

// 派生クラス：Microwave（電子レンジ）
class Microwave : public Appliance {
public:
    // コンストラクタ：電子レンジの名前を初期化
    Microwave();

    // 電子レンジの動作を実行
    void action() const override;

    // 電子レンジの電源を入れる
    void powerOn() const override;

    // 電子レンジの電源を切る
    void powerOff() const override;
};
