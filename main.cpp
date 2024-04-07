#include <iostream>
#include <raylib.h>

using namespace std;

int main () {

    const int screenWidth = 900;
    const int screenHeight = 500;
    int ballX = 100;
    int ballY = 100;
    int ball_speed_x = 5;
    int ball_speed_y = 5;
    int ball_radius = 15;

    InitWindow(screenWidth, screenHeight, "My first Pong program!");
    SetTargetFPS(60);

    while (WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(BLACK);
        ballX += ball_speed_x;
        ballY += ball_speed_y;

        if(ballX + ball_radius >= screenWidth  || ballX - ball_radius <= 0)
        {
            ball_speed_x *= -1;
        }

        if(ballY + ball_radius >= screenHeight  || bally - ball_radius <= 0)
        {
            ball_speed_y *= -1;
        }

        DrawCircle(ballX,ballY,ball_radius, WHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}