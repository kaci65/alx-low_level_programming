# 0x0B-malloc_free
## 0-create_array.c
### A function that creates an array of chars, and initializes it with a specific char.

    Returns NULL if size = 0
    Returns a pointer to the array, or NULL if it fails

## 1-strdup.c
### A function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

    The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
    Returns NULL if str = NULL
    On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

## 2-str_concat.c
### A function that concatenates two strings.

    The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
    if NULL is passed, treat it as an empty string
    The function should return NULL on failure

## 3-alloc_grid.c
### A function that returns a pointer to a 2 dimensional array of integers.

    Each element of the grid should be initialized to 0
    The function should return NULL on failure
    If width or height is 0 or negative, return NULL

## 4-free_grid.c
### A function that frees a 2 dimensional grid previously created by your alloc_grid function.

    Note that we will compile with your alloc_grid.c file. Make sure it compiles

## 5-argstostr.c
### A function that concatenates all the arguments of your program.

    Returns NULL if ac == 0 or av == NULL
    Returns a pointer to a new string, or NULL if it fails
    Each argument should be followed by a \n in the new string
