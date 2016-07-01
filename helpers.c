/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <stdio.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // Checks input
    if (n < 0)
    return false;
    
    // performs binary search
    int leftindex=0, rightindex=n-1;
    while (rightindex >= leftindex)
    {
        if (binarysearch(leftindex, rightindex, values, value))
        return true;
        else if (value < values[(rightindex+leftindex)/2])
        rightindex = (rightindex + leftindex)/2 - 1;
        else
        leftindex = (rightindex + leftindex)/2 + 1;
    }
    return false;
    
}

/**
 * Determines if value is equal to middle value of array
 */
bool binarysearch(int leftindex, int rightindex, int values[], int value)
{
    if (values[(rightindex + leftindex)/2] == value)
    return true;
    else
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // performs bubble sort
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (values[j+1] < values[j])
            {
                int temp = values[j+1];
                values[j+1]=values[j], values[j]=temp;
            }
        }
    }

}

