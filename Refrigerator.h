#include "Appliance.h"
#include <stdio.h>

// 派生クラス：Refrigerator（冷蔵庫）
class Refrigerator : public Appliance {
public:
    // コンストラクタ：冷蔵庫の名前を初期化
    Refrigerator();

    // 冷蔵庫の動作を実行
    void action() const override;

    // 冷蔵庫の電源を入れる
    void powerOn() const override;

    // 冷蔵庫の電源を切る
    void powerOff() const override;
};
