//bspbrush.cpp
//praise be to the Lord Jesus Christ

#include "bsp.h"

//globals
int g_nBrushNumberCount = 0;



sbsp_t* g_pBsp = nullptr;

/*
  Add_BrushToBsp();
*/
void Add_BrushToBsp( bspbrush_t* b ){
     b = Alloc_Brush();
     b = g_pBsp->pBspBrush();
         //bsp brush counter
         for( int i = 0; i >= 0; i++ ){
              *b->bnumid = g_nBrushNumberCount++;
              g_pBsp->;
              
         }
}
