
#include "raylib.h"
#include "Game.h"



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
    
    //Initialize placeholder images
    Image temp_goku, temp_vegeta, temp_picollo, temp_gohan;
    
    //Initialize textures
    Texture2D texture_goku;
    Texture2D texture_vegeta;

    //Load in Textures
    temp_goku = LoadImage("ref/goku.png");
    temp_vegeta = LoadImage("ref/vegeta.png");
    ImageResize(&temp_vegeta, temp_goku.width, temp_goku.height);

    texture_goku = LoadTextureFromImage(temp_goku);
    texture_vegeta = LoadTextureFromImage(temp_vegeta);


    int tempX = 50, tempY = 50;

    //Stabby stabby;
    


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
        
        
        

        DrawTexture(texture_goku, 390, 500, WHITE);
        DrawTexture(texture_vegeta, 1250, 500, WHITE);
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}