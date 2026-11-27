#include <stdio.h>
#include "./array_utils.h"

int find_max(const int arr[], int size) {
    int max = arr[0];  // перший елемент масиву
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];  // оновлюємо максимум
        }
    }
    return max;
}

double calc_average(const int arr[], int size) {
    int sum = 0;  // сума всіх елементів
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size;
}

void analyze_array(const int arr[], int size) {
    printf("Максимальний елемент: %d\n", find_max(arr, size));
    printf("Середнє арифметичне: %.2f\n", calc_average(arr, size));
}
