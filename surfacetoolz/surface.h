//surface.h
//Praise be to the Lord!

#ifndef SURFACE_H
#define SURFACE_H

/*
    Surfaces cannot be selected or have a texture applied to them

    possible pointers:
    - surface_t* s; commonly used
    - surface_t* srf;
    - surface_t* sface; if converted to a face
    - surface_t* pSrf;
    - surface_t* surface;

    elements:
    - points[4]
    - bSelectable
    - sva
    - svb
    - svc
    - svd
*/

#include "mathlib.h"

typedef struct surface_s{

typedef struct surface_s * owner;
typedef struct surface_s prev;//use &
typedef struct surface_s ** next;

float points[4];
bool bSelectable;//shouldnt be true, if it is its automatically converted to a face


vec3_t sva;
vec3_t svb;
vec3_t svc;
vec3_t svd;

}surface_t;

#endif
