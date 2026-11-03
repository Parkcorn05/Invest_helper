#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main(void) {
    printf("Hello World!");
    return 0;
}