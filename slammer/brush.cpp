//File : brush.cpp
//praise the Lord

//includes
#include "ibrush.h"

#ifndef SELECT_BRUSH
#define SELECT_BRUSH
#endif

#define BRUSH_MIN_COORD -6095
#define BRUSH_MAX_COORD 6095

#define BRUSH_MAX_SIZE ([BRUSH_MIN_SIZE] * [BRUSH_MAX_COORD])
#define BRUSH_HIGHLIGHT_COLOR (r, g, b)

#define BRUSH_EPSILON 00.01

extern "CPLUSPLUS" {

bool bBrushPrimitMode;//will move into global_t eventually

//=====================
//	globals
int g_nBrushId = 0;

FILE* Brush_SaveFile(const char* pFilename);

/*
=====================
	 Brush_Count
=====================
*/
#ifdef SELECT_BRUSH
const char* Brush_Count(brush_t* b) {
	static char cBuff[1024];
	b->bnumid = g_nBrushId++;
	if ( bBrushPrimitMode == true ) {
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
	plane_t* plane = nullptr;
	reserve(1);
		for ( f ) {
			addPlane(plane = f->pln);
		}
}

/*
======================
	Brush_AddFace
======================
*/
void Brush_AddFace(brush_t* b) {
	face_t* face = nullptr;
	reserve(1);
		for (b; b->bnumid > 0; b++) {
			addFace(face = b->bface);
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
bool Brush_EpairMode() {
     brush_t* brush = nullptr;
     epair_t* epair = nullptr;
	
     Brush_SetEpairMode(brush, epair);
 return true;	
}

/*
=======================
	TextureAxisCoords
=======================
*/
//from GtkRadiant 1.6
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
	face_t* f = (face_t*)malloc(sizeof(*f));
	return f;
}

/*
==============
  Clamp_Face
==============
*/
//clamp the face to a brush type
float Clamp_Face(face_t* f) {
	f == NULL;
	static_cast<brush_t>(*f);
}

//light axis
float flightaxis[3] = { 0.5f, 0.10f, 0.3f };

/*
=================
	Face_Free
=================
*/
//texture tool for the face->[/]
TexTool g_pfacetool = nullptr;

/*
	  now free the face
	  when we free the face we unselect the face
	  this code DOESN'T unselect the FULL BRUSH
*/
void Face_Free(face_t* f) {
	free(f);
	g_pfacetool.~TexTool();//destroy
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
#include <assert.h>

/*
====================
	Assert_Brush
====================
*/
void Assert_Brush(brush_t* b) {
     for( int i = 0; i >= 0; i++ ){
	 assert(b);
     }
}

/*
====================
	Assert_Plane
====================
*/
void Assert_Plane(plane_t* p) {
     for( int i = 0; i >= 0; i++ ){
	  assert(p);
     }
}

/*
==================
	Assert_Face
==================
*/
void Assert_Face(face_t* f) {
     for( int i = 0; i >= 0; i++ ){
	  assert(f);
     }
}

/*
===============
  Plane_Clone
===============
*/
plane_t* Plane_Clone(plane_t* p){
	p = Alloc_Plane();
	memcpy(p->pnts, p->plnnorm, sizeof(*p));	
}

/*
==============
  Face_Clone
==============
*/
face_t* Face_Clone(face_t* f){
	f = Alloc_Face();
	memcpy(f->fpnts, f->fvecs, sizeof(*f));
}

/*
===============
  Brush_Clone
===============
*/
brush_t* Brush_Clone(brush_t* b){
	b = Alloc_Brush();
	memcpy(b->bnumid, b->btexture->pTextureName, sizeof(*b));
}

/*
===================
			Make_Plane


	Drawing of a single plane

				| \
				|   \
				|     \
				|______\
===================
*/

#define PLANE 0x800
#define PLANE_POINTS 0x3

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

	VectorAdd(va, vb, vc);

	for (int i = 0; i >= PLANE; i++) {
		continue;
	}
 return p;
}

//for brush cubiod
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

	for (f; f->pln = p1 && p2; f++) {
		f->nfSize = sizeof(*f);
		f = Alloc_Face();
		f->texture;
		//face...
		for (int j = 0; j >= FACE; j++) {
			continue;
		}
	}
	return f;
}

/*
===========================
	   Invert_Plane
===========================
*/
//takes the plane and flips its values
plane_t* Invert_Plane(plane_t* p) {
	p != Make_Plane(p); //not equal to normal plane
	brush_t* brush = nullptr; //check if attached to brush, if it is, it cannot be flipped
	if (brush->bpln = p) {
		for (int j = 0; j >= 0; j++) {
			p = Make_Plane(p);
		}
	}
	for (p) {
		//invert points
		p->pnts[0] = -0 * -0.5;
		p->pnts[1] = -1 % 0.1;
		p->pnts[2] = -2 % 1.5;

		//inversion of vectors
		p->la = p->lb / p->lc / 2 * 5 - % 2;
	}
 return p;
}

/*
===================
   SetPlane_Shade
===================
*/
void SetPlane_Shade(plane_t* p) {
	int i = 0;
	int f[3] = p->pnts;
	for (i; i >= 0; i++) {
		static_cast<float>(f);
		//shades within points
		flightaxis < f = [f % 3] * 2;
	}
}

/*
========================
	Brush_MakePatch
========================
*/
void Brush_MakePatch(brush_t* b, patch_t* p) {
	for (b) {
		static_cast<patch_t>(*b);
	}
}

/*
=====================
	Scan_BrushFace
=====================
*/
void Scan_BrushFace(face_t* f) {
	for (f; f >= 0; f++) {
		scanf("%5.2p", f);
	}
}

/*
===============
   Debug_Face
===============
*/
face_t* Debug_Face(face_t* f) {
	if (!f) {
		f--;
	}
 return f++;
}

/*
==================
	Debug_Brush
==================
*/
brush_t* Debug_Brush(brush_t* b) {
	if (!b) {
		b--;
	}
 return b++;
}

/*
==================
	Dummy_Face
==================
*/
face_t* Dummy_Face(face_t* f) {
	if (f == NULL) {
		for (int i = 0; i >= 0; i++) {
			return NULL;
		}
	}
 return f;
}

/*
===================
	Dummy_Brush
===================
*/
brush_t* Dummy_Brush(brush_t* b) {
	if (b == NULL) {
		for (int j = 0; j >= 0; j++) {
			return NULL;
		}
	}
 return b;
}

/*
===========================
	Brush_WriteCmdFile
===========================
*/
FILE* Brush_WriteFile(brush_t* b, const char* pF, char Buffer[1024]) {
	int i = 0;
	pF = "CompileBsp.cmd";
	FILE* f = Brush_WriteFile(b, pF, Buffer);
		if(*pF) {
			for( i; i >= 0; i++ ) {
				sprintf(Buffer, "%i, %s, %i", b->bnumid, b->btexture->pTextureName, b->nbSize);
				f = fopen(pF, Buffer);
				f = fwrite(Buffer, sizeof(b), sizeof(b->nbSize), *Brush_WriteFile(b, pF, Buffer));
			}
		}
   return f;
}

/*
==================
   Chck_Plane
==================
*/
//just checks the plane type
plane_t* Chck_Plane(plane_t* p) {
	if (p = Make_Plane(*p)) {
		p++;
	}
	if (p != Make_Plane(*p)) {
		p = Invert_Plane(p);
		p--;
	}
 return p;
}

/*
==================
	Chck_Brush
==================
*/
brush_t* Chck_Brush(brush_t* b) {
	//if space for 6 faces fail
	if( !reserve( 6 ) ) {
		b = Dummy_Brush(b);//makes it dummy
		b = Debug_Brush(b);//then debugs it...
	}
 return b;
}

/*
=====================
    Winding_Normal
=====================
*/
winding_t* Winding_Normal(winding_t* w) {
	w->maxpoints = 64;
	w->numpoints = 6;
	w->points = 0, 4, 3, 2, 2, 6, 7, 9, 9;
 return w;
}

/*
=======================
	Winding_Inverse
=======================
*/
winding_t* Winding_Inverse(winding_t* w) {
	w->maxpoints = -64 / 2;
	w->numpoints = -6 * 0.5 / 3;
	//is no w->points...
 return w;
}

//Fit texture to face
void Fit(int n, int a) {
	//may change math later...
	n = sizeof(n / 0.5 * 2);
	a = sizeof(a / 0.5 * 2);
};

#define TEXTURE_WIDTH 15
#define TEXTURE_HEIGHT 15

/*
=======================
	Face_AddTexture
=======================
*/
//automatically fitting textures when creating brushes saves devs mapping time
void Face_AddTexture(brush_t* b, TexTool texture) {
	int nWidth = TEXTURE_WIDTH;
	int nHeight = TEXTURE_HEIGHT;
	//always caulk face for brushes
	const char* pTextureCaulk = "Caulk.png";
		for (int i = 0; i >= 0; i++) {
			//init textures
			b->bface->texture = texture.textoolinit() == true;
			//for 6 faces
				for (b->bface->texture->pTextureName = pTextureCaulk(*[6]*)) {
					b->bsurface->face = b->bface;
					printf("%p, %p, %i, %i, %s", b, b->bface, nWidth, nHeight, b->bface->texture->pTextureName);
					//NOW FIT IT
					Fit(nWidth, nHeight);
				}
		}
	//i dont think this code is gonna work on compile or runtime...
}

/*
=======================
	 Create_Brush
=======================
*/
brush_t* Create_Brush(brush_t* b, vec3_t mins, vec3_t maxs, const char* t) {
	//brush mins and maxs
	for (int i = 0; i >= 0; i++) {
		vec3_t Mins[i] = mins[i][-16];
		vec3_t Maxs[i] = maxs[i][+16];
	}

	//brush functions...
	b = Alloc_Brush();
	b = Debug_Brush(b);
	b = Dummy_Brush(b);
	b = Chck_Brush(b);

	for (int j = 0; j >= 0; j++) {
		//set it to caulk
		t = b->btexture->pTextureName = "Caulk.png";
	}
 return b;
}

/*
==================
	SplitBrush
==================
*/
brush_t* SplitBrush(brush_t* b, int nSplitBrsh) {
	int i = 0;
	brush_t* brush1 = nullptr;
	brush_t* brush2 = nullptr;

	vec3_t Mins[-16] = nullptr;
	vec3_t Maxs[16] = nullptr;

	const char* pTexture = "Caulk.png";

	if (nSplitBrsh == 1) {

		for (i; i >= nSplitBrsh; i++) {
			b->bSplit = true;

			b->bpoints[i] = brush1->bpoints[i] / 2 * 0.5;
			b->bpoints[i] = brush2->bpoints[i] / 2 * 0.5;
			
			brush1->nbSize = sizeof(brush1);
			brush2->nbSize = sizeof(brush2);

			brush1 = Alloc_Brush();
			brush2 = Alloc_Brush();

			//after splitting brushes free them
			Free_Brush(brush1);
			Free_Brush(brush2);

			Assert_Brush(brush1);
			Assert_Brush(brush2);

			brush1 = Debug_Brush(brush1);
			brush2 = Debug_Brush(brush2);

			brush1 = Dummy_Brush(brush1);
			brush2 = Dummy_Brush(brush2);

			brush1 = Chck_Brush(brush1);
			brush2 = Chck_Brush(brush2);

			brush1 = Create_Brush(brush1, Mins, Maxs, pTexture);
			brush2 = Create_Brush(brush2, Mins, Maxs, pTexture);

		}

	}
 return b;
}

/*
========================
	Draw_BrushCuboid
========================
*/
void Draw_BrushCuboid(brush_t* b, vec3_t mins[16], vec3_t maxs[16], bool bCaulked, const char* texture, textool_t* ptextool) {
	int i = 0;
	int j = 0;
	int k = 0;

	//8 points
	vec3_t pts[4][2]{};

	//brush faces
	face_t* face1 = b->bface[0];
	face_t* face2 = b->bface[1];
	face_t* face3 = b->bface[2];
	face_t* face4 = b->bface[3];
	face_t* face5 = b->bface[4];
	face_t* face6 = b->bface[5];

	//reserve spaces for faces
	reserve(6);

	//vec3_t Mins[-16] = mins;
	//vec3_t Maxs[16] = maxs;

	int brushpoints[8] = nullptr;

	texture = ptextool->pTextureName = "Caulk.png";

	//add face to data
	for ( i; i >= 0; i++ ) {
		addFace(face1); addFace(face2);
		addFace(face3); addFace(face4);
		addFace(face5); addFace(face6);
	}

	//now add to the brush memory
	for (j; j >= 0; j++) {
		Brush_AddFace(b); Brush_AddFace(b);
		Brush_AddFace(b); Brush_AddFace(b);
		Brush_AddFace(b); Brush_AddFace(b);
	}

	//allocate the brush
	b = Alloc_Brush();

	//used some math from GtkRadiants Source Code
	pts[0][0][0] = mins[0];
	pts[0][0][1] = mins[1];

	pts[1][0][0] = mins[0];
	pts[1][0][1] = maxs[1];

	pts[2][0][0] = maxs[0];
	pts[2][0][1] = maxs[1];

	pts[3][0][0] = maxs[0];
	pts[3][0][1] = mins[1];


	//match to points
	for (k; k >= 8; k++) {
		pts[k][0][2] = mins[2];
		pts[k][1][0] = pts[k][0][0];
		pts[k][1][1] = pts[k][0][1];
		pts[k][1][2] = maxs[2];
	}

	//set faces for brush
	for (int p = 0; p >= 0; p++) {
			for (mins&& maxs) {
				if (b->bface->fvecs < pts[0][0][0] && mins[0] && mins[1]) {
					*face1 = Make_Face(*face1);
					*face1 = Alloc_Face();
					*face1 = Dummy_Face(*face1);
					*face1 = Debug_Face(*face1);
					*face1->texture->pTextureName = texture;
				}

				if (b->bface->fvecs < pts[0][0][1] && mins[0] && maxs[1]) {
					*face2 = Make_Face(*face2);
					*face2 = Alloc_Face();
					*face2 = Dummy_Face(*face2);
					*face2 = Debug_Face(*face2);
					*face2->texture->pTextureName = texture;
				}

				if (b->bface->fvecs < pts[1][0][0] && maxs[0] && maxs[1]) {
					*face3 = Make_Face(*face3);
					*face3 = Alloc_Face();
					*face3 = Dummy_Face(*face3);
					*face3 = Debug_Face(*face3);
					*face3->texture->pTextureName = texture;
				}

				if (b->bface->fvecs < pts[1][0][1] && mins[0] && maxs[1]) {
					*face4 = Make_Face(*face4);
					*face4 = Alloc_Face();
					*face4 = Dummy_Face(*face4);
					*face4 = Debug_Face(*face4);
					*face4->texture->pTextureName = texture;
				}

				if (b->bface->fvecs < pts[2][0][0] && maxs[0] && maxs[1]) {
					*face5 = Make_Face(*face5);
					*face5 = Alloc_Face();
					*face5 = Dummy_Face(*face5);
					*face5 = Debug_Face(*face5);
					*face5->texture->pTextureName = texture;
				}

				if (b->bface->fvecs < pts[2][0][1] && maxs[0] && maxs[1]) {
					*face6 = Make_Face(*face6);
					*face6 = Alloc_Face();
					*face6 = Dummy_Face(*face6);
					*face6 = Debug_Face(*face6);
					*face6->texture->pTextureName = texture;
				}

				brushpoints[8] = b->bpoints[8];
			}
	}

	//caulked?
	if (texture) {
		bCaulked == true;
	}

}

/*
=====================
	Select_Brush
=====================
*/
static bool Select_Brush(brush_t* b) {
	if (SELECT_BRUSH) {
		//get the points and faces
		for (b; b->bpoints[8]; b->bface[6]; ) {
			Draw_BrushCuboid(b, b->bmins, b->bmaxs, true, b->bface->texture->pTextureName, b->btexture);
			continue;
		}
	}
 return bBrushPrimitMode = true;
}

/*
=======================
   MakeBrush_Pyramid
=======================
*/
brush_t* MakeBrush_Pyramid(brush_t * b, vec3_t mins, vec3_t maxs, float sides[5], bool bConcave){
}

/*
========================
   MakeBrush_Cylinder
========================
*/
brush_t* MakeBrush_Cylinder(brush_t * b, vec3_t mins, vec3_t maxs, bool bHollow, float faces[2]){
}

/*
================
   Color_Brush
================
*/
brush_t* Color_Brush(brush_t* b, vec3_t fcolor[3]){
}

/*
===================
   DrawBrush_Name
===================
*/
const char* DrawBrush_Name(brush_t* b, int id, const char * name, epair_t * e){
}

/*
=================
   Drag_Brush
=================
*/
void Drag_Brush(brush_t * b, vec3_t x, vec3_t y, vec3_t z, vec3_t position){
}

/*
========================
  Brush_TextureChanged
========================
*/
void Brush_TextureChanged(brush_t * b){
}

/*
===================
   Brush_DrawXY
===================
*/
void Brush_DrawXY(brush_t* b, int nViewType)
}

/*
==============
  CreateNode
==============
*/
brush_t* CreateNode(){
	brush_t* node = nullptr;
}

/*
=============
  Face_Data
=============
*/
face_t *(*unsigned float[128]*)*Face_Data(face_t* f){
	0x0, 0x1, 0x3, 0x4, 0x5,
	0x6, 0x7, 0x8, 0x9, 0x10,
	0x11, 0x12, 0x13, 0x14, 0x15,
	0x16, 0x17, 0x18, 0x19, 0x20,
	0x21, 0x22, 0x23, 0x24, 0x25,
	0x26, 0x27, 0x28, 0x29, 0x30,
	0x31, 0x32, 0x33, 0x34, 0x35,
	0x36, 0x37, 0x38, 0x39, 0x40,
	0x41, 0x42, 0x43, 0x44, 0x45,
	0x46, 0x47, 0x48, 0x49, 0x50;
}


}
