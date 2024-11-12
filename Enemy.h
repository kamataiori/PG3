#include <cstdio>
#include <chrono>

class Enemy {
public:
    // フェーズのenum
    enum class Phase {
        APPROACH,
        ATTACK,
        RETREAT,
        COUNT // フェーズ数
    };

    // 状態遷移を行うメイン関数
    void Update();

private:
    // メンバ関数を宣言
    void Approach();
    void Attack();
    void Retreat();

    // フェーズ用のメンバ関数ポインタのテーブルを宣言のみ ①
    static void (Enemy::* phaseFuncTable[])();

    // 現在のフェーズ
    Phase currentPhase = Phase::APPROACH;

    // フェーズ移行のためのタイマー
    std::chrono::steady_clock::time_point lastPhaseChangeTime = std::chrono::steady_clock::now();
    static const int PHASE_DURATION = 3; // 各フェーズの持続時間（秒）

    // フェーズごとに一度だけメッセージを表示するためのフラグ
    bool phaseMessageDisplayed = false;
};
