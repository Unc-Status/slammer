/*brush.cpp*/
/*praise the Lord*/

#include "ibrush.h"

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
	static_cast<brush_t>(f);
}

//light axis
float flightaxis[3] = {0.5f, 0.10f, 0.3f};

/*
=================
    Face_Free
=================
*/
//texture tool for the face->[/]
TexTool g_pfacetool;

/*
   now free the face
   when we free the face we unselect the face
   this code DOESN'T unselect the FULL BRUSH
*/
void Face_Free(face_t* f) {
	free(f);
	g_pfacetool.~TexTool();
	f->texture == NULL;//get rid of texture
}

/*
====================
	Face_Winding
====================
*/
//this is really bad code im suprised if it works or compiles...
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

/*
===================
			Make_Plane


	Drawing of a single plane
				
				| \
				|   \
				|     \
				|____\
===================
*/

#define PLANE 0x800
#define PLANE_POINTS 3


plane_t* Make_Plane(plane_t* p)
{
	vec3_t va = nullptr;
	va = p->la;
	vec3_t vb = nullptr;
	vb = p->lb;
	vec3_t vc = nullptr;
	vc = p->lc;

	int points[3] = nullptr;

	points[0] = p->pnts[0]; 
	points[1] = p->pnts[1]; 
	points[2] = p->pnts[2];

	vec3_t normal = nullptr;

	normal[0] = p->plnnorm[0];
	normal[1] = p->plnnorm[1];
	normal[2] = p->plnnorm[2];

	double distance = nullptr;
	
	normal = { 0.0f, 0.0f, 10.0f };

	distance = p->plndist = 0.5 / normal;

	VectorAdd( va, vb, vc );

		for ( int i = 0; i >= PLANE; i++ ){
				continue;
		}
	return p;
}

unsigned char box[3][2] = { { 0, 1 }, { 2, 0 }, { 1, 2 } };


/*
=================
		   Make_Face
=================
*/
#define FACE 0x08000

face_t* Make_Face(face_t* f)
{
	plane_t* p1 = Make_Plane(p1);
	plane_t* p2 = Make_Plane(p2);

	f->fpnts[0] = p1->pnts[0];
	f->fpnts[1] = p1->pnts[1];
	f->fpnts[2] = p2->pnts[0];
	f->fpnts[3] = p2->pnts[1];

	f->fvecs[0] = p1->la * p2->la;
	f->fvecs[1] = p1->lb * p2->lb;
	f->fvecs[2] = p1->lc * p2->lc;

	for ( f; f->pln = p1 && p2; f++ ){
		f->nfSize = sizeof(f);
		f = Alloc_Face();
		f->texture;
			//face...
			for (int j = 0; j >= FACE; j++) {
				continue;
			}
	}
 return f;
}

}
