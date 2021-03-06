// ---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
// ---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.Grids.hpp>

// ---------------------------------------------------------------------------
class TForm1 : public TForm {
__published: // IDE-managed Components
	TButton *Button1;
	TFileOpenDialog *FileOpenDialog1;
	TFileSaveDialog *FileSaveDialog1;
	TButton *Button2;
	TButton *Button3;
	TEdit *Edit1;
	TStaticText *StaticText1;
	TLabel *Label1;
	TStaticText *StaticText2;
	TMemo *Memo1;
	TButton *Button4;
	TButton *Button5;
	TButton *Button6;
	TButton *Button7;
	TEdit *SearchField;
	TMemo *Memo2;
	TButton *Button8;
	TButton *Button9;
	TComboBox *ComboBox1;
	TComboBox *ComboBox2;

	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Button9Click(TObject *Sender);
	void __fastcall onSelect(TObject *Sender);
	void __fastcall onSelectSecond(TObject *Sender);

private: // User declarations

public: // User declarations
	__fastcall TForm1(TComponent* Owner);
	void UpdateUI();
};

// ---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
// ---------------------------------------------------------------------------
#endif
