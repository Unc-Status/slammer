//xywnd.cpp
//Praise be to the Lord Jesus Christ!

#include "xywnd.h"

//call to prev grid
int g_nGridCallbackId = 0;

global_t* g_pWnd = nullptr;

#define PAGEFLIPS 2

bool g_bRotateMode = false;
bool g_bScaleMode = false;
bool g_bSelectMode = false;
bool g_bDragBrush = false;
bool g_bSelectBrush = false;
bool g_bDrawBrush = false;

brush_t* pXYBrushes = nullptr;
plane_t* pXYPlanes = nullptr;
face_t* pXYFaces = nullptr;

const char* g_cXYPrintTxt = nullptr;

//Use GL
void g_DrawXYIcon(const char* pXYIcon);

const int g_nViewType = nullptr;

int g_nXYPlaneNumber = 0;
int g_nXYFaceNumber = 0;
int g_nXYBrushNumber = 0;

int g_nXYClipPoint = 0;

XYWnd::XYWnd() : ( *g_pWnd->g_pXYWnd ){

}

XYWnd::~XYWnd(){

}
