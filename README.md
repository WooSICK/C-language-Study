# C-language-Study
This repository is my study storage

## 1. Reversing String
* **Subject:** Reversing strings using dynamic memory allocation
* **Problem Solved:** Handling garbage values in unused space after `malloc()`
* **Solution:** Calculated the actual length by searching for the Null terminator (`'\0'`) to reverse only the valid characters.

## 2. Real time Array Expansion
* **Subject:** self-expanding integer array implementation
* **Problem Solved:** Overcoming the fixed-size limitation of static arrays and handling
* **Solution:**  Used `realloc()` to dynamically increase tje ,e,pry size each time a new interger in entered, until the sentinel value (-1) is received
