//Array of strings in C, Introduction to Computer science

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/*
In general, ch_arr + i points to the ith string or ith 1-D array.
In general, we can say that: *(ch_arr + i) + j points to the jth character of ith 1-D array.
To get the element at jth position of ith 1-D array just dereference the whole expression *(ch_arr + i) + j.
*(*(ch_arr + i) + j)
in: ch_arr[i][j]

"i" represents the  ith string, "j" represents the jth character of each string.

The following program demostrates how to print an array of strings:

#include<stdio.h>

int main()
{
    int i;

    char ch_arr[3][10] = {
                             "spike",
                             "tom",
                             "jerry"
                         };

    printf("1st way \n\n");

    for(i = 0; i < 3; i++)
    {
        printf("string = %s \t address = %u\n", ch_arr + i, ch_arr + i);
    }

    // signal to operating system program ran fine
    return 0;
}

Expected output:
string = spike address = 2686736
string = tom address = 2686746
string = jerry address = 2686756

Full Explanation: https://overiq.com/c-programming-101/array-of-strings-in-c/

*/

int main(void){

    char array_of_strings[4][10] = {
        "EMMA",
        "RODRIGO",
        "BRIAN",
        "DAVID"
    };

    for(int i = 0; i < 4; i++){
    printf("%s \n", array_of_strings + i);
    }
    
    return 0;
}