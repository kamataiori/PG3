#include <stdio.h>
#include <thread>
#include "Enemy.h"

int main() {

    Enemy enemy;
    // ループしてUpdateを呼び出し続ける
    for (int i = 0; i < 9; ++i) { 
        enemy.Update();

        // スリープ関数でループごとに1秒待機
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    return 0;
}
