#include <stdio.h>
#include <windows.h>

<<<<<<< HEAD
=======
void gotoxy(int x, int y) {
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

>>>>>>> 99bb75ce832242be9d55c0ba4f99ee2b127cf72a
int main(void) {
    printf("Hello World!");
    return 0;
}