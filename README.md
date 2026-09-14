# C Dynamic Memory Allocation

Programs covering dynamic memory allocation in C — allocating, resizing, and freeing memory at runtime.
6 practice programs on dynamic memory allocation in C — malloc, calloc, and realloc for arrays and multiplication tables.
## Files

| File | Concept |
|---|---|
| `01_dma.c` | Dynamic memory allocation basics |
| `01_prac.c` | Quick quiz — create a dynamic array of 5 floats using `malloc()` |
| `02_prac.c` | Quick quiz — create an array of size `n` (user input) using `calloc()` |
| `03_free.c` | Freeing allocated memory using `free()` |
| `04_realloc.c` | Resizing previously allocated memory using `realloc()` |

## Concepts covered
- `malloc()` — allocates a block of memory, returns a void pointer, uninitialized values
- `calloc()` — allocates contiguous memory, initializes all blocks to 0
- `free()` — releases allocated memory back to the system
- `realloc()` — resizes a previously allocated memory block
- Why manual memory management matters — no garbage collector in C, unlike higher-level languages

- # C Dynamic Memory Allocation - Practice Set (Chapter 11)

Solutions to 6 practice problems on dynamic memory allocation from The Ultimate C Handbook.

## Problems

| # | File | Problem |
|---|------|---------|
| 1 | `01_problem1.c` | Dynamically create an array of size 6 using `malloc()` |
| 2 | `02_problem2.c` | Store 6 user-entered integers in the array from Problem 1 |
| 3 | `03_problem3.c` | Solve Problem 1 using `calloc()` |
| 4 | `04_problem4.c` | Create array of 5 integers, resize to 10 using `realloc()` |
| 5 | `05_problem5.c` | Multiplication table of 7 (up to 10), resized to 15 using `realloc()` |
| 6 | `06_problem6.c` | Solve Problem 4 using `calloc()` |

## Concepts covered
- Dynamic array creation with `malloc()` and `calloc()`
- Taking user input into dynamically allocated memory
- Resizing memory blocks at runtime with `realloc()`
- Difference between `malloc` (uninitialized) and `calloc` (zero-initialized)

## How to run
```bash
gcc <filename>.c -o output
./output
```

## Status
✅ Chapter 11 practice set complete — malloc, calloc, and realloc.
