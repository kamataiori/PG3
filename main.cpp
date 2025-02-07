#include <stdio.h>
#include <iostream>
#include <string>
#include <chrono>

    int main() {
        // 100,000文字の 'a' で初期化
        std::string a(100000, 'a');

        // コピー計測開始
        auto start_copy = std::chrono::high_resolution_clock::now();
        std::string b = a;  // コピー
        auto end_copy = std::chrono::high_resolution_clock::now();

        // 移動計測開始
        auto start_move = std::chrono::high_resolution_clock::now();
        std::string c = std::move(a);  // 移動
        auto end_move = std::chrono::high_resolution_clock::now();

        // 計測結果をμs(マイクロ秒)単位で取得
        auto copy_time = std::chrono::duration_cast<std::chrono::microseconds>(end_copy - start_copy).count();
        auto move_time = std::chrono::duration_cast<std::chrono::microseconds>(end_move - start_move).count();

        // printf で出力
        printf("100,000文字を移動とコピーで比較しました。\n");
        printf("コピー : %lldμs\n", copy_time);
        printf("移動   : %lldμs\n", move_time);
        printf("続行するには何かキーを押してください ．．．");

        getchar();  // キー入力待機

        return 0;
    }
