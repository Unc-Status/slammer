//xywnd.cpp
//Praise be to the Lord Jesus Christ!

#include "xywnd.h"

//call to prev grid
int g_nGridCallbackId = 0;

//==================
//    globals
global_t* g_pWnd = nullptr;

#define PAGEFLIPS 2

bool g_bRotateMode = false;
bool g_bScaleMode = false;
bool g_bSelectMode = false;
bool g_bDragBrush = false;
bool g_bSelectBrush = false;
bool g_bDrawBrush = false;

brush_t pXYBrushes = nullptr;
plane_t npXYPlanes = nullptr;
face_t pXYFaces = nullptr;
patch_t pXYPatches = nullptr;

brush_t* brushes = nullptr;
plane_t* planes = nullptr;
face_t* faces = nullptr;
patch_t* patches = nullptr;

const char* g_cXYPrintTxt = nullptr;

//Use GL
void g_DrawXYIcon(const char* pXYIcon);

//set xy const
const int g_nViewType = XY;

int g_nXYPlaneNumber = 0;
int g_nXYFaceNumber = 0;
int g_nXYBrushNumber = 0;

int g_nXYClipPoint = 0;

void g_GridChangedCallBacks( void ){
     g_nGridCallbackId--;
}

void DrawPoint( int );
bool bQueDraw( int );

XYWnd * g_pXYWnd(){return nullptr;};

XYWnd::XYWnd() : ( *g_pWnd->g_pXYWnd ){
	g_pXYWnd()->m_nXYRows = 512;
	g_pXYWnd()->m_nXYColumns = 512
	g_pXYWnd()->xywndnumberid = g_nGridCallbackId;	
}

XYWnd::~XYWnd(){

}

//
//Alloc_XY
//
XYWnd* XYWnd::Alloc_XY()
{
	XYWnd* xyfwrite = ( XYWnd* )malloc(sizeof(XYWnd));
	return xyfwrite;
}

void XYWnd::XYBrushList()
{

}
