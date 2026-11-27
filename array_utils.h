#ifndef ARRAY_UTILS_H_
#define ARRAY_UTILS_H_

// Повертає максимальний елемент масиву (size > 0)
int find_max(const int arr[], int size);

// Повертає середнє арифметичне елементів масиву (size > 0)
double calc_average(const int arr[], int size);

// Знаходить максимум і середнє арифметичне та виводить їх у консоль
void analyze_array(const int arr[], int size);

#endif  // ARRAY_UTILS_H_
