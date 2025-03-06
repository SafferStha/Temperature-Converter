# Unit Converter Program

## Overview

The Unit Converter Program is a simple console-based application written in C that allows users to convert between different units of temperature. The user is prompted to select a category for conversion, and then the program guides them through the necessary steps to perform the conversion.

## Features

**Temperature Conversion**  
   Convert between Fahrenheit and Celsius.

## How to Use

1. Compile the program using a C compiler, such as GCC:
   ```
   gcc unit_converter.c -o unit_converter
   ```

2. Run the program:
   ```
   ./unit_converter
   ```

3. Follow the on-screen prompts to select a category and conversion type.

4. Input the values as requested, and the program will display the converted results.

## Program Flow

1. **Category Selection**:  
   The user is asked to choose a category:
   - **T** for Temperature Conversion

2. **Temperature Conversion**:  
   - Option to convert **Fahrenheit to Celsius** or **Celsius to Fahrenheit**.
   - User provides the temperature value, and the program displays the converted result.

## Example Usage

```bash
Welcome to Unit Converter! 
Here is a list of conversation to choose from: 
Temperature(T) 
Please enter the letter you want to convert.
T

Welcome to Temperature Converter! 
Here is a list of conversations to choose from: 
Enter 1 for Fahrenheit to Celsius. 
Enter 2 for Celsius to Fahrenheit. 
1

Please enter the Fahrenheit degree: 
100
Celsius: 37
```

## Conversion Formulas Used

**Temperature**:  
   - Fahrenheit to Celsius:  
     \[
     C = \frac{(F - 32) \times 5}{9}
     \]
   - Celsius to Fahrenheit:  
     \[
     F = \left( \frac{9}{5} \times C \right) + 32
     \]

## Notes

- Ensure that the correct choice is selected for each conversion type.
- The program only supports the specific conversion types listed in the options.

---

This README file outlines the functionality of your unit converter program and provides basic usage instructions for users.