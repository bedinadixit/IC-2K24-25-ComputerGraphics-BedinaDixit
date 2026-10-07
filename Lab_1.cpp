#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;

    char path[] = "";
    initgraph(&gd, &gm, path);

    // 1. Straight Line
    line(100, 100, 300, 100);

    // 2. Circle
    circle(200, 220, 70);

    // 3. Rectangle
    rectangle(400, 120, 600, 250);

    // 4. Triangle
    line(400, 400, 500, 280);
    line(500, 280, 600, 400);
    line(600, 400, 400, 400);

    // Wait for a key press
    getch();

    // Close graphics mode
    closegraph();

    return 0;
}
