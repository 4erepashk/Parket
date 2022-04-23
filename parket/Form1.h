#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace Microsoft::Win32;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;


	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//

		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::PictureBox^ pic2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::PictureBox^ pic1;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::RadioButton^ rbt2;
	private: System::Windows::Forms::RadioButton^ rbt1;
	private: System::Windows::Forms::NumericUpDown^ nudHP;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ nudWP;

	protected:
	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pic2 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pic1 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->rbt2 = (gcnew System::Windows::Forms::RadioButton());
			this->rbt1 = (gcnew System::Windows::Forms::RadioButton());
			this->nudHP = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nudWP = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic2))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudHP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudWP))->BeginInit();
			this->SuspendLayout();
			this->pic2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picc2.Image")));
			this->pic2->Location = System::Drawing::Point(77, 16);
			this->pic2->Name = L"pic2";
			this->pic2->Size = System::Drawing::Size(270, 210);
			this->pic2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pic2->TabIndex = 3;
			this->pic2->TabStop = false;
			this->pic2->UseWaitCursor = true;
			this->pic2->Visible = false;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label10.Image")));
			this->label10->Location = System::Drawing::Point(158, 236);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(110, 20);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Потребуется: ";
			this->label10->Visible = false;
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->pic2);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->Location = System::Drawing::Point(412, 188);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(406, 402);
			this->panel3->TabIndex = 12;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel3_Paint);
			this->pic1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic1.Image")));
			this->pic1->Location = System::Drawing::Point(70, 16);
			this->pic1->Name = L"pic1";
			this->pic1->Size = System::Drawing::Size(270, 210);
			this->pic1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pic1->TabIndex = 3;
			this->pic1->TabStop = false;
			this->pic1->Visible = false;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label8.Image")));
			this->label8->Location = System::Drawing::Point(144, 236);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(110, 20);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Потребуется: ";
			this->label8->Visible = false;
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->pic1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 188);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(412, 402);
			this->panel2->TabIndex = 11;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel2_Paint);
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->numericUpDown2);
			this->panel1->Controls->Add(this->numericUpDown1);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->rbt2);
			this->panel1->Controls->Add(this->rbt1);
			this->panel1->Controls->Add(this->nudHP);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->nudWP);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(818, 188);
			this->panel1->TabIndex = 10;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			this->button2->BackColor = System::Drawing::Color::AntiqueWhite;
			this->button2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(750, 64);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(65, 65);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Download";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			this->button1->BackColor = System::Drawing::Color::AntiqueWhite;
			this->button1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(750, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(65, 65);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label13.Image")));
			this->label13->Location = System::Drawing::Point(234, 75);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(176, 18);
			this->label13->TabIndex = 16;
			this->label13->Text = L"Ширина комнаты =";
			this->numericUpDown2->Location = System::Drawing::Point(433, 73);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(132, 20);
			this->numericUpDown2->TabIndex = 15;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->numericUpDown1->Cursor = System::Windows::Forms::Cursors::Default;
			this->numericUpDown1->Location = System::Drawing::Point(433, 47);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(132, 20);
			this->numericUpDown1->TabIndex = 14;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(571, 127);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(29, 18);
			this->label12->TabIndex = 13;
			this->label12->Text = L"см";
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(571, 47);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(29, 18);
			this->label11->TabIndex = 12;
			this->label11->Text = L"см";
			this->rbt2->AutoSize = true;
			this->rbt2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbt2->Location = System::Drawing::Point(512, 160);
			this->rbt2->Name = L"rbt2";
			this->rbt2->Size = System::Drawing::Size(227, 22);
			this->rbt2->TabIndex = 9;
			this->rbt2->Text = L"Вертикальная укладка";
			this->rbt2->UseVisualStyleBackColor = true;
			this->rbt2->CheckedChanged += gcnew System::EventHandler(this, &Form1::rbt2_CheckedChanged);
			this->rbt1->AutoSize = true;
			this->rbt1->BackColor = System::Drawing::Color::White;
			this->rbt1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbt1->Location = System::Drawing::Point(99, 160);
			this->rbt1->Name = L"rbt1";
			this->rbt1->Size = System::Drawing::Size(241, 22);
			this->rbt1->TabIndex = 8;
			this->rbt1->Text = L"Горизонтальная укладка";
			this->rbt1->UseVisualStyleBackColor = false;
			this->rbt1->CheckedChanged += gcnew System::EventHandler(this, &Form1::rbt1_CheckedChanged);
			this->nudHP->Location = System::Drawing::Point(433, 99);
			this->nudHP->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			this->nudHP->Name = L"nudHP";
			this->nudHP->Size = System::Drawing::Size(132, 20);
			this->nudHP->TabIndex = 7;
			this->nudHP->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 70, 0, 0, 0 });
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(571, 101);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 18);
			this->label6->TabIndex = 6;
			this->label6->Text = L"см";
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(571, 75);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 18);
			this->label5->TabIndex = 5;
			this->label5->Text = L"см";
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(234, 101);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(178, 18);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Длина паркетины =";
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(234, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(193, 18);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Ширина паркетины =";
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(234, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Длина комнаты =\r\n";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 15.75, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(303, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Исходные данные";
			this->nudWP->Location = System::Drawing::Point(433, 125);
			this->nudWP->Name = L"nudWP";
			this->nudWP->Size = System::Drawing::Size(132, 20);
			this->nudWP->TabIndex = 0;
			this->nudWP->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(818, 590);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Form1";
			this->Text = L"Расчет паркета";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudHP))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudWP))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{

	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{

	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{

	}
	private: System::Void rbt1_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void rbt2_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
