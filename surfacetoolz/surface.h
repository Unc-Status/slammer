//surface.h
//Praise be to the Lord!

#ifndef SURFACE_H
#define SURFACE_H

#include "mathlib.h"

typedef struct surface_s{

typedef struct surface_s * owner;
typedef struct surface_s prev;//use &
typedef struct surface_s ** next;

float points[4];
bool bSelectable;
    //winding_t* surfacewinding;
}surface_t;

#endif
