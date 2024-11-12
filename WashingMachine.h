#include "Appliance.h"
#include <stdio.h>

// 派生クラス：WashingMachine（洗濯機）
class WashingMachine : public Appliance {
public:
    // コンストラクタ：洗濯機の名前を初期化
    WashingMachine();

    // 洗濯機の動作を実行する
    void action() const override;

    // 洗濯機の電源を入れる
    void powerOn() const override;

    // 洗濯機の電源を切る
    void powerOff() const override;
};