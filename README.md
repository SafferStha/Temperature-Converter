# Temperature Converter Program

## Overview

The Temperature Converter Program is a console-based application written in C that allows users to convert temperatures between Fahrenheit and Celsius. The program displays a welcome message, prompts users to select a conversion type, and then calculates and displays the result based on the input temperature.

## Features

1. **Fahrenheit to Celsius Conversion**
2. **Celsius to Fahrenheit Conversion**

## How to Use

1. **Compile the Program**:  
   To compile the program, you need a C compiler such as GCC:
   ```bash
   gcc temperature_converter.c -o temperature_converter
   ```

2. **Run the Program**:  
   After compiling, run the program using the following command:
   ```bash
   ./temperature_converter
   ```

3. **Choose Conversion Type**:  
   The program will prompt you to choose one of the following conversion options:
   - **Enter `1`** for Fahrenheit to Celsius conversion.
   - **Enter `2`** for Celsius to Fahrenheit conversion.

4. **Input Temperature**:  
   Depending on the conversion type selected, enter the temperature value:
   - For **Fahrenheit to Celsius**, enter the temperature in Fahrenheit.
   - For **Celsius to Fahrenheit**, enter the temperature in Celsius.

5. **View Results**:  
   The program will display the converted temperature.

## Program Flow

1. **Welcome Message and Conversion Options**:  
   Upon running the program, you will be greeted with a welcome message and a list of conversion options (Fahrenheit to Celsius or Celsius to Fahrenheit).

2. **User Input**:  
   The program prompts you to select one of the two conversion options:
   - Enter `1` to convert Fahrenheit to Celsius.
   - Enter `2` to convert Celsius to Fahrenheit.

3. **Temperature Conversion**:
   - **Fahrenheit to Celsius**: The conversion formula used is:
     \[
     C = \frac{(F - 32) \times 5}{9}
     \]
   - **Celsius to Fahrenheit**: The conversion formula used is:
     \[
     F = \left( \frac{C \times 9}{5} \right) + 32
     \]

4. **Display Results**:  
   After entering the temperature, the program calculates and displays the converted temperature.

## Example Usage

### Scenario 1: Fahrenheit to Celsius
```bash
Welcome to Temperature Converter! 
Here is a list of conversions to choose from: 
Enter 1 for Fahrenheit to Celsius. 
Enter 2 for Celsius to Fahrenheit. 
1
Please enter the Fahrenheit degree: 
100
Celsius: 37
```

### Scenario 2: Celsius to Fahrenheit
```bash
Welcome to Temperature Converter! 
Here is a list of conversions to choose from: 
Enter 1 for Fahrenheit to Celsius. 
Enter 2 for Celsius to Fahrenheit. 
2
Please enter the Celsius degree: 
0
Fahrenheit: 32
```

## Notes

- Ensure to enter a valid choice (either `1` or `2`) when prompted for the conversion type.
- The program currently supports only temperature conversions (Fahrenheit ↔ Celsius).

---

This README outlines the purpose, usage instructions, and expected results for your temperature converter program. 