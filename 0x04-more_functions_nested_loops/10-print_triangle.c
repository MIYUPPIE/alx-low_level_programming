void print_triangle(int size)
{
    if (size <= 0) {
        _putchar('\n');
        return;
    }
    int i, j;
    for (i = 1; i <= size; i++) {
        for (j = 1; j <= i; j++) {
            _putchar('#');
        }
        _putchar('\n');
    }
}

