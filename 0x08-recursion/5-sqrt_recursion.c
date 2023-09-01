#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Calculate the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The square root of n, or -1 if n is negative.
 */
int _sqrt_recursion(int n) {
    /* Base case: If n is negative, return -1 (no natural square root). */
    if (n < 0) {
        return -1;
    }

    /* Base case: If n is 0 or 1, the square root is n itself. */
    if (n == 0 || n == 1) {
        return n;
    }

    /* Recursive case: Use binary search to find the square root. */
    /* Start with a guess in the middle of the possible range. */
    return _sqrt_helper(n, 0, n);
}

/**
 * _sqrt_helper - Helper function for calculating square root using binary search.
 * @n: The number for which to find the square root.
 * @low: The lower bound of the current search range.
 * @high: The upper bound of the current search range.
 *
 * Return: The square root of n, or -1 if not found in the range.
 */
int _sqrt_helper(int n, int low, int high) {
    /* Base case: If low is greater than high, the square root wasn't found. */
    if (low > high) {
        return -1;
    }

    /* Calculate the middle number in the current range. */
    int mid = (low + high) / 2;
    long long square = (long long)mid * mid; /* Use long long to avoid overflow. */

    if (square == n) {
        /* If the square of mid is equal to n, we found the square root. */
        return mid;
    } else if (square < n) {
        /* If the square is less than n, search in the right half. */
        return _sqrt_helper(n, mid + 1, high);
    } else {
        /* If the square is greater than n, search in the left half. */
        return _sqrt_helper(n, low, mid - 1);
    }
}

/**
 * main - Entry point, calculates the square root of a number.
 *
 * Return: Always 0.
 */
int main() {
    int number = 16; /* Change this to the desired number. */
    int result = _sqrt_recursion(number);
    
    if (result == -1) {
        printf("No natural square root for %d\n", number);
    } else {
        printf("The square root of %d is %d\n", number, result);
    }
    
    return 0;
}

