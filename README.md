# C Dynamic Memory Allocation

Programs covering dynamic memory allocation in C — allocating, resizing, and freeing memory at runtime.

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

## How to run
```bash
gcc <filename>.c -o output
./output
