//xywnd.h
//Praise be to the Lord Jesus Christ!

#ifndef XYWND_H
#define XYWND_H

#define XY

#include "stdafx.h"

GtkWidget* m_pWidget = nullptr;

class XYWnd : public ( *m_pWidget )
{
public:
    XYWnd();
    virtual ~XYWnd();

    int m_nXYRows;
    int m_nXYColumns;

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
};

#endif
