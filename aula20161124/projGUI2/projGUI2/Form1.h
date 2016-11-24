#pragma once

namespace projGUI2 {

#define MAXCHARDISP 16

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn1;
	protected: 

	protected: 

	protected: 


	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  butponto;





	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  butpn;





	private: System::Windows::Forms::Button^  btnsoma;
	private: System::Windows::Forms::Button^  butsub;

	private: System::Windows::Forms::Button^  butmult;
	private: System::Windows::Forms::Button^  butdiv;
	private: System::Windows::Forms::Button^  buton;
	private: System::Windows::Forms::Button^  butfat;
	private: System::Windows::Forms::Button^  butpot;
	private: System::Windows::Forms::Button^  butsqr;









	private: System::Windows::Forms::Label^  lblDisplay;
	private: System::Windows::Forms::Button^  butresult;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->butponto = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->butpn = (gcnew System::Windows::Forms::Button());
			this->btnsoma = (gcnew System::Windows::Forms::Button());
			this->butsub = (gcnew System::Windows::Forms::Button());
			this->butmult = (gcnew System::Windows::Forms::Button());
			this->butdiv = (gcnew System::Windows::Forms::Button());
			this->buton = (gcnew System::Windows::Forms::Button());
			this->butfat = (gcnew System::Windows::Forms::Button());
			this->butpot = (gcnew System::Windows::Forms::Button());
			this->butsqr = (gcnew System::Windows::Forms::Button());
			this->lblDisplay = (gcnew System::Windows::Forms::Label());
			this->butresult = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(12, 93);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(52, 34);
			this->btn7->TabIndex = 0;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::btn7_Click);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(12, 133);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(52, 34);
			this->btn4->TabIndex = 1;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::btn4_Click);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(12, 173);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(52, 34);
			this->btn1->TabIndex = 2;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::btn1_Click);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(12, 213);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(52, 34);
			this->btn0->TabIndex = 3;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(70, 93);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(52, 34);
			this->btn8->TabIndex = 4;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::btn8_Click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(70, 133);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(52, 34);
			this->btn5->TabIndex = 5;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::btn5_Click);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(70, 173);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(52, 34);
			this->btn2->TabIndex = 6;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::btn2_Click);
			// 
			// butponto
			// 
			this->butponto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->butponto->Location = System::Drawing::Point(70, 213);
			this->butponto->Name = L"butponto";
			this->butponto->Size = System::Drawing::Size(52, 34);
			this->butponto->TabIndex = 7;
			this->butponto->Text = L",";
			this->butponto->UseVisualStyleBackColor = true;
			this->butponto->Click += gcnew System::EventHandler(this, &Form1::butponto_Click);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(128, 93);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(52, 34);
			this->btn9->TabIndex = 8;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::btn9_Click);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(128, 133);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(52, 34);
			this->btn6->TabIndex = 9;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::btn6_Click);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(128, 173);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(52, 34);
			this->btn3->TabIndex = 10;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::btn3_Click);
			// 
			// butpn
			// 
			this->butpn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->butpn->Location = System::Drawing::Point(128, 213);
			this->butpn->Name = L"butpn";
			this->butpn->Size = System::Drawing::Size(52, 34);
			this->butpn->TabIndex = 11;
			this->butpn->Text = L"±";
			this->butpn->UseVisualStyleBackColor = true;
			this->butpn->Click += gcnew System::EventHandler(this, &Form1::butpn_Click);
			// 
			// btnsoma
			// 
			this->btnsoma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnsoma->Location = System::Drawing::Point(186, 93);
			this->btnsoma->Name = L"btnsoma";
			this->btnsoma->Size = System::Drawing::Size(52, 34);
			this->btnsoma->TabIndex = 12;
			this->btnsoma->Text = L"+";
			this->btnsoma->UseVisualStyleBackColor = true;
			this->btnsoma->Click += gcnew System::EventHandler(this, &Form1::btnsoma_Click);
			// 
			// butsub
			// 
			this->butsub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->butsub->Location = System::Drawing::Point(186, 133);
			this->butsub->Name = L"butsub";
			this->butsub->Size = System::Drawing::Size(52, 34);
			this->butsub->TabIndex = 13;
			this->butsub->Text = L"-";
			this->butsub->UseVisualStyleBackColor = true;
			this->butsub->Click += gcnew System::EventHandler(this, &Form1::butsub_Click);
			// 
			// butmult
			// 
			this->butmult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->butmult->Location = System::Drawing::Point(186, 173);
			this->butmult->Name = L"butmult";
			this->butmult->Size = System::Drawing::Size(52, 34);
			this->butmult->TabIndex = 14;
			this->butmult->Text = L"×";
			this->butmult->UseVisualStyleBackColor = true;
			this->butmult->Click += gcnew System::EventHandler(this, &Form1::butmult_Click);
			// 
			// butdiv
			// 
			this->butdiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->butdiv->Location = System::Drawing::Point(186, 213);
			this->butdiv->Name = L"butdiv";
			this->butdiv->Size = System::Drawing::Size(52, 34);
			this->butdiv->TabIndex = 15;
			this->butdiv->Text = L"÷";
			this->butdiv->UseVisualStyleBackColor = true;
			this->butdiv->Click += gcnew System::EventHandler(this, &Form1::butdiv_Click);
			// 
			// buton
			// 
			this->buton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buton->Location = System::Drawing::Point(244, 93);
			this->buton->Name = L"buton";
			this->buton->Size = System::Drawing::Size(52, 34);
			this->buton->TabIndex = 16;
			this->buton->Text = L"CE";
			this->buton->UseVisualStyleBackColor = true;
			this->buton->Click += gcnew System::EventHandler(this, &Form1::buton_Click);
			// 
			// butfat
			// 
			this->butfat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->butfat->Location = System::Drawing::Point(244, 133);
			this->butfat->Name = L"butfat";
			this->butfat->Size = System::Drawing::Size(52, 34);
			this->butfat->TabIndex = 17;
			this->butfat->Text = L"n!";
			this->butfat->UseVisualStyleBackColor = true;
			// 
			// butpot
			// 
			this->butpot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->butpot->Location = System::Drawing::Point(244, 173);
			this->butpot->Name = L"butpot";
			this->butpot->Size = System::Drawing::Size(52, 34);
			this->butpot->TabIndex = 18;
			this->butpot->Text = L"xʸ";
			this->butpot->UseVisualStyleBackColor = true;
			// 
			// butsqr
			// 
			this->butsqr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->butsqr->Location = System::Drawing::Point(244, 213);
			this->butsqr->Name = L"butsqr";
			this->butsqr->Size = System::Drawing::Size(52, 34);
			this->butsqr->TabIndex = 19;
			this->butsqr->Text = L"√¯";
			this->butsqr->UseVisualStyleBackColor = true;
			// 
			// lblDisplay
			// 
			this->lblDisplay->BackColor = System::Drawing::Color::White;
			this->lblDisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblDisplay->Location = System::Drawing::Point(15, 22);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->Size = System::Drawing::Size(281, 39);
			this->lblDisplay->TabIndex = 20;
			this->lblDisplay->Text = L"0";
			this->lblDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// butresult
			// 
			this->butresult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->butresult->Location = System::Drawing::Point(70, 253);
			this->butresult->Name = L"butresult";
			this->butresult->Size = System::Drawing::Size(168, 30);
			this->butresult->TabIndex = 11;
			this->butresult->Text = L"=";
			this->butresult->UseVisualStyleBackColor = true;
			this->butresult->Click += gcnew System::EventHandler(this, &Form1::butresult_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(317, 342);
			this->Controls->Add(this->lblDisplay);
			this->Controls->Add(this->butsqr);
			this->Controls->Add(this->butpot);
			this->Controls->Add(this->butfat);
			this->Controls->Add(this->buton);
			this->Controls->Add(this->butdiv);
			this->Controls->Add(this->butmult);
			this->Controls->Add(this->butsub);
			this->Controls->Add(this->btnsoma);
			this->Controls->Add(this->butresult);
			this->Controls->Add(this->butpn);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->butponto);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn7);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Calc1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
		bool ponto;
		double numero;
		char op;

		void LimpaDisplay() {
			ponto = false;
			lblDisplay->Text="0";
		}

		void LimpaTudo() {
			LimpaDisplay();
			numero=0.0;
			op='\0';
		}

#pragma endregion

private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text ->Length < MAXCHARDISP)
			   if(lblDisplay->Text =="0")
				 lblDisplay->Text = "1";
			 else
			 lblDisplay->Text = lblDisplay->Text + "1";
		 }
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
			  if(lblDisplay->Text ->Length < MAXCHARDISP)
			   if(lblDisplay->Text =="0")
				 lblDisplay->Text = "2";
			 else
			 lblDisplay->Text = lblDisplay->Text + "2";
		 }
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text ->Length < MAXCHARDISP)
			   if(lblDisplay->Text =="0")
				 lblDisplay->Text = "3";
			 else
			 lblDisplay->Text = lblDisplay->Text + "3";
		 }
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text ->Length < MAXCHARDISP)
			   if(lblDisplay->Text =="0")
				 lblDisplay->Text = "4";
			 else
			 lblDisplay->Text = lblDisplay->Text + "4";
		 }
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text ->Length < MAXCHARDISP)
			   if(lblDisplay->Text =="0")
				 lblDisplay->Text = "5";
			 else
			 lblDisplay->Text = lblDisplay->Text + "5";
		 }
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text ->Length < MAXCHARDISP)
			   if(lblDisplay->Text =="0")
				 lblDisplay->Text = "6";
			 else
			 lblDisplay->Text = lblDisplay->Text + "6";
		 }
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text ->Length < MAXCHARDISP)
			   if(lblDisplay->Text =="0")
				 lblDisplay->Text = "7";
			 else
			 lblDisplay->Text = lblDisplay->Text + "7";
		 }
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text ->Length < MAXCHARDISP)
			   if(lblDisplay->Text =="0")
				 lblDisplay->Text = "8";
			 else
			 lblDisplay->Text = lblDisplay->Text + "8";
		 }
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text ->Length < MAXCHARDISP)
			   if(lblDisplay->Text =="0")
				 lblDisplay->Text = "9";
			 else
			 lblDisplay->Text = lblDisplay->Text + "9";
		 }
private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) {
			  if(lblDisplay->Text ->Length < MAXCHARDISP)
			     if(lblDisplay->Text !="0")
			 lblDisplay->Text = lblDisplay->Text + "0";
		 }
private: System::Void butponto_Click(System::Object^  sender, System::EventArgs^  e) {
				  if(lblDisplay->Text ->Length < MAXCHARDISP&& !ponto){
			     lblDisplay->Text = lblDisplay->Text + ",";
			  ponto = true;
			  }
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 ponto=false;
		 }
private: System::Void btnsoma_Click(System::Object^  sender, System::EventArgs^  e) {
			 numero=System::Convert::ToDouble(lblDisplay->Text);
			 op='+';
			 LimpaDisplay();
		 }
private: System::Void butsub_Click(System::Object^  sender, System::EventArgs^  e) {
			 numero=System::Convert::ToDouble(lblDisplay->Text);
			 op='-';
			 LimpaDisplay();
		 }
private: System::Void butmult_Click(System::Object^  sender, System::EventArgs^  e) {
			 numero=System::Convert::ToDouble(lblDisplay->Text);
			 op='*';
			 LimpaDisplay();
		 }
private: System::Void butdiv_Click(System::Object^  sender, System::EventArgs^  e) {
			 numero=System::Convert::ToDouble(lblDisplay->Text);
			 op='/';
			 LimpaDisplay();
		 }
private: System::Void butresult_Click(System::Object^  sender, System::EventArgs^  e) {
			 double numero2 = System::Convert::ToDouble(lblDisplay->Text);
			 switch(op) {
			 case '+':
				 lblDisplay->Text = System::Convert::ToString(numero + numero2);
				 break;
			 case '-':
				 lblDisplay->Text = System::Convert::ToString(numero - numero2);
				 break;
			case '*':
				 lblDisplay->Text = System::Convert::ToString(numero * numero2);
				 break;
			case '/':
				 lblDisplay->Text = System::Convert::ToString(numero / numero2);
				 break;

		 }
		 }

private: System::Void buton_Click(System::Object^  sender, System::EventArgs^  e) {
			 LimpaTudo();
			 
		 }
		 
private: System::Void butpn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Substring(0,1) =="-")
				 lblDisplay->Text = lblDisplay->Text->Substring(1);
			 else 
				 lblDisplay->Text = "-" + lblDisplay->Text;

		 }
};
}

