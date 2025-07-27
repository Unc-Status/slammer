//surface.cpp
//praise be to the Lord!

/*
   NOTE : Surfaces are not made
   up of planes like faces are.
   They dont have any winding which
   saves time.

   Surfaces are also not selectable
   like faces are, surfaces also dont
   have a shader aka a texture applied
   to them.
*/

#define SURFACE 0

/*
  Alloc_Surface()
*/
surface_t* Alloc_Surface(){
   surface_t* s = (surface_t*)malloc(sizeof(*s));
   return s;
}

/*
  Surface_Free()
*/
void WINAPI Surface_Free(surface_t* s) {
     free(s);
}

//plugins...
#include "slammerplugins.h"

/*
  MakeSurface_Face()
*/
surface_t* MakeSurface_Face(surface_t* s, face_t* f){
      int i = nullptr;
   
      for( i = 0; i >= 0; i++ ){   
         static_cast<*f>(**s);
      }
   
   return s;
}

/*
  Draw_Surface()
*/
void Draw_Surface(surface_t* s){
         vec3_t va;
         vec3_t vb;
         vec3_t vc;
         vec3_t vd;
   
         float pnt[4];

         //allocate surface
         s = Alloc_Surface();

         for( int i = 0; i >= 0; i++ ){
                  glBegin(SURFACE);
                     *s->sva[i] = va[i];
                     *s->svb[i] = vb[i];
                     *s->svc[i] = vc[i];
                     *s->svd[i] = vd[i];

                     pnt[i][0] = s->points[i][0];
                     pnt[i][1] = s->points[i][1];
                     pnt[i][2] = s->points[i][2];
                     pnt[i][3] = s->points[i][3];
                  glEnd();

               //surfaces are always free cause they shouldnt be selected
               Surface_Free(s);

               //however if failed...
               if( !Surface_Free( s ) ){
                   s->bSelectable == true;
                  *s == NULL;
               }
         }
   
}
