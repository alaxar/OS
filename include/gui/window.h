#ifndef WINDOW_H_HEADER
#define WINDOW_H_HEADER

#include "../../include/types.h"
#include "../../include/gui/screen.h"
// #include "fonts.h"

typedef struct WINDOW {
    uint32_t window_id;
    uint8_t caption;
    int x, y;
    int width, height;
    struct RECT *rect;
    struct BITMAP *bitmap;
    struct WINDOW *child;
} WINDOW;


typedef struct RECT {
    int x, y;
    int height, width;
} RECT;

typedef struct BITMAP {
    int x, y;
    unsigned char *data;
} BITMAP;

extern struct WINDOW Window;
extern struct RECT Rect;
extern struct BITMAP Bitmap;
extern struct WINDOW TitleBar;

void InitWindow();
void DrawRectangle(int x, int y, int height, int width, int color);
void DrawBackground(int color);
void DrawWindow(int x, int y, int width, int height, uint8_t *title, uint32_t window_id);
void DrawText(int x, int y, uint8_t *text);
void VerticalRetrace();
#endif