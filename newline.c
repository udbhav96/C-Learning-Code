#include <stdio.h>

int read_next_line() {
    int ch;
    int flag = 0;
    ch = getchar();
    while (ch != EOF && ch != '\n') {
        ch = getchar();
        flag = 1;
    }
    return (flag || ch == '\n');
}

int read_all_line() {
    int lincnt = 0;
    int isvalid;
    while (1) {
        isvalid = read_next_line();
        if (isvalid == 0) {
            break; 
        }
        lincnt = lincnt + isvalid;
    }
    return lincnt;
}

int main() {
    int line_count = read_all_line();
    printf("Total lines: %d\n", line_count);
    return 0;
}
/*
This program counts the number of lines in the input provided via stdin.

1. The `read_next_line` function reads characters from stdin until it encounters a newline ('\n') or EOF.
   - It returns 1 if a line (even empty) is read, and 0 if EOF is encountered without reading anything.

2. The `read_all_line` function repeatedly calls `read_next_line` to count the total number of lines.
   - It stops when `read_next_line` returns 0 (EOF).
   - It returns the total line count.

3. The `main` function calls `read_all_line` and prints the total number of lines.

Example Input:
Hello
World

Output:
Total lines: 2
*/