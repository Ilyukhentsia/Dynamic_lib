#include "../arraylib.h"

int arr_sum(const int* a, std::size_t n) {
    int s = 0;
    for (std::size_t i = 0; i < n; ++i) s += a[i];
    return s;
}
int arr_max(const int* a, std::size_t n) {
    int m = a[0];
    for (std::size_t i = 1; i < n; ++i) if (a[i] > m) m = a[i];
    return m;
}
int arr_min(const int* a, std::size_t n) {
    int m = a[0];
    for (std::size_t i = 1; i < n; ++i) if (a[i] < m) m = a[i];
    return m;
}
double arr_average(const int* a, std::size_t n) {
    double m = 0;
    for (std::size_t i = 0; i < n; ++i) m += a[i];
    return (m/n);
}
int arr_count_positive(const int* a, std::size_t n) {
    int m = 0;
    for (std::size_t i = 0; i < n; ++i) if (a[i] > 0) m++;
    return m;
}
int arr_count_negative(const int* a, std::size_t n) {
    int m = 0;
    for (std::size_t i = 0; i < n; ++i) if (a[i] < 0) m++;
    return m;
}
int arr_count_zero(const int* a, std::size_t n) {
    int m = 0;
    for (std::size_t i = 0; i < n; ++i) if (a[i] == 0) m++;
    return m;
}
int arr_product(const int* a, std::size_t n) {
    int m = 1;
    for (std::size_t i = 0; i < n; ++i) m *= a[i];
    return m;
}
double arr_median(const int* a, std::size_t n) {
    int arr[n];
    for (std::size_t i=0;i<n;++i){arr[i]=a[i];}
    int mk;
    for (std::size_t i=0;i<n;++i){
        mk=i;
        for (std::size_t j=i;j<n;++j){if (arr[j]<arr[mk]){mk=j;}}
        if (mk!=i){
            arr[mk]=arr[mk]+arr[i];
            arr[i]=arr[mk]-arr[i];
            arr[mk]=arr[mk]-arr[i];
        }
    }
    if (n%2!=0){return (arr[(n-1)/2])/1.0; }else{return (arr[n/2]+arr[(n/2)-1])/2.0; }
}