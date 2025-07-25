//eplane.h
//Praise to the Lord for my code he is the true programmer

#ifndef __EPLANE_H__
#define __EPLANE_H__

#include "etypes.h"

using V = efloat;

// DESCRIPTION : Plane Vectors
using V3 = V[3];
using V4 = V[4];
using V6 = V[6];

class EPlane{
public:
   EPlane();
   virtual ~EPlane();

   V3 va;
   V3 vb;
   V3 vc;

   int plnpoint[3];

   void MakePlane(EPlane * e, V3 v1, V3 v2, V3 v3, int point[3]);
};

#endif
