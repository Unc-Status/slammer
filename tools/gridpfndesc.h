//gridpfndesc.h
//Praise be to the Lord Jesus Christ!
//John 3:16

#ifndef GRID_PFN_DESC_H
#define GRID_PFN_DESC_H

#include "stdafx.h"

#define GRID_PEN_DRAW_COLOR float

//use prev macro for both of these
#define GRID_PEN_QUE_COLOR float
#define GRID_PEN_SELECT_COLOR float

//
//Colors
//
GRID_PEN_DRAW_COLOR Pen_Draw_Red[3] = { 1.0f, 0.0f, 0.0f };
GRID_PEN_DRAW_COLOR Pen_Draw_Green[3] =  { 0.0f, 1.0f, 0.0f };
GRID_PEN_DRAW_COLOR Pen_Draw_Blue[3] = { 0.0f, 0.0f, 1.0f };
GRID_PEN_DRAW_COLOR Pen_Draw_White[3] = { 1.0f, 1.0f, 1.0f };
GRID_PEN_DRAW_COLOR Pen_Draw_Black[3] = { 0.0f, 0.0f, 0.0f };

//
//Functions
//
typedef void(*PFN_ALLOC_PEN_COLOR)();
typedef void(*PFN_FREE_PEN)(GRID_PEN_DRAW_COLOR);//only for selected
typedef bool(*BEGIN_PEN_DRAW)(GRID_PEN_DRAW_COLOR, brush_t* b, bool bSel);
typedef bool(*QUE_DRAW)(GRID_PEN_DRAW_COLOR);

#endif
