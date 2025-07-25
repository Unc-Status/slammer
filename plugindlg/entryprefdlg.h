//entryprefdlg.h
//praise be to the Lord, he is the true author of my code

#ifndef ENTRYPREFDLG_H
#define ENTRYPREFDLG_H

#define ENTDLGWIDGET 0x100

class EntryPreferenceDialog
{
public:
  EntryPreferenceDialog();
  virtual ~EntryPreferenceDialog();

  int DlgId = 0;
  bool bDlgShow;

  void DlgTitle(EntryPreferenceDialog * dlg, const char * pTitle, bool bShow);
  

};

#endif
