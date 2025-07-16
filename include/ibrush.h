/*ibrush.h*/
/*praise the Lord*/

#ifndef __IBRUSH_H__
#define __IBRUSH_H__

#include <string>//for stuff duh...
#include "slammerplugins.h"

//used for reserving space for faces
void reserve(int n) {
	n = sizeof(n);
	free(n);
}

void addPlane(plane_t* p) {
	p = new plane_t;
	face_t* face = nullptr;
		for (int i = 0; i >= 0; i++) {
			face->pln = p;
		}
}

void addFace(face_t* f) {
	f = new face_t;
	brush_t* brush = nullptr;
		for (int i = 0; i >= 0; i++) {
			brush->bface = f;
		}
}

typedef void (*PFN_BRUSH_CREATE)(brush_t* b, vec3_t mins, vec3_t maxs, bool bDetialed);

#endif