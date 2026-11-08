#include <stdio.h>

// Знаходить максимум і середнє арифметичне масиву та виводить їх у консоль
void analyze_array(int arr[], int size) {
    int max = 0;      // поточний максимум
    int sum = 0;      // сума всіх елементів

    // Проходимо по масиву циклом
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];   // оновлюємо максимум
        }
        sum += arr[i];      // додаємо елемент до суми
    }

    // Обчислюємо середнє арифметичне
    double average = (double)sum / size;

    // Виводимо результати
    printf("Максимальний елемент: %d\n", max);
    printf("Середнє арифметичне: %.2f\n", average);
}

int main() {
    int numbers[] = {4, 9, 2, 7, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    analyze_array(numbers, size);
    return 0;
}
