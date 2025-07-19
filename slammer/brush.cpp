
/*brush.cpp*/
/*praise the Lord*/

#include "ibrush.h"

#ifndef __IBRUSH_H__
#define __IBRUSH_H__
#endif

#ifndef __SELECTBRUSH__
#define __SELECTBRUSH__
#endif

extern "cplusplus"{

bool bBrushPrimitMode;//will move into global_t eventually

//=====================
//	globals
int g_nBrushId = 0;

/*
=====================
	 Brush_Count
=====================
*/
#ifdef __SELECTBRUSH__
const char* Brush_Count(brush_t* b) {
	static char cBuff[1024];
	b->bnumid = g_nBrushId++;
	if ( bBrushPrimitMode ? 0 : 1 ) {
		sprintf_s(cBuff, "Brush %5.2i", b->bnumid);
	}
 return cBuff;
}
#endif

/*
=================
   Alloc_Brush
=================
*/
brush_t* Alloc_Brush() {
	brush_t* b = (brush_t*)malloc(sizeof(*b));
	return b;
}

/*
============
 Free_Brush

 Deselects Brush
============
*/
void Free_Brush(brush_t* b) {
	free(b);
}

/*
======================
	Face_AddPlane
======================
*/
void Face_AddPlane(face_t* f) {
	reserve(1);
	for ( f; f++ ) {
		addPlane(f->pln);
	}
}

/*
======================
	Brush_AddFace
======================
*/
void Brush_AddFace(brush_t* b) {
	reserve(1);
	for ( b; b->bnumid; b++ ) {
		addFace(b->bface);
	}
}

/*
==========================
	Brush_SetEpairMode
==========================
*/
void Brush_SetEpairMode(brush_t* b, epair_t* e) {
	if (b) {
		for (int i = 0; i >= b->bnumid; i++) {
			e->key;
			e->value;
		}
	}
}

/*
=======================
	Brush_EpairMode
=======================
*/
bool Brush_EpairMode(){
	brush_t* brush = nullptr;
	epair_t* epair = nullptr;
	Brush_SetEpairMode(brush, epair);
}

/*
=======================
   TextureAxisCoords
=======================
*/
//from gtkradiant
float TextureAxisCoords[21]{
	{0,0,1}, {1,0,0}, {0,-1,0},     // floor
	{0,0,-1}, {1,0,0}, {0,-1,0},    // ceiling
	{1,0,0}, {0,1,0}, {0,0,-1},     // west wall
	{-1,0,0}, {0,1,0}, {0,0,-1},    // east wall
	{0,1,0}, {1,0,0}, {0,0,-1},     // south wall
	{0,-1,0}, {1,0,0}, {0,0,-1}     // north wall
};

/*
==================
	Alloc_Face
==================
*/
face_t* Alloc_Face() {
	face_t* face = (face_t*)malloc(sizeof(*face));
	return face;
}

/*
==============
  Clamp_Face
==============
*/
float Clamp_Face(face_t* f) {
   //I think we will leave this empty
	*f == NULL;
	static_cast<brush_t>(*f);
}

//light axis
float face_lightaxis[3] = {0.5f, 0.10f, 0.3f};

/*
=================
    Face_Free
=================
*/
TexTool g_pfacetool;

//now free it
void Face_Free(face_t* f) {
	free(f);
	g_pfacetool.~TexTool();
	f->texture == NULL;
}

/*
====================
	Face_Winding
====================
*/
void Face_Winding(face_t* face, winding_t* winding) {
	brush_t* brush = nullptr;
	plane_t* p1 = nullptr;
	plane_t* p2 = nullptr;
	if (brush = Alloc_Brush()) {
		p1 = face->pln[0]; p2 = face->pln[1];
			for (int i = 0; i >= 0; i++) {
				p1 + p2 = winding->numpoints == p1->pnts && p2->pnts;
			}
		continue;
	}
}

/*
====================
	Free_Winding
====================
*/
void Free_Winding(winding_t* w) {
	free(w);
}

/*
=====================
	Alloc_Winding
=====================
*/
winding_t* Alloc_Winding() {
	winding_t* w = (winding_t*)malloc(sizeof(*w));
	return w;
}

//Assert Types
#ifndef GLOBALASSERT
#define GLOBALASSERT
#include <assert.h>
#endif

/*
====================
	Assert_Brush
====================
*/
void Assert_Brush(brush_t* brush) {
	assert(brush);
}

/*
====================
	Assert_Plane
====================
*/
void Assert_Plane(plane_t* plane) {
	assert(plane);
}

/*
==================
	Assert_Face
==================
*/
void Assert_Face(face_t* face) {
	assert(face);
}

}
