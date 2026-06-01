# CSE 102

This repository contains C programming practice and offline assignment solutions
for CSE 102. The files are organized by topic, with the original assignment PDFs
kept beside the submitted source code.

## Repository Structure

```text
.
├── Array, Function/
│   ├── Offline_Array_Function.pdf
│   └── 1905038/
│       ├── problem.01.c
│       ├── PROBLEM02.c
│       └── PROBLEM03.c
└── multi-dimensional array, string/
    ├── String_Multidimensional_Array_Recursion_Practice.pdf
    └── 1905038(AJ)/
        ├── arrpoi2.c
        └── a,b,ab.c
```

## Programs

### Array and Function

| File | Description |
| --- | --- |
| `problem.01.c` | Prints the most frequent number or numbers after each input value. |
| `PROBLEM02.c` | Finds the sum of all perfect numbers up to a given number `n`. |
| `PROBLEM03.c` | Prints a vertical bar chart using `**` for the given bar heights. |

### Multidimensional Array and String

| File | Description |
| --- | --- |
| `arrpoi2.c` | Replaces occurrences of one string inside another string. |
| `a,b,ab.c` | Menu/command-based matrix program supporting input, output, addition, subtraction, multiplication, division by scalar, and transpose. |

## Compile and Run

Use `gcc` to compile any source file:

```sh
gcc "Array, Function/1905038/problem.01.c" -o problem01
./problem01
```

Another example:

```sh
gcc "multi-dimensional array, string/1905038(AJ)/a,b,ab.c" -o matrix
./matrix
```

## Notes

- The PDF files contain the original assignment or practice problem statements.
- Some programs use older C functions such as `gets()` and `strcmpi()`. These may
  need small changes to compile on modern compilers.
- File and folder names contain spaces and punctuation, so wrap paths in quotes
  when compiling or running commands from the terminal.
