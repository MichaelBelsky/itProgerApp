#pragma once
#include "DataHandler.h"

namespace itProgerApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для itProgerForm
	/// </summary>
	public ref class itProgerForm : public System::Windows::Forms::Form
	{
	public:
		itProgerForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~itProgerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ addBtn;
	protected:




	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textField;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(itProgerForm::typeid));
			this->addBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textField = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// addBtn
			// 
			this->addBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->addBtn->Location = System::Drawing::Point(18, 254);
			this->addBtn->Name = L"addBtn";
			this->addBtn->Size = System::Drawing::Size(90, 34);
			this->addBtn->TabIndex = 0;
			this->addBtn->Text = L"Добавить";
			this->addBtn->UseVisualStyleBackColor = false;
			this->addBtn->Click += gcnew System::EventHandler(this, &itProgerForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(383, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(294, 299);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->UseWaitCursor = true;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &itProgerForm::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(11, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(229, 37);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Добавьте дела";
			// 
			// textField
			// 
			this->textField->AcceptsReturn = true;
			this->textField->BackColor = System::Drawing::Color::Navy;
			this->textField->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textField->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textField->ForeColor = System::Drawing::Color::LightCyan;
			this->textField->Location = System::Drawing::Point(18, 108);
			this->textField->Name = L"textField";
			this->textField->Size = System::Drawing::Size(238, 31);
			this->textField->TabIndex = 11;
			this->textField->Text = L"Ведите текст";
			this->textField->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &itProgerForm::textField_MouseClick);
			this->textField->TextChanged += gcnew System::EventHandler(this, &itProgerForm::textField_TextChanged);
			// 
			// itProgerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(689, 358);
			this->Controls->Add(this->textField);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->addBtn);
			this->Name = L"itProgerForm";
			this->Text = L"Список дел";
			this->Load += gcnew System::EventHandler(this, &itProgerForm::itProgerForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		DataHandler dh;
		dh.insertTask(textField->Text);
		textField->Clear();
//		textField->Visible = !textField->Visible;	// togle из домашнего задания

	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void itProgerForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textField_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void textField_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void textField_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	textField->Clear();
}
};
}
