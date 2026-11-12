# DSA Task 2 – Stack Operations Using an Array

## Student Details

| Field | Details |
|---|---|
| Student Name | Nareshwar Perer S |
| Register Number | RA2510042050003 |
| Programme | B.Tech. – Computer Science and Business Systems (CSBS) |
| Course | 21CSC201J – Data Structures and Algorithms |
| Assessment | Continuous Learning Assessment – 2 (Task 2) |
| Topic | Stack Operations Using an Array (C Programming) |

## Project Overview

This project demonstrates a stack implemented using a one-dimensional integer array in C. A stack follows the **LIFO (Last In, First Out)** principle: the most recently inserted element is removed first.

The implementation uses:
- `stack[SIZE]` to store the elements.
- `SIZE = 5` as the maximum capacity.
- `top = -1` to represent an empty stack.
- `push()` to insert an element when space is available.
- `pop()` to remove and return the top element.
- `display()` to print the active stack contents.

## Files and Folders

```text
Navin_N_DSA_Task2_Submission/
├── README.md
├── stack_operations.c
├── test_cases.c
├── Report/
│   ├── Nareshwar_Perer_S_RA2510042050003_DSA_Task2_Report_Final.docx
├── Screenshots/
│   ├── 00_program_output.png
│   ├── 01_test_case_basic_lifo.png
│   ├── 02_test_case_overflow.png
│   ├── 03_test_case_underflow.png
│   └── 04_test_case_fill_and_empty.png
└── Handwritten/
    ├── DSA_Task2_Handwritten.pdf
    ├── handwritten_page_1.png
    ├── handwritten_page_2.png
    └── handwritten_page_3.png
```

## How to Compile and Run

A C compiler such as GCC is required.

### Compile the main program

```bash
gcc -std=c11 -Wall -Wextra stack_operations.c -o stack_operations
```

### Run the main program

```bash
./stack_operations
```

On Windows Command Prompt:

```bash
gcc -std=c11 -Wall -Wextra stack_operations.c -o stack_operations.exe
stack_operations.exe
```

## Test Cases and Verified Results

The main program and the four independent test cases were compiled using GCC and executed.

| Test Case | Scenario | Actual Result |
|---|---|---|
| Test 1 | Basic LIFO | `pop()` returned `20`; remaining stack was `[10]`; `top = 0`. |
| Test 2 | Overflow | Five values were inserted. The sixth push was rejected with `Stack Overflow`; `top = 4`. |
| Test 3 | Underflow | Popping an empty stack printed `Stack Underflow`, returned `-1`, and left `top = -1`. |
| Test 4 | Fill and empty | Values were popped in the order `12, 8, 4`; the stack became empty and `top = -1`. |

The corresponding terminal-output screenshots are available in the `Screenshots/` folder.

## Main Program Output

```text
Pushed: 10
Pushed: 20
Pushed: 30
Stack: 10 20 30
Popped: 30
Pushed: 40
Pushed: 50
Pushed: 60
Stack Overflow
Stack: 10 20 40 50 60
Popped: 60
Popped: 50
Popped: 40
Popped: 20
Popped: 10
Stack is Empty
Stack Underflow
Popped: -1
```

## Conclusion

The program demonstrates the LIFO behavior of a stack using an array. The `push()` operation inserts elements until the array reaches its maximum capacity, while `pop()` removes the most recently inserted element. The overflow test confirms that an insertion is rejected when the stack is full. The underflow test confirms that removal from an empty stack is handled safely by returning `-1`. All four additional test cases produced the expected results when compiled and executed with GCC. The final stack state of the main program is empty, with `top = -1`.

## Evidence and Report

- `Report/` contains the final editable Word report and its PDF copy.
- `Screenshots/` contains the main program output and one output screenshot for each test case.
- `Handwritten/` contains the supplied handwritten assessment PDF and its three page images.

