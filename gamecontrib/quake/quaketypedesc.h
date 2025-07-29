//quaketypedesc.h
//Praise be to the Lord Jesus Christ my savior!

#include "stdafx.h"

#ifndef QUAKETYPEDESC_H
#define QUAKETYPEDESC_H

//version
#define QUAKE_VERSION 

//qtypes
typedef plane_t qplane_t;
typedef face_t qface_t;
typedef brush_t qbrush_t;
typedef entity_t qentity_y;
typedef epair_t qepair_t;
typedef global_t qglobal_t;
typedef vec3_t qvec3_t;
typedef vec_t qvec_t;
typedef vec4_t qvec4_t;
typedef surface_t qsurface_t;

typedef char qchar;
typedef bool qbool;

void InitQuake( int );
qbool bQuakeSel( qchar );//init game
qchar QuakePath[2048];
const qchar* QDirectories;

typedef struct qtexture_s{
       qchar QTEXPATH[2048];
       const qchar* qtexture;
       int qwidth;
       int qheight;
}qtexture_t;

typedef struct qpolygon_s{
    qbrush_t* quakepoly; 
}qpolygon_t;

typedef struct qbsp_s{
     int qbrushnumber[];
}qbsp_t;
#endif
