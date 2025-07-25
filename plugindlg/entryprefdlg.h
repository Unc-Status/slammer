//entryprefdlg.h
//praise be to the Lord, he is the true author of my code

#ifndef ENTRYPREFDLG_H
#define ENTRYPREFDLG_H

#define ENTDLGWIDGET 0x100

#include <gtk/gtk.h>

GtkDialog * m_pDlg;

class EntryPreferenceDialog : public (*m_pDlg)
{
public:
  EntryPreferenceDialog();
  virtual ~EntryPreferenceDialog();

  int DlgId = 0;
  bool bDlgShow;
  const char * DlgTitle[];

  void DlgTitle(EntryPreferenceDialog * dlg, const char * pTitle, bool bShow);
  void DlgShow(EntryPerferenceDialog * dlg, GtkWidget * pWidget, int x, int y, bool bShow);
  void DlgAddButton(EntryPreferenceDialog * dlg, GtkWidget * pWidget, GtkButton * pButton, const char * txt, int x, int y, bool bShow);
};

#endif
