#include <iostream>
#include <raylib.h>

using namespace std;

int main () {

    const int screenWidth = 900;
    const int screenHeight = 500;
    int ballX = 100;
    int ballY = 100;
    int ballSpeedX = 5;
    int ballSpeedY = 5;
    int ballRadius = 15;

    InitWindow(screenWidth, screenHeight, "My first Pong program!");
    SetTargetFPS(60);

    while (WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(BLACK);
        ballX += ballSpeedX;
        ballY += ballSpeedY;

        if(ballX + ballRadius >= screenWidth  || ballX - ballRadius <= 0)
        {
            ballSpeedX *= -1;
        }

        if(ballY + ballRadius >= screenHeight  || bally - ballRadius <= 0)
        {
            ballSpeedY *= -1;
        }

        DrawCircle(ballX,ballY,ballRadius, WHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}