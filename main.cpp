#include <stdio.h>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
int current_thread = 1;

void print_thread(int id) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [&]() { return id == current_thread; }); // 順番を待つ
    printf("thread %d\n", id);
    current_thread++;
    cv.notify_all(); // 次のスレッドを起こす
}

int main() {
    std::thread t1(print_thread, 1);
    std::thread t2(print_thread, 2);
    std::thread t3(print_thread, 3);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
