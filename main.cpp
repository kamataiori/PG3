#include <iostream>
#include <list>
#include <iterator>
#include <cstring>
#include <cstdio>

void printStations(const std::list<const char*>& stations, const char* year) {
    printf("%s年の駅一覧:\n", year);
    for (std::list<const char*>::const_iterator it = stations.begin(); it != stations.end(); ++it) {
        printf("%s\n", *it);
    }
    printf("\n");
}

int main() {
    // 山手線の駅名 (1970年版)
    std::list<const char*> stations1970 = {
        "Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani",
        "Nippori", "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro",
        "Mejiro", "Takadanobaba", "Shin-Okubo", "Shinjuku", "Yoyogi",
        "Harajuku", "Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki",
        "Shinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
    };

    // 西日暮里駅を挿入 (1971年開業)
    std::list<const char*>::iterator it1970 = stations1970.begin();
    std::advance(it1970, 7); // Nipporiの次に挿入
    stations1970.insert(it1970, "Nishi-Nippori");

    // 2019年版の駅リスト (1970年版を基に作成)
    std::list<const char*> stations2019 = stations1970;

    // 高輪ゲートウェイ駅を挿入 (2020年開業)
    std::list<const char*>::iterator it2019 = stations2019.begin();
    std::advance(it2019, 21); // TamachiとShinagawaの間に挿入
    stations2019.insert(it2019, "Takanawa Gateway");

    // 2022年版の駅リスト (2019年版を基に作成)
    std::list<const char*> stations2022 = stations2019;

    // 駅リストの表示
    printStations(stations1970, "1970");
    printStations(stations2019, "2019");
    printStations(stations2022, "2022");

    return 0;
}
