#include <iostream>
#include <raylib.h>
#include <vector>
#define HEIGHT 600
#define WIDTH 600

int main() {
    InitWindow(WIDTH, HEIGHT, "Raytracer");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(WHITE);
        EndDrawing();
    }
    CloseWindow();
}

