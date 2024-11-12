#include <gba.h>

int main() {
    // Set the display mode to Mode 3 (bitmap mode) and enable background 2
    REG_DISPCNT = MODE_3 | BG2_ENABLE;

    // Cast MODE3_FB to (volatile u16*) so that each pixel can be modified
    volatile u16* screen = (volatile u16*)MODE3_FB;

    // Rectangle parameters
    int rectX = 50;        // X position of the rectangle (top-left corner)
    int rectY = 40;        // Y position of the rectangle (top-left corner)
    int rectWidth = 100;   // Width of the rectangle
    int rectHeight = 60;   // Height of the rectangle
    u16 colorx = RGB8(0, 255, 0);  // Rectangle color (green)

    // Draw the rectangle by setting pixels in the specified area
    for (int x = 0; x < rectWidth; x++) {
        for (int y = 0; y < rectHeight; y++) {
            // Calculate the screen position based on rectX and rectY
            screen[(rectY + y) * 240 + (rectX + x)] = colorx;
        }
    }
//error
    // Infinite loop to keep the program running
    while (1);
}
