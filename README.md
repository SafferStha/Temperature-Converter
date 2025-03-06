# Unit Converter Program

## Overview

The Unit Converter Program is a simple console-based application written in C that allows users to convert between different units of temperature, currency, and mass. The user is prompted to select a category for conversion, and then the program guides them through the necessary steps to perform the conversion.

## Features

1. **Temperature Conversion**  
   Convert between Fahrenheit and Celsius.

2. **Currency Conversion**  
   Convert USD to:
   - Euro (EUR)
   - Japanese Yen (JPY)
   - Chinese Yuan (RMB)

3. **Mass Conversion**  
   Convert:
   - Ounces to Pounds (lbs)
   - Grams to Pounds (lbs)

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
   The user is asked to choose one of three categories:
   - **T** for Temperature Conversion
   - **C** for Currency Conversion
   - **M** for Mass Conversion

2. **Temperature Conversion**:  
   - Option to convert **Fahrenheit to Celsius** or **Celsius to Fahrenheit**.
   - User provides the temperature value, and the program displays the converted result.

3. **Currency Conversion**:  
   - Convert from **USD to Euro (EUR)**, **USD to Japanese Yen (JPY)**, or **USD to Chinese Yuan (RMB)**.
   - User provides the amount in USD, and the program displays the converted amount in the selected currency.

4. **Mass Conversion**:  
   - Convert from **Ounces to Pounds (lbs)** or **Grams to Pounds (lbs)**.
   - User provides the mass value, and the program displays the converted result.

## Example Usage

```bash
Welcome to Unit Converter! 
Here is a list of conversation to choose from: 
Temperature(T), Currency(C), Mass(M) 
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

1. **Temperature**:  
   - Fahrenheit to Celsius:  
     \[
     C = \frac{(F - 32) \times 5}{9}
     \]
   - Celsius to Fahrenheit:  
     \[
     F = \left( \frac{9}{5} \times C \right) + 32
     \]

2. **Currency**:
   - USD to Euro (EUR): Multiply by 0.87
   - USD to Japanese Yen (JPY): Multiply by 111.09
   - USD to Chinese Yuan (RMB): Multiply by 6.82

3. **Mass**:
   - Ounces to Pounds: Multiply by 0.0625
   - Grams to Pounds: Multiply by 0.00220462

## Notes

- Ensure that the correct choice is selected for each conversion type.
- The program only supports the specific conversion types listed in the options.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

This README file outlines the functionality of your unit converter program and provides basic usage instructions for users.