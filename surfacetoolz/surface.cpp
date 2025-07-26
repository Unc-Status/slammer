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
void Surface_Free(surface_t* surface) {
     free(surface);
}
