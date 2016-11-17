#pragma once

namespace projet1 {

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
	private: System::Windows::Forms::Button^  btnok;
	protected: 

	private: System::Windows::Forms::TextBox^  txtentrada;
	private: System::Windows::Forms::CheckBox^  chbescolha;


	protected: 


	private: System::Windows::Forms::Label^  lblMsg;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::RadioButton^  rbtop1;
	private: System::Windows::Forms::GroupBox^  grp1;


	private: System::Windows::Forms::RadioButton^  rbtop2;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::CheckBox^  chbvaca;


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
			this->btnok = (gcnew System::Windows::Forms::Button());
			this->txtentrada = (gcnew System::Windows::Forms::TextBox());
			this->chbescolha = (gcnew System::Windows::Forms::CheckBox());
			this->lblMsg = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->rbtop1 = (gcnew System::Windows::Forms::RadioButton());
			this->grp1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbtop2 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->chbvaca = (gcnew System::Windows::Forms::CheckBox());
			this->grp1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnok
			// 
			this->btnok->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnok->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnok->ForeColor = System::Drawing::Color::Black;
			this->btnok->Location = System::Drawing::Point(29, 362);
			this->btnok->Name = L"btnok";
			this->btnok->Size = System::Drawing::Size(95, 34);
			this->btnok->TabIndex = 0;
			this->btnok->Text = L"Continue";
			this->btnok->UseVisualStyleBackColor = false;
			this->btnok->Click += gcnew System::EventHandler(this, &Form1::btnok_Click);
			// 
			// txtentrada
			// 
			this->txtentrada->ForeColor = System::Drawing::Color::Red;
			this->txtentrada->Location = System::Drawing::Point(24, 83);
			this->txtentrada->Name = L"txtentrada";
			this->txtentrada->Size = System::Drawing::Size(170, 20);
			this->txtentrada->TabIndex = 1;
			// 
			// chbescolha
			// 
			this->chbescolha->AutoSize = true;
			this->chbescolha->Checked = true;
			this->chbescolha->CheckState = System::Windows::Forms::CheckState::Checked;
			this->chbescolha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->chbescolha->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->chbescolha->Location = System::Drawing::Point(19, 127);
			this->chbescolha->Name = L"chbescolha";
			this->chbescolha->Size = System::Drawing::Size(72, 17);
			this->chbescolha->TabIndex = 2;
			this->chbescolha->Text = L"Seleção";
			this->chbescolha->UseVisualStyleBackColor = true;
			// 
			// lblMsg
			// 
			this->lblMsg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblMsg->Location = System::Drawing::Point(21, 27);
			this->lblMsg->Name = L"lblMsg";
			this->lblMsg->Size = System::Drawing::Size(533, 40);
			this->lblMsg->TabIndex = 3;
			this->lblMsg->Text = L"Mensagem";
			this->lblMsg->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->lblMsg->Click += gcnew System::EventHandler(this, &Form1::lblMsg_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"teste 1", L"", L"teste 2"});
			this->comboBox1->Location = System::Drawing::Point(410, 464);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			this->comboBox1->Click += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// rbtop1
			// 
			this->rbtop1->AutoSize = true;
			this->rbtop1->Checked = true;
			this->rbtop1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->rbtop1->Location = System::Drawing::Point(15, 31);
			this->rbtop1->Name = L"rbtop1";
			this->rbtop1->Size = System::Drawing::Size(64, 17);
			this->rbtop1->TabIndex = 5;
			this->rbtop1->TabStop = true;
			this->rbtop1->Text = L"opção 1";
			this->rbtop1->UseVisualStyleBackColor = true;
			this->rbtop1->CheckedChanged += gcnew System::EventHandler(this, &Form1::rbtop1_CheckedChanged);
			// 
			// grp1
			// 
			this->grp1->Controls->Add(this->rbtop2);
			this->grp1->Controls->Add(this->rbtop1);
			this->grp1->Location = System::Drawing::Point(12, 193);
			this->grp1->Name = L"grp1";
			this->grp1->Size = System::Drawing::Size(182, 138);
			this->grp1->TabIndex = 6;
			this->grp1->TabStop = false;
			this->grp1->Text = L"groupBox1";
			this->grp1->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// rbtop2
			// 
			this->rbtop2->AutoSize = true;
			this->rbtop2->Location = System::Drawing::Point(15, 74);
			this->rbtop2->Name = L"rbtop2";
			this->rbtop2->Size = System::Drawing::Size(63, 17);
			this->rbtop2->TabIndex = 0;
			this->rbtop2->Text = L"Opção2";
			this->rbtop2->UseVisualStyleBackColor = true;
			this->rbtop2->CheckedChanged += gcnew System::EventHandler(this, &Form1::rbtop2_CheckedChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(213, 99);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(341, 339);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// chbvaca
			// 
			this->chbvaca->AutoSize = true;
			this->chbvaca->Location = System::Drawing::Point(19, 150);
			this->chbvaca->Name = L"chbvaca";
			this->chbvaca->Size = System::Drawing::Size(74, 17);
			this->chbvaca->TabIndex = 8;
			this->chbvaca->Text = L"Seleção 2";
			this->chbvaca->UseVisualStyleBackColor = true;
			this->chbvaca->CheckedChanged += gcnew System::EventHandler(this, &Form1::chbvaca_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(604, 538);
			this->Controls->Add(this->chbvaca);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnok);
			this->Controls->Add(this->grp1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->lblMsg);
			this->Controls->Add(this->chbescolha);
			this->Controls->Add(this->txtentrada);
			this->Name = L"Form1";
			this->Text = L"Programa teste";
			this->grp1->ResumeLayout(false);
			this->grp1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void btnok_Click(System::Object^  sender, System::EventArgs^  e) {
			 lblMsg->Text=" ";
			 if(chbescolha->Checked)
				 lblMsg->Text=lblMsg->Text + "Teste";
			 if(chbvaca->Checked)
				 lblMsg->Text=lblMsg->Text + "Teste2";
		

			

		 }
private: System::Void lblMsg_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void chbvaca_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void rbtop1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 lblMsg->Text=" ";
			  if (rbtop1->Checked)
				 lblMsg->ForeColor = System::Drawing::Color::Red;
			     lblMsg->Text = "Perigo!!!\nRoda - Girante caindo";

		 }
private: System::Void rbtop2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 lblMsg->Text=" ";
			  if (rbtop2->Checked)
				 lblMsg->ForeColor = System::Drawing::Color::Blue;
			     lblMsg->Text = "Perigo!!!\nRoda - Pegadinha do Malandro";
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
};
}

