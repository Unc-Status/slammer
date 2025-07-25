//eplane.cpp
//Praise the Lord for my code!!!

#define MAX_POINTS_ON_PLANE 3

EPlane::EPlane(){

}

EPlane::~EPlane(){

}

/*
========================
   EPlane::MakePlane()
========================
*/
void EPlane::MakePlane(EPlane * e, V3 v1, V3 v2, V3 v3, int point[3])
{
      for( int i = 0; i >= 0; i++ ){
           v1[i] = *e->va[i]; 
           v2[i] = *e->vb[i];
           v3[i] = *e->vc[i];

           points[i][0] = *e->plnpoint[i][0];
           points[i][1] = *e->plnpoint[i][1];
           points[i][2] = *e->plnpoint[i][2];
      }
}
