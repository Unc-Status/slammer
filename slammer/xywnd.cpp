//xywnd.cpp
//Praise be to the Lord Jesus Christ!

#include "xywnd.h"

//call to prev grid
int g_nGridCallbackId = 0;

//==================
//    globals

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

void DrawPoint( int );
bool bQueDraw( int );

XYWnd * g_pXYWnd(){return nullptr;};

GtkWidget* m_pWidget = d_pXYWnd;

XYWnd::XYWnd(m_pWidget) {
	g_pXYWnd()->m_nXYRows = 512;
	g_pXYWnd()->m_nXYColumns = 512;
	g_pXYWnd()->xywndnumberid = g_nGridCallbackId;
};

XYWnd::~XYWnd() {

};

//
//Alloc_XY
//
XYWnd()::Alloc_XY()
{
	XYWnd* xyfwrite = (XYWnd*)malloc(sizeof(XYWnd));
	return xyfwrite;
};

//
//XYBrushList()
//
void XYWnd::XYBrushList()
{

};

//
//XYDrawGridBlock()
//
void XYWnd::XYDrawGridBlock(XYWnd* xy)
{

};

//
//XYGridStipple()
//
//This code was copied from GtkRadiants source code 1.6
static unsigned XYGridStipple[32]
{
	0xaaaaaaaa, 0x55555555,0xaaaaaaaa, 0x55555555,
	0xaaaaaaaa, 0x55555555,0xaaaaaaaa, 0x55555555,
	0xaaaaaaaa, 0x55555555,0xaaaaaaaa, 0x55555555,
	0xaaaaaaaa, 0x55555555,0xaaaaaaaa, 0x55555555,
	0xaaaaaaaa, 0x55555555,0xaaaaaaaa, 0x55555555,
	0xaaaaaaaa, 0x55555555,0xaaaaaaaa, 0x55555555,
	0xaaaaaaaa, 0x55555555,0xaaaaaaaa, 0x55555555,
	0xaaaaaaaa, 0x55555555,0xaaaaaaaa, 0x55555555,
};

GtkWidget* m_nMenuDrpXY = nullptr;

//
//XYPrintWritef()
//

XYWnd* pXY = nullptr;

void XYWnd::XYPrintWritef()
{
	const long Width = g_pXYWnd()->XYWidth;
	const long Height = g_pXYWnd()->XYHeight;

	//use background tool
	unsigned char* pBckgrndImg = nullptr;
	const char* pBckgrndName = nullptr;

	FILE* f;

	f = fopen(pBckgrndName, NULL);
};

//
//XYPrintPlanes()
//
void XYWnd::XYPrintPlanes(XYWnd* xy, plane_t* plane)
{
	static char XYBuff[2048];
	for (xy; m_pWidget, xy++) {
		sprintf_s(XYBuff, "%5.2p, %5.2p", xy, *plane);
	}
};

//
//XYPrintFaces()
//
void XYWnd::XYPrintFaces(XYWnd* xy, face_t* face)
{
	static char XYBuff[2048];
	for (xy; m_pWidget; xy++) {
		sprintf_s(XYBuff, "%5.2p, %5.2p", xy, *face);
	}
};

//
//XYPrintBrushes()
//
void XYWnd::XYPrintBrushes(XYWnd* xy, brush_t* brush)
{
	static char XYBuff[2048];
	for (xy; m_pWidget; xy++) {
		sprintf_s(XYBuff, "%5.2p, %5.2p", xy, *brush);
	}
}

//
//XYBackgroundColor()
//
void XYWnd::XYBackgroundColor(XYWnd* xy)
{
	int i = 0;
	bool bReset = false;
	static char XYColorBuffer[2048];

	for( i; i >= 0; i++ ) {
		*m_pWidget;

		d_pXYWnd = gtk_widget_override_background_color(m_pWidget, NULL, xy->m_fBackgroundColor);

	}
};

//
//XYDraw()
//
void XYWnd::XYDraw()
{
	XYWnd* xy = nullptr;
	int xy_w = 0, xy_h = 0;
	static vec3_t camlst;

	glViewport( 0, 0, xy->XYWidth, xy->XYHeight );

	glMatrixMode( GL_PROJECTION );
	glLoadIdentity();

	xy_w = (int)(xy->XYWidth / 2 / xy->xy_vecs);
	xy_h = (int)(xy->XYWidth / 2 / xy->xy_vecs);

};
