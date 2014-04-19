/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
	int upper = n - 1;
	int lower = 0;
	
	while(lower <= upper) {
		int middle = (upper + lower) / 2;

		if (value == values[middle]) {
			return true;
		}

		else if(value < values[middle]) {
			upper = middle - 1;
		}

		else if(value > values[middle]) {
			lower = middle + 1;
		}
	}

    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int swaps;

	do {
		swaps = 0;
		
		for(int i = 0; i < (n-1); i++) {
			if(values[i] > values[i + 1]) {
				int temp = values[i];
				values[i] = values[i + 1];
				values[i + 1] = temp;
				
				swaps++;
			}
		}
	}
	while(swaps != 0);
    return;
}
