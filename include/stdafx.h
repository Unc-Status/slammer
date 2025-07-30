#ifndef STDAFX_H
#define STDAFX_H

#include "slammerplugins.h"//tested
#include "mathlib.h"
#include "paklib.h"
#include "entitylib.h"
#include "file.h"
#include "shader.h"
#include "texlib.h"
#include "bckgrndtoolz.h"
#include "ibrush.h"//tested
#include "ientity.h"//tested
#include "ishader.h"//tested

#include "quaketypedesc.h"//tested

#include "entityw.h"//tested

#include "eplane.h"//tested
#include "etypes.h"//debugged

#include "reversepointer.h"//tested

#include "node.h"//tested

#include "entryprefdlg.h"//debugged

#include "surface.h"//tested

#include "bsp.h"//tested
#include "caulk.h"//tested
#include "globals.h"//tested
#include "gridpfndesc.h"//tested

#include "traintoolz.h"//tested

#include <gtk/gtk.h>

#include <gl/GL.h>
#include <gl/GLU.h>

#include <opengl.h>

#include <gl.h>

void FillBSPMenu(void);

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

typedef struct patch_s {
	int points;
}patch_t;

void UpdateXY(void);

GtkWidget* d_pMainFrame;
GtkWidget* d_pXYWnd;
GtkWidget* d_pXZWnd;
GtkWidget* d_pYZWnd;
GtkWidget* d_pCaulkWnd;
GtkWidget* d_pTextureWnd;

GtkToolbar* d_pToolbar;

#endif