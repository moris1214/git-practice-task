#include <stdio.h>
#include <assert.h>
#include "./array_utils.h"

// Порівняння дробових чисел з допустимою похибкою
static int almost_equal(double a, double b) {
    double diff = a - b;
    return diff < 1e-9 && diff > -1e-9;
}

void test_max_basic() {
    int arr[] = {4, 9, 2, 7, 5};
    assert(find_max(arr, 5) == 9);
}

void test_max_first_and_last() {
    int first[] = {10, 3, 5, 1};
    int last[] = {1, 3, 5, 10};
    assert(find_max(first, 4) == 10);
    assert(find_max(last, 4) == 10);
}

void test_max_negative() {
    int arr[] = {-5, -2, -9, -3};
    assert(find_max(arr, 4) == -2);
}

void test_max_single_and_equal() {
    int single[] = {42};
    int equal[] = {7, 7, 7};
    assert(find_max(single, 1) == 42);
    assert(find_max(equal, 3) == 7);
}

void test_average_basic() {
    int arr[] = {4, 9, 2, 7, 5};
    assert(almost_equal(calc_average(arr, 5), 5.4));
}

void test_average_fraction() {
    int arr[] = {1, 2};
    assert(almost_equal(calc_average(arr, 2), 1.5));
}

void test_average_negative_and_zero() {
    int negative[] = {-4, -2, -6};
    int zero_sum[] = {-3, 3};
    assert(almost_equal(calc_average(negative, 3), -4.0));
    assert(almost_equal(calc_average(zero_sum, 2), 0.0));
}

void test_average_single() {
    int arr[] = {8};
    assert(almost_equal(calc_average(arr, 1), 8.0));
}

int main() {
    test_max_basic();
    test_max_first_and_last();
    test_max_negative();
    test_max_single_and_equal();
    test_average_basic();
    test_average_fraction();
    test_average_negative_and_zero();
    test_average_single();

    printf("All unit tests passed successfully!\n");
    return 0;
}
