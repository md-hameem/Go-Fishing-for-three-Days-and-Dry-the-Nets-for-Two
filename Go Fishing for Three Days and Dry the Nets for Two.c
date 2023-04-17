#include <stdio.h>

int main() {
    int num;
    
    // Prompt user to enter a 3-digit integer for the day and read input from user
    printf("Enter the day as a 3-digit integer: ");
    if (scanf("%d", &num) != 1 || num < 100 || num > 999) {
        // If scanf() fails to read input or entered value is not a 3-digit number, print an error message and exit program with failure status
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    // Define a weather pattern string of length 5 and use modulo arithmetic to get the corresponding weather character for the entered day
    char weather_pattern[5] = "11100";
    char weather = weather_pattern[num % 5 - 1];

    // Use a switch statement to determine and print the weather for the entered day based on the weather character
    switch (weather) {
        case '0':
            printf("It is currently drying weather on day %d.\n", num);
            break;
        case '1':
            printf("It is currently fishing weather on day %d.\n", num);
            break;
        default:
            printf("Invalid input. Please enter a valid 3-digit integer.\n");
    }

    return 0;
}
