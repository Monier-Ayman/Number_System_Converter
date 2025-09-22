# Number System Converter

## Description
A console-based C++ program that converts numbers between **Decimal, Binary, Octal, and Hexadecimal** systems.  
It includes **input validation** for Binary, Octal, and Hexadecimal numbers, and features a **menu-driven interface** that continues until the user exits.  

## Features
- Decimal → Binary, Octal, Hexadecimal  
- Binary → Decimal (with input validation)  
- Octal → Decimal (with input validation)  
- Hexadecimal → Decimal (with input validation)  
- Menu system with continuous execution until exit  

## Time Complexity
| Function                  | Complexity  |
|----------------------------|------------|
| Decimal → Binary/Octal/Hex | O(log n)   |
| Binary → Decimal           | O(log n)   |
| Octal → Decimal            | O(log n)   |
| Hexadecimal → Decimal      | O(log n)   |

## How to Run

### On Linux / Mac:
g++ main.cpp -o todo  
./todo

### On Windows:
g++ main.cpp -o todo.exe  
todo.exe

## Example Usage
```text
===== Number System Converter =====
1. Decimal to Binary/Octal/Hex
2. Binary to Decimal
3. Octal to Decimal
4. Hexadecimal to Decimal
5. Exit
Enter your choice: 1
Enter a Decimal number: 10
Binary: 1010
Octal: 12
Hexadecimal: A.
``` 
---  

💡 **Author:** Monier Ayman  
📌 C++ project demonstrating problem-solving skills, number system conversions, and input validation techniques. 

