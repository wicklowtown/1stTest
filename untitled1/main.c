#include "raylib.h"

int main() {
    // Initialize the Window
    InitWindow(1920, 1080, "Fenian Ram 3000");
    // changing this for the test commit

    // Setting the Frames Per Second
    SetTargetFPS(60);
// another for the testing
// please work
    // The Game Loop
    while (!WindowShouldClose() /*WindowShouldClose returns true if esc is clicked and closes the window*/) {

        // Setup Canvas
        BeginDrawing();
        // Clear canvas to a specific color to avoid flicker
      ClearBackground (BLUE);

        // Here goes all the Game Logic

        // teardown Canvas
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
