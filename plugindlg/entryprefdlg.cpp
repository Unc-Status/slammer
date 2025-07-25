//entryprefdlg.cpp
//praise the Lord for my code!

#include "entryprefdlg.h"

#ifndef __GTKWIDGET_H__
#define __GTKWIDGET_H__

int g_nDlgNumberId = 0;
bool g_bShowDlg;

const char g_DialogTitle[];

GtkDialog * m_pDialog;

EntryPreferenceDialog * g_pDlgFrame(){return nullptr;};

#define PAGEFLIPS 2

EntryPreferenceDialog::EntryPreferenceDialog() : ( *m_pDialog )
{
      g_pDlgFrame()->DlgId = g_nDlgNumberId++;
      g_pDlgFrame()->g_bShowDlg = bDlgShow;
      g_pDlgFrame()->DlgTitle = g_DialogTitle = "Editor Preferences Dialog"
}

EntryPreferenceDialog::~EntryPreferenceDialog()
{
}

#endif
