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

XYWnd::XYWnd() : ( *g_pWnd->g_pXYWnd ){

}

XYWnd::~XYWnd(){

}
