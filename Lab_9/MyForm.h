#pragma once

namespace Lab9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ записатиДаніToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вивестиДаніToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проПрограмуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проАвтораToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->записатиДаніToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вивестиДаніToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проАвтораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(41, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ПІБ студента";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(41, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Курс";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(41, 181);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Група";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(41, 242);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Стипендія";
			this->label4->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(189, 68);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(194, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(189, 125);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(194, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(189, 179);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(194, 22);
			this->textBox3->TabIndex = 6;
			this->textBox3->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(191, 240);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(194, 22);
			this->textBox4->TabIndex = 7;
			this->textBox4->Visible = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->записатиДаніToolStripMenuItem,
					this->вивестиДаніToolStripMenuItem, this->проПрограмуToolStripMenuItem, this->проАвтораToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(533, 28);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// записатиДаніToolStripMenuItem
			// 
			this->записатиДаніToolStripMenuItem->Name = L"записатиДаніToolStripMenuItem";
			this->записатиДаніToolStripMenuItem->Size = System::Drawing::Size(120, 24);
			this->записатиДаніToolStripMenuItem->Text = L"Записати дані";
			this->записатиДаніToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::записатиДаніToolStripMenuItem_Click);
			// 
			// вивестиДаніToolStripMenuItem
			// 
			this->вивестиДаніToolStripMenuItem->Name = L"вивестиДаніToolStripMenuItem";
			this->вивестиДаніToolStripMenuItem->Size = System::Drawing::Size(112, 24);
			this->вивестиДаніToolStripMenuItem->Text = L"Вивести дані";
			this->вивестиДаніToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вивестиДаніToolStripMenuItem_Click);
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->проПрограмуToolStripMenuItem->Text = L"Про програму";
			this->проПрограмуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::проПрограмуToolStripMenuItem_Click);
			// 
			// проАвтораToolStripMenuItem
			// 
			this->проАвтораToolStripMenuItem->Name = L"проАвтораToolStripMenuItem";
			this->проАвтораToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->проАвтораToolStripMenuItem->Text = L"Про автора";
			this->проАвтораToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::проАвтораToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(163, 305);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 39);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Вивести";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::вивестиДаніToolStripMenuItem_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(72, 662);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 39);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Про програму";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::проПрограмуToolStripMenuItem_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(265, 662);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 39);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Про автора";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::проАвтораToolStripMenuItem_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(68, 380);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(332, 22);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Студенти, які не отримують стипендію";
			this->label5->Visible = false;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(45, 420);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(389, 190);
			this->textBox5->TabIndex = 13;
			this->textBox5->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(533, 735);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		ref struct student
		{
			String^ FIO, ^ Curs, ^ Gruppa;
			double a;
		};
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void записатиДаніToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Visible = true;
	textBox1->Visible = true;
	label2->Visible = true;
	textBox2->Visible = true;
	label3->Visible = true;
	textBox3->Visible = true;
	label4->Visible = true;
	textBox4->Visible = true;
	button1->Visible = true;
}
private: System::Void вивестиДаніToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label5->Visible = true;
	textBox5->Visible = true;
	double a;
	student^ stud = gcnew student;
	String^ s1, ^ s2;
	stud->FIO = textBox1->Text;
	stud->Curs = textBox2->Text;
	stud->Gruppa = textBox3->Text;
	stud->a = Convert::ToInt32(textBox4->Text);
	s1 = (stud->FIO + " " + stud->Curs + " " + stud->Gruppa + "\r\n");
	a = Convert::ToInt32(textBox4->Text);
	if (a == 0)
	{
		textBox5->AppendText(s1 + " " + s2 + "\r\n");
	}
	textBox1->Text = " ";
	textBox2->Text = " ";
	textBox3->Text = " ";
	textBox4->Text = " ";
}
private: System::Void проПрограмуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Структура містить такі поля: ПІП студента, курс, номер групи, стипендія. Вивести на екран всіх тих студентів, які не отримують стипендію.", "Про програму");
}
private: System::Void проАвтораToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Виконала студентка групи 3СОМ Комарова Каріна", "Про автора");
}
};
}
