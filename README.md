# Temperature Converter Program

## Overview

The Temperature Converter Program is a console-based application written in C that allows users to convert between Fahrenheit and Celsius. Users are prompted to choose a conversion type and then input the temperature value they want to convert.

## Features

1. **Fahrenheit to Celsius Conversion**
2. **Celsius to Fahrenheit Conversion**

## How to Use

1. **Compile the Program**:  
   First, you need to compile the program using a C compiler such as GCC:
   ```bash
   gcc temperature_converter.c -o temperature_converter
   ```

2. **Run the Program**:
   Once the program is compiled, run the executable:
   ```bash
   ./temperature_converter
   ```

3. **Input the Category**:  
   When prompted, enter `T` for temperature conversion.

4. **Choose Conversion Type**:  
   You will then be asked to choose a conversion:
   - Enter `1` to convert **Fahrenheit to Celsius**
   - Enter `2` to convert **Celsius to Fahrenheit**

5. **Enter Temperature Value**:  
   Depending on your choice, input the temperature value (in Fahrenheit or Celsius) to convert.

6. **View Results**:  
   The program will display the converted temperature.

## Program Flow

1. **Category Selection**:  
   The program prompts the user to select a conversion category. In this version, only the "Temperature" category (`T`) is supported.

2. **Conversion Options**:  
   The program displays the following options for temperature conversion:
   - Convert **Fahrenheit to Celsius**
   - Convert **Celsius to Fahrenheit**

3. **Conversion Calculation**:  
   - **Fahrenheit to Celsius**: The program uses the formula:
     \[
     C = \frac{(F - 32) \times 5}{9}
     \]
   - **Celsius to Fahrenheit**: The program uses the formula:
     \[
     F = \left( \frac{C \times 9}{5} \right) + 32
     \]

4. **Display Results**:  
   After inputting the temperature, the program will output the converted temperature.

## Example Usage

### Scenario 1: Fahrenheit to Celsius
```bash
Please enter the category (T for temperature): 
T
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
Please enter the category (T for temperature): 
T
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

- Make sure to enter a valid category (`T`) for temperature conversions.
- Ensure that you select a valid conversion type (`1` or `2`).

---

This README file provides an overview of the program's functionality, how to use it, and examples of how the conversion works. 