#include <windows.h>
#include <stdio.h>
int main() {
    HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hout,10);
    COORD Pos;
    int height = 80;
    int width = 24;
    Pos.X = 0;
    Pos.Y = 0;
    int p = 1;
    system("mode 80,24");
    for (int i = height / 2, q = height / 2 - 1; i < height; i++, q--) {
        for (int j = 0; j < width; j++) {
            Pos.X = i;
            SetConsoleCursorPosition(hout, Pos);
            printf("#");
            Pos.X = q;
            SetConsoleCursorPosition(hout, Pos);
            printf("#");
            Pos.Y += p;
            Sleep(12);
        }
        p *= -1;
        Pos.Y += p;
    }
    getchar();
    return 0;
}