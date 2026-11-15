#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

// Вариант 3
// Закрашенный прямоугольный треугольник с катетами a и b, нарисованный заданным символом
int main() {
    setlocale(LC_CTYPE, "RUS");
    char symbol;
    int a, b;
    int width;
    int again; // ответ на вопрос
    do {
        puts("Символ для рисования:");
        scanf(" %c", &symbol);
        puts("Катет a (по горизонтали, в символах) и катет b (по вертикали, в строках):");
        scanf("%d %d", &a, &b);
        if (a <= 0 || b <= 0)
            puts("Катеты должны быть больше 0");
        else {
            for (int row = 1; row <= b; row++) {
                width = (a * row + b / 2) / b; // округление до целого
                if (width < 1)
                    width = 1;
                for (int col = 1; col <= width; col++)
                    putchar(symbol);
                putchar('\n');
            }
        }
        puts("Продолжить? (Да - любое число, Нет - 0):");
        scanf("%d", &again);
    } while (again != 0);
    return 0;
}
