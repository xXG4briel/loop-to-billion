#include <iostream>
#include <iomanip>
#include <chrono>

int main() {
    int billion = 1000000000;
    auto start_time = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < billion; i++) {
    }

    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_time = end_time - start_time;
    std::cout << std::fixed << std::setprecision(3) << elapsed_time.count() << " segundos" << std::endl;

    return 0;
}
