#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100
#define NAME_LENGTH 50

void sortNames(char names[][NAME_LENGTH], int n) {
    // Simple bubble sort to sort the names alphabetically
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                char temp[NAME_LENGTH];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}
int binarySearch(char names[][NAME_LENGTH], int n, const char *target) {
    int left = 0;
