# Define the compiler and flags for GBA development
CC = C:/devkitPro/devkitARM/bin/arm-none-eabi-gcc
CFLAGS = -mthumb-interwork -marm -mcpu=arm7tdmi -O2 -Wall -I"C:/devkitPro/libgba/include"
LDFLAGS = -specs=gba.specs -L"C:/devkitPro/libgba/lib"

# Set the target name and source file(s)
TARGET = MyGBAGame
SOURCES = src/main.c

# Default build rule
all:
	$(CC) $(CFLAGS) $(SOURCES) $(LDFLAGS) -o build/$(TARGET).gba

# Clean rule to delete compiled output
clean:
	rm -f build/*.gba
