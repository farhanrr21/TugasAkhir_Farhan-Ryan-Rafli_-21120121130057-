#pragma once

namespace TAZodiak {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Details
	/// </summary>
	public ref class Details : public System::Windows::Forms::Form
	{
	public:
		Details(void)
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
		~Details()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	public: System::Windows::Forms::Label^ lZodiac;
	public: System::Windows::Forms::TextBox^ txtDeskripsi;

	protected:

	private: System::Windows::Forms::Button^ btnOk;

	private:

	private:

	protected:

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
			this->lZodiac = (gcnew System::Windows::Forms::Label());
			this->txtDeskripsi = (gcnew System::Windows::Forms::TextBox());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lZodiac
			// 
			this->lZodiac->AutoSize = true;
			this->lZodiac->BackColor = System::Drawing::Color::Transparent;
			this->lZodiac->Font = (gcnew System::Drawing::Font(L"Tahoma", 40));
			this->lZodiac->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->lZodiac->Location = System::Drawing::Point(104, 80);
			this->lZodiac->Name = L"lZodiac";
			this->lZodiac->Size = System::Drawing::Size(271, 97);
			this->lZodiac->TabIndex = 43;
			this->lZodiac->Text = L"Zodiac";
			this->lZodiac->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtDeskripsi
			// 
			this->txtDeskripsi->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtDeskripsi->Cursor = System::Windows::Forms::Cursors::Default;
			this->txtDeskripsi->Enabled = false;
			this->txtDeskripsi->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDeskripsi->Location = System::Drawing::Point(12, 253);
			this->txtDeskripsi->Multiline = true;
			this->txtDeskripsi->Name = L"txtDeskripsi";
			this->txtDeskripsi->ReadOnly = true;
			this->txtDeskripsi->Size = System::Drawing::Size(461, 205);
			this->txtDeskripsi->TabIndex = 44;
			// 
			// btnOk
			// 
			this->btnOk->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOk->Location = System::Drawing::Point(158, 484);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(164, 53);
			this->btnOk->TabIndex = 45;
			this->btnOk->Text = L"OK";
			this->btnOk->UseVisualStyleBackColor = true;
			this->btnOk->Click += gcnew System::EventHandler(this, &Details::btnOk_Click);
			// 
			// Details
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(485, 562);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->txtDeskripsi);
			this->Controls->Add(this->lZodiac);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Details";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Details";
			this->Load += gcnew System::EventHandler(this, &Details::Details_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
private: System::Void Details_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
