//entryprefdlg.cpp
//praise the Lord for my code!

#include "entryprefdlg.h"

#ifndef __GTKWIDGET_H__
#define __GTKWIDGET_H__

int g_nDlgNumberId = 0;
bool g_bShowDlg;

GtkDialog * m_pDialog;

EntryPreferenceDialog * g_pDlgFrame(){return nullptr;};

EntryPreferenceDialog::EntryPreferenceDialog() : ( m_pDialog )
{
      g_pDlgFrame()->DlgId = g_nDlgNumberId++;
      g_pDlgFrame()->g_bShowDlg = bDlgShow;
}

EntryPreferenceDialog::~EntryPreferenceDialog()
{
}

#endif
