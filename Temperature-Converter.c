#include <stdio.h>

// Function to print the welcome message and conversion options
void printWelcomeMessage() {
    printf("Welcome to Temperature Converter! \n");
    printf("Here is a list of conversions to choose from: \n");
    printf("Enter 1 for Fahrenheit to Celsius. \n");
    printf("Enter 2 for Celsius to Fahrenheit. \n");
}

// Function to convert Fahrenheit to Celsius
int fahrenheitToCelsius(int fahrenheit) {
    return ((fahrenheit - 32) * 5) / 9;
}

// Function to convert Celsius to Fahrenheit
int celsiusToFahrenheit(int celsius) {
    return ((celsius * 9) / 5) + 32;
}

int main() {
    char category;
    int tempChoice;
    int userinputF; // User inputted Fahrenheit
    int userinputC; // User inputted Celsius
    int convertedTemp; // Variable to store the converted temperature

    printf("Please enter the category (T for temperature): \n");
    scanf(" %c", &category); // Added space before %c to consume any leading whitespace

    if (category == 'T') {
        printWelcomeMessage();
        scanf("%d", &tempChoice);

        if (tempChoice == 1) {
            printf("Please enter the Fahrenheit degree: \n");
            scanf("%d", &userinputF);
            convertedTemp = fahrenheitToCelsius(userinputF);
            printf("Celsius: %d\n", convertedTemp);
        } else if (tempChoice == 2) {
            printf("Please enter the Celsius degree: \n");
            scanf("%d", &userinputC);
            convertedTemp = celsiusToFahrenheit(userinputC);
            printf("Fahrenheit: %d\n", convertedTemp);
        } else {
            printf("Please enter the correct choice. \n");
        }
    } else {
        printf("Please enter a valid category. \n");
    }

    return 0;
}
