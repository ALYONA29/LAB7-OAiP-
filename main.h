//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit1;
	TEdit *Edit2;
	TButton *Button1;
	TMemo *Memo1;
	TRichEdit *RichEdit1;
	TButton *Button2;
	TEdit *Edit3;
	TButton *Button3;
	TButton *Button4;
	TButton *Button5;
	TEdit *Edit4;
	TButton *Button6;
	TEdit *Edit5;
	TButton *Button7;
	TMemo *Memo2;
	TButton *Button8;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Edit1KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Edit2KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Edit3KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Edit4KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Edit5KeyPress(TObject *Sender, System::WideChar &Key);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
