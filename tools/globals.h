//globals.h
//Praise to be the Lord Jesus Christ

#ifndef GLOBALS_H
#define GLOBALS_H

#include <gtk/gtk.h>

typedef struct global_s{
    bool m_bBrushSelectMode; 

    GtkWidget* g_pMainframe;
    GtkWidget* g_pXYWnd;

}global_t;

global_t g_seglobals;

#endif
