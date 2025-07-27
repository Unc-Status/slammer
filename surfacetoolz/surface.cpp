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
