// ---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "HelloWorld.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1* Form1;

// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) :
    TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject* Sender) {
    ShowMessage("Hello, World!");
}

void __fastcall TForm1::Button2Click(TObject *Sender)
{

 ShowMessage("Bloody Martin!");

}
//---------------------------------------------------------------------------

