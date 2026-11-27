#include "./array_utils.h"

int main() {
    int numbers[] = {4, 9, 2, 7, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    analyze_array(numbers, size);
    return 0;
}
