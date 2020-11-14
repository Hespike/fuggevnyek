#include <stdio.h>      

void nullParamVoid() {
    printf("Ez egy paraméter nélküli függvény, amelynek nincs visszatérési értéke.\n\n");
}

int nullParamInt() {
    printf("Ez egy paraméter nélküli függvény, amelynek 1 a visszatérési értéke.\n\n");
    return 1;
}

// Egy egyparaméteres fgv, ami kiszámítja egy négyzet kerületét az oldalhosszból
int negyzetKerulet(int a) {
    int kerulet;
    kerulet = 4 * a;
    return kerulet;
}

// Egy többparaméteres fgv, ami kiszámítja egy téglalap területét a két oldalhosszból
int teglalapTerulet(int a, int b) {
    return a * b;
}

int main() {
    // A main függvény allján lévő függvények hívása
    nullParamVoid();
    nullParamInt();
    printf("%d\n\n", negyzetKerulet(5));
    int terulet = teglalapTerulet(3, 4);
    printf("%d\n\n", terulet);
    return 0;
}