// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FtpMountThread.h"
#include <stdio.h>

#include "vdskapi.h"
#include "main.h"
#include "functions.h"
#pragma package(smart_init)

extern HANDLE hdisk;
extern TForm1 *Form1;
extern LARGE_INTEGER sizee;
extern unsigned long clstsize;
extern TCriticalSection *cchs;
extern int *diskcolor;
extern double disksize;
extern LPVOID memory;
extern FtpMount *fm;

#pragma package(smart_init)
// ---------------------------------------------------------------------------

// Important: Methods and properties of objects in VCL can only be
// used in a method called using Synchronize, for example:
//
// Synchronize(&UpdateCaption);
//
// where UpdateCaption could look like:
//
// void __fastcall FtpMount::UpdateCaption()
// {
// Form1->Caption = "Updated in a thread";
// }
// ---------------------------------------------------------------------------

__fastcall FtpMount::FtpMount(bool CreateSuspended):TThread(CreateSuspended)
{
}

__fastcall FtpMount::~FtpMount(void)
{

}

// ---------------------------------------------------------------------------
void __fastcall FtpMount::Execute()
{
    NameThreadForDebugging("FtpMount");
    // ---- Place thread code here ----

    Do();
    // Synchronize(Do);

    // Application->ProcessMessages();
    // Form1->Repaint();
    fm = 0;

}

void __fastcall FtpMount::Do(void)
{
    if (!ftpconn(false))
    {

        return;
    }
    Form1->Button14->Enabled = false;

    Form1->makefatdisk(NULL);

    Form1->Button1Click(NULL);
    Form1->Button14->Enabled = true;
    Form1->knotts->Title->Text->Text = "���� ��������";
}
// ---------------------------------------------------------------------------
