//bsp.h
//praise be to the Lord Jesus Christ

#ifndef BSP_H
#define BSP_H

#include "stdafx.h"

#define BSP_VERSION 1

typedef struct sbsp_s{
int bspbrushcount[];
int bspfacecount[];
int bspplanecount[];
int bspsurfacecount[];

bool bChop;
bool bRender;

int bspid;

//bsp types
plane_t* pBspPlane();
face_t* pBspFace();
brush_t* pBspBrush();
surface_t* pBspSurface();

const char* bspshader;

}sbsp_t;

//bsp typedefs
typedef plane_t bspplane_t;
typedef face_t bspface_t;
typedef brush_t bspbrush_t;
typedef surface_t bspsurface_t;

void Add_BrushToBsp( bspbrush_t* b );
void Add_PlaneToBsp( bspplane_t* p );
void Add_FaceToBsp( bspface_t* f );
void Add_SurfaceToBsp(surface_t* s);

const char* BspFileExtension(){
    return ".sbsp";
}

sbsp_t* Alloc_Bsp();
const char* Bsp_Name(sbsp_t* s);
void Bsp_Free(sbsp_t* s);
void Bsp_VersionAlloc(sbsp_t* s);




#endif
