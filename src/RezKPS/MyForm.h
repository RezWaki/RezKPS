#pragma once
#pragma comment(lib, "user32.lib")
#include <Windows.h>
#include <conio.h>

namespace RezKPS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::CheckBox^  checkBox1;

	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(10, 8);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(68, 22);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Navy;
			this->label1->Location = System::Drawing::Point(84, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Keys:";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(51, 36);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(124, 225);
			this->listBox1->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(181, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(65, 20);
			this->textBox1->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(184, 62);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(61, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Add...";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(178, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Key code:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(184, 232);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(68, 22);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Stop";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(184, 91);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(74, 30);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"Always on\r\ntop";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(258, 266);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"RezKPS";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int totalKeys, counter;
		array<String^, 1>^ keys;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 totalKeys = listBox1->Items->Count-1;
				 timer1->Start();
			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(listBox1->SelectedIndex < totalKeys){
					 //currentKey++;
					 listBox1->SelectedIndex++;
					 if(GetKeyState(Convert::ToInt16(listBox1->SelectedItem))){
						 label1->Text = Convert::ToString(Convert::ToInt64(label1->Text)+1);
					 }
				 }
				 else listBox1->SelectedIndex = -1;

			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 listBox1->Items->Add(textBox1->Text);
			 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Stop();
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 TopMost = checkBox1->Checked;
		 }
};
}
