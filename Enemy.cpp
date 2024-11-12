#include "Enemy.h"
#include <chrono>

// メンバ関数ポインタのテーブルを初期化
void (Enemy::* Enemy::phaseFuncTable[])() = {
    &Enemy::Approach,
    &Enemy::Attack,
    &Enemy::Retreat
};

void Enemy::Update() {
    // 時間計測してフェーズ移行判定
    auto now = std::chrono::steady_clock::now();
    int elapsedTime = std::chrono::duration_cast<std::chrono::seconds>(now - lastPhaseChangeTime).count();

    if (elapsedTime >= PHASE_DURATION) {
        // フェーズ移行
        currentPhase = static_cast<Phase>((static_cast<size_t>(currentPhase) + 1) % static_cast<size_t>(Phase::COUNT));
        lastPhaseChangeTime = now; // フェーズ変更時間を更新
        phaseMessageDisplayed = false; // 次のフェーズでメッセージを表示するためにフラグをリセット
    }

    // フェーズが変わった時だけメッセージを表示
    if (!phaseMessageDisplayed) {
        (this->*phaseFuncTable[static_cast<size_t>(currentPhase)])(); // 現在フェーズの関数を実行
        phaseMessageDisplayed = true;
    }
}

// フェーズ関数の実装
void Enemy::Approach() {
    printf("接近中...\n");
}

void Enemy::Attack() {
    printf("射撃中...\n");
}

void Enemy::Retreat() {
    printf("離脱中...\n");
}
