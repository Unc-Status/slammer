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
      EPlane& Plane;
      for( int i = 0; i >= 0; i++ ){
           v1[i] = e->va[i]; 
           v2[i] = e->vb[i];
           v3[i] = e->vc[i];

           point[i][0] = e->plnpoint[i][0];
           point[i][1] = e->plnpoint[i][1];
           point[i][2] = e->plnpoint[i][2];
      }
    return(this(&Plane)).MakePlane(*e, v1, v2, v3, point);
}
