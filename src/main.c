#include <gba.h>

int main() {
    // Set the display mode to Mode 3 (bitmap mode) and enable background 2
    REG_DISPCNT = MODE_3 | BG2_ENABLE;

    // Cast MODE3_FB to (volatile u16*) so that each pixel can be modified
    volatile u16* screen = (volatile u16*)MODE3_FB;

    // Fill the screen with a color (e.g., bright red)
    for (int x = 0; x < 240; x++) {
        for (int y = 0; y < 160; y++) {
            screen[y * 240 + x] = RGB8(255, 0, 0);  // Set color to red
        }
    }

    // Infinite loop to keep the program running
    while (1);
}
