
#include "raylib.h"


int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1700;
    const int screenHeight = 1000;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    Rectangle mainScene = { 250, 150, 1200, 800 };
    Rectangle repMeter = { 1000, 35, 600, 75 };
    Rectangle enrgMeter = { 20, 400, 75, 500 };
    

    Image actorImg;
    Texture2D actorTexture;
    actorImg = LoadImage("ref/goku.png");
    actorTexture = LoadTextureFromImage(actorImg);
    int tempX = 50, tempY = 50;


    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------




        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);

        

        DrawRectangleGradientEx(mainScene, LIGHTGRAY, DARKGRAY, RAYWHITE, LIGHTGRAY); DrawRectangleLinesEx(mainScene, 10, DARKPURPLE);
        DrawRectangleLinesEx(repMeter, 5, DARKGREEN); DrawText("REPUTATION", 1400, 15, 25, DARKGREEN);
        DrawRectangleLinesEx(enrgMeter, 5, DARKGREEN); DrawText("ENERGY", 15, 950, 25, DARKGREEN);
        
        


        DrawTexture(actorTexture, 390, 500, WHITE);
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}