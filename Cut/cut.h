#ifndef CUT_H
#define CUT_H

#include "../type/image.h"

Rect CutBorder(Image image);
Image cutLine(Image image, Rect rect);
void DrawRect(Rect rect, Image *image);
void CutChar(Image *image, Rect line, Image *result);
void DrawRect2(Rect rect, Image *image);

#endif
