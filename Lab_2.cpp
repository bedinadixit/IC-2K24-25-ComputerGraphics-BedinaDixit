
#include <graphics.h>
#include <conio.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int x1, y1, x2, y2;

    // Input starting and ending points
    cout << "Enter starting point (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter ending point (x2 y2): ";
    cin >> x2 >> y2;

    // Calculate differences
    int dx = x2 - x1;
    int dy = y2 - y1;

    // Calculate number of steps
    int steps = max(abs(dx), abs(dy));

    // Calculate increments
    float x_increment = 0;
    float y_increment = 0;

    if (steps != 0)
    {
        x_increment = (float)dx / steps;
        y_increment = (float)dy / steps;
    }

    // Initialize graphics mode
    int gd = DETECT, gm;
    char path[] = "";

    initgraph(&gd, &gm, path);

    // Set background color
    setbkcolor(BLACK);
    cleardevice();

    // Initialize coordinates
    float x = x1;
    float y = y1;

    // DDA Line Drawing Algorithm
    for (int i = 0; i <= steps; i++)
    {
        putpixel(round(x), round(y), WHITE);

        x += x_increment;
        y += y_increment;
    }

    // Wait for a key press
    getch();

    // Close graphics mode
    closegraph();

    return 0;
}

