//xywnd.h
//Praise be to the Lord Jesus Christ!

#ifndef XYWND_H
#define XYWND_H

#define XY

#include "stdafx.h"

GtkWidget* m_pWidget = nullptr;

class XYWnd{
public:
    XYWnd(GtkWidget* pWidget);
    virtual ~XYWnd();

    int m_nXYRows;
    int m_nXYColumns;

    int XYWidth;
    int XYHeight;

    int xywndnumberid;

    float m_fLineColor[3];

    int m_nXYGridPower;
      
    bool bRedraw;
    bool bDisable;

    float m_fBackgroundColor[3];

    vec3_t xy_vecs;

    void XYDraw(void * pData);
      
    void XYDrawGridBlock(XYWnd * xy);
      
    bool XYZoomIn(XYWnd * xy);
    bool XYZoomOut(XYWnd * xy);

    void XYPrintWritef();

    void XYPrintPlanes(XYWnd* xy, plane_t* plane);
    void XYPrintFaces(XYWnd* xy, face_t* face);
    void XYPrintBrushes(XYWnd* xy, brush_t* brush);

    void XYBackgroundColor(XYWnd* xy);
};

#endif
