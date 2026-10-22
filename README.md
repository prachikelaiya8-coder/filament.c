C Programming Programs

This repository contains two C programs that demonstrate basic string manipulation and character processing in the C programming language.

1. Palindrome String Checker (1.c)
Description

This program checks whether the given string is a palindrome or not. A palindrome is a word or string that reads the same forward and backward.

Concepts Used
String handling in C
while loop
for loop
if-else statements
Character comparison
How It Works
The program takes a string as input from the user.
It calculates the length of the string.
It compares characters from the beginning and the end of the string.
If all corresponding characters match, the string is a palindrome.
Otherwise, the string is not a palindrome.
Example Output

Input:

Enter any string: madam


Output:

The given string is a Palindrome.


Another Example:

Enter any string: hello
The given string is not a Palindrome.

2. Frequency of Each Character (2.c)
Description

This program calculates and displays the frequency of each distinct character in a given string. It counts how many times each character occurs in the input.

Concepts Used
Character arrays
Nested for loops
if statements
Character comparison
Frequency counting
How It Works
The program accepts a string from the user.
It traverses each character of the string.
It counts how many times that character appears in the remaining string.
Duplicate occurrences are marked to prevent counting the same character again.
Finally, it displays each character and its frequency.
Example Output

Input:

Enter any string: banana


Output:

Frequency of each letter:
b => 1
a => 3
n => 2

How to Compile and Run

Make sure a C compiler, such as GCC, is installed on your system.

Run Program 1: Palindrome Checker
gcc 1.c -o palindrome
./palindrome

Run Program 2: Character Frequency
gcc 2.c -o frequency
./frequency


On Windows, run the compiled programs using:

palindrome.exe
frequency.exe

Learning Objectives
Understand string manipulation in C.
Learn how to calculate string length.
Practice loops and conditional statements.
Compare characters within a string.
Develop logic for palindrome checking and character frequency counting.
Conclusion

These programs help beginners understand fundamental C programming concepts, including strings, loops, conditions, and character processing.
