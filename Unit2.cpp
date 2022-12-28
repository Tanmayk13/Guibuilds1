//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.Surface.fmx", _PLAT_MSWINDOWS)
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)

TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::AddButtonClick(TObject *Sender)
{
	 String taskText=TaskEdit->Text;
	 if(taskText==""){
	 return;
	 }else
	 TasksListBox->Items->Add(taskText);
     TaskEdit->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm2::TasksListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	  int index = Item->Index;
      TasksListBox->Items->Delete(index);
}
//---------------------------------------------------------------------------
