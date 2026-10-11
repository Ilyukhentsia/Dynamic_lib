#include <iostream>
#include "../include/arraylib.h"

int main() {
    int schedule[] = {
    1, 1, 0, 1, 0, 0,
    1, 1, 1, 0, 1, 0
    };
    std::size_t n=sizeof(schedule) / sizeof(schedule[0]);
    std::cout << "Занято слотов: " << arr_sum(schedule, n) << '\n';
    std::cout << "Свободно слотов: " << n-arr_sum(schedule, n) << '\n';
    std::cout << "Процент занятых слотов: " << ((arr_sum(schedule, n)*1.0)/n)*100 << "%" << '\n';
    std::cout << "Сумма всех значений: " << arr_sum(schedule, n) << '\n';
    std::cout << "Медиана: " << arr_median(schedule, n) << '\n';
    return 0;
}
