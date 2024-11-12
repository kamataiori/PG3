#pragma once
#include <stdio.h>

// 基底クラス：Appliance（家電製品）
class Appliance {
public:
    // コンストラクタ：家電製品の名前を初期化
    Appliance(const char* appliance_name);

    // 各家電の動作を定義
    virtual void action() const = 0;

    // 電源を入れる動作
    virtual void powerOn() const = 0;

    // 電源を切る動作
    virtual void powerOff() const = 0;

    // 仮想デストラクタ
    virtual ~Appliance() = default;

protected:
    const char* name; // 家電製品の名前
};
