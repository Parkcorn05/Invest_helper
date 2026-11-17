#include <stdio.h>
#include <windows.h>

//===구조체 정의====

typedef struct Button {
    int x, y;
    char* name;
    relation buttonRelation;
} button;

typedef struct Relation {
    void* up;
    void* down;
    void* left;
    void* right;

    void* parent;
    void* child;
} relation;

//===함수 선언====

void gotoxy(int x, int y);
void text(int x, int y, char* message);

//===메인 함수====
button* buttons = NULL;

int main(void) {
    return 0;
}

//===하위 함수====

void gotoxy(int x, int y) {
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void text(int x, int y, char* message) {
    gotoxy(x,y);
    puts(message);
}

//===오브젝트 생성====

button mkButton(int x, int y, char* name) { 
    button button;
    button.x = x;
    button.y = y;
    button.name = name;

    return button;
}

void insertButton(button* buttons, button button) {
    button* tempAddr = NULL;

    if(buttons == NULL) buttons = &button;
    else {
        tempAddr = buttons
        if (button.x > tempAddr.x) tempAddr = (tempAddr.buttonRelation).right;
        else if (button.y > tempAddr.y) tempAddr = (tempAddr.buttonRelation).left;
        
        while()
    }
}

