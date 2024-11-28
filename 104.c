#include <stdio.h>

enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE,
    PURPLE,
    BLACK,
    WHITE
};

void displayColorCode(enum Color color) {
    switch (color) {
        case RED:
            printf("Hexadecimal code for RED is #FF0000\n");
            break;
        case GREEN:
            printf("Hexadecimal code for GREEN is #00FF00\n");
            break;
        case BLUE:
            printf("Hexadecimal code for BLUE is #0000FF\n");
            break;
        case YELLOW:
            printf("Hexadecimal code for YELLOW is #FFFF00\n");
            break;
        case ORANGE:
            printf("Hexadecimal code for ORANGE is #FFA500\n");
            break;
        case PURPLE:
            printf("Hexadecimal code for PURPLE is #800080\n");
            break;
        case BLACK:
            printf("Hexadecimal code for BLACK is #000000\n");
            break;
        case WHITE:
            printf("Hexadecimal code for WHITE is #FFFFFF\n");
            break;
        default:
            printf("Unknown color\n");
    }
}

int main() {
    enum Color color = RED;
    displayColorCode(color);

    color = GREEN;
    displayColorCode(color);

    color = BLUE;
    displayColorCode(color);

    return 0;
}
