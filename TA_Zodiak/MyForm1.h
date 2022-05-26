#pragma once
#include "MyForm2.h"
#include <chrono>
#include <thread>

namespace TAZodiak {

	using namespace std::this_thread; // sleep_for, sleep_until
	using namespace std::chrono; // nanoseconds, system_clock, seconds
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ username;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textboxDay;
	private: System::Windows::Forms::TextBox^ textMonth;
	private: System::Windows::Forms::TextBox^ textYear;


	private: System::Windows::Forms::Label^ labelDay;
	private: System::Windows::Forms::Label^ labelMonth;
	private: System::Windows::Forms::Label^ labelYear;
	private: System::Windows::Forms::Label^ labelInfo;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnSubmit;
	private: System::Windows::Forms::Label^ labelNama;
	private: System::Windows::Forms::Label^ labelZodiac;
	private: System::Windows::Forms::PictureBox^ pAries;


	private: System::Windows::Forms::Button^ btnTry;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ pTaurus;
	private: System::Windows::Forms::PictureBox^ pGemini;
	private: System::Windows::Forms::PictureBox^ pCancer;
	private: System::Windows::Forms::PictureBox^ pLeo;
	private: System::Windows::Forms::PictureBox^ pVirgo;
	private: System::Windows::Forms::PictureBox^ pLibra;
	private: System::Windows::Forms::PictureBox^ pScorpio;
	private: System::Windows::Forms::PictureBox^ pSagittarius;
	private: System::Windows::Forms::PictureBox^ pCapricorn;
	private: System::Windows::Forms::PictureBox^ pAquarius;
	private: System::Windows::Forms::PictureBox^ pPisces;
	private: System::Windows::Forms::Button^ btnDetails;








	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->username = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textboxDay = (gcnew System::Windows::Forms::TextBox());
			this->textMonth = (gcnew System::Windows::Forms::TextBox());
			this->textYear = (gcnew System::Windows::Forms::TextBox());
			this->labelDay = (gcnew System::Windows::Forms::Label());
			this->labelMonth = (gcnew System::Windows::Forms::Label());
			this->labelYear = (gcnew System::Windows::Forms::Label());
			this->labelInfo = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->labelNama = (gcnew System::Windows::Forms::Label());
			this->labelZodiac = (gcnew System::Windows::Forms::Label());
			this->pAries = (gcnew System::Windows::Forms::PictureBox());
			this->btnTry = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pTaurus = (gcnew System::Windows::Forms::PictureBox());
			this->pGemini = (gcnew System::Windows::Forms::PictureBox());
			this->pCancer = (gcnew System::Windows::Forms::PictureBox());
			this->pLeo = (gcnew System::Windows::Forms::PictureBox());
			this->pVirgo = (gcnew System::Windows::Forms::PictureBox());
			this->pLibra = (gcnew System::Windows::Forms::PictureBox());
			this->pScorpio = (gcnew System::Windows::Forms::PictureBox());
			this->pSagittarius = (gcnew System::Windows::Forms::PictureBox());
			this->pCapricorn = (gcnew System::Windows::Forms::PictureBox());
			this->pAquarius = (gcnew System::Windows::Forms::PictureBox());
			this->pPisces = (gcnew System::Windows::Forms::PictureBox());
			this->btnDetails = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pAries))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pTaurus))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pGemini))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pCancer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pLeo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pVirgo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pLibra))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pScorpio))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pSagittarius))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pCapricorn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pAquarius))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pPisces))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(24, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(206, 26);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->BackColor = System::Drawing::Color::Transparent;
			this->username->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 32, System::Drawing::FontStyle::Bold));
			this->username->ForeColor = System::Drawing::Color::White;
			this->username->Location = System::Drawing::Point(22, 201);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(658, 172);
			this->username->TabIndex = 1;
			this->username->Text = L"Welcome\r\nWhat is you\'re name\?";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->ForeColor = System::Drawing::Color::Transparent;
			this->panel1->Location = System::Drawing::Point(37, 395);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(388, 60);
			this->panel1->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox1->Location = System::Drawing::Point(20, 15);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(351, 28);
			this->textBox1->TabIndex = 0;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Location = System::Drawing::Point(440, 395);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(60, 60);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox2_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::Transparent;
			this->btnExit->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->ForeColor = System::Drawing::Color::White;
			this->btnExit->Location = System::Drawing::Point(835, 22);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(122, 40);
			this->btnExit->TabIndex = 4;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm1::btnExit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 46, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(286, 181);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(406, 123);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Birthday";
			// 
			// textboxDay
			// 
			this->textboxDay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textboxDay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21));
			this->textboxDay->Location = System::Drawing::Point(274, 349);
			this->textboxDay->Name = L"textboxDay";
			this->textboxDay->Size = System::Drawing::Size(77, 55);
			this->textboxDay->TabIndex = 6;
			this->textboxDay->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textboxDay->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textboxDay_KeyPress);
			// 
			// textMonth
			// 
			this->textMonth->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textMonth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21));
			this->textMonth->Location = System::Drawing::Point(421, 349);
			this->textMonth->Name = L"textMonth";
			this->textMonth->Size = System::Drawing::Size(76, 55);
			this->textMonth->TabIndex = 7;
			this->textMonth->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textMonth->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox2_KeyPress);
			// 
			// textYear
			// 
			this->textYear->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21));
			this->textYear->Location = System::Drawing::Point(564, 349);
			this->textYear->Name = L"textYear";
			this->textYear->Size = System::Drawing::Size(143, 55);
			this->textYear->TabIndex = 8;
			this->textYear->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textYear->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox3_KeyPress);
			// 
			// labelDay
			// 
			this->labelDay->AutoSize = true;
			this->labelDay->BackColor = System::Drawing::Color::Transparent;
			this->labelDay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->labelDay->ForeColor = System::Drawing::Color::White;
			this->labelDay->Location = System::Drawing::Point(288, 316);
			this->labelDay->Name = L"labelDay";
			this->labelDay->Size = System::Drawing::Size(51, 30);
			this->labelDay->TabIndex = 9;
			this->labelDay->Text = L"DD";
			// 
			// labelMonth
			// 
			this->labelMonth->AutoSize = true;
			this->labelMonth->BackColor = System::Drawing::Color::Transparent;
			this->labelMonth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->labelMonth->ForeColor = System::Drawing::Color::White;
			this->labelMonth->Location = System::Drawing::Point(430, 316);
			this->labelMonth->Name = L"labelMonth";
			this->labelMonth->Size = System::Drawing::Size(57, 30);
			this->labelMonth->TabIndex = 10;
			this->labelMonth->Text = L"MM";
			// 
			// labelYear
			// 
			this->labelYear->AutoSize = true;
			this->labelYear->BackColor = System::Drawing::Color::Transparent;
			this->labelYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->labelYear->ForeColor = System::Drawing::Color::White;
			this->labelYear->Location = System::Drawing::Point(596, 316);
			this->labelYear->Name = L"labelYear";
			this->labelYear->Size = System::Drawing::Size(77, 30);
			this->labelYear->TabIndex = 11;
			this->labelYear->Text = L"YYYY";
			// 
			// labelInfo
			// 
			this->labelInfo->AutoSize = true;
			this->labelInfo->BackColor = System::Drawing::Color::Transparent;
			this->labelInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->labelInfo->ForeColor = System::Drawing::Color::White;
			this->labelInfo->Location = System::Drawing::Point(269, 421);
			this->labelInfo->Name = L"labelInfo";
			this->labelInfo->Size = System::Drawing::Size(114, 20);
			this->labelInfo->TabIndex = 12;
			this->labelInfo->Text = L"*Numbers Only";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(367, 358);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 39);
			this->label6->TabIndex = 13;
			this->label6->Text = L"//";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(513, 358);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 39);
			this->label7->TabIndex = 14;
			this->label7->Text = L"//";
			// 
			// btnSubmit
			// 
			this->btnSubmit->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->btnSubmit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSubmit->FlatAppearance->BorderSize = 0;
			this->btnSubmit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSubmit->ForeColor = System::Drawing::Color::White;
			this->btnSubmit->Location = System::Drawing::Point(357, 459);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(253, 59);
			this->btnSubmit->TabIndex = 15;
			this->btnSubmit->Text = L"SUBMIT\r\n";
			this->btnSubmit->UseVisualStyleBackColor = false;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &MyForm1::btnSubmit_Click);
			// 
			// labelNama
			// 
			this->labelNama->AutoSize = true;
			this->labelNama->BackColor = System::Drawing::Color::Transparent;
			this->labelNama->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 30, System::Drawing::FontStyle::Bold));
			this->labelNama->ForeColor = System::Drawing::Color::White;
			this->labelNama->Location = System::Drawing::Point(45, 243);
			this->labelNama->Name = L"labelNama";
			this->labelNama->Size = System::Drawing::Size(229, 81);
			this->labelNama->TabIndex = 16;
			this->labelNama->Text = L"$Nama";
			this->labelNama->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelZodiac
			// 
			this->labelZodiac->AutoSize = true;
			this->labelZodiac->BackColor = System::Drawing::Color::Transparent;
			this->labelZodiac->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 35, System::Drawing::FontStyle::Bold));
			this->labelZodiac->ForeColor = System::Drawing::Color::White;
			this->labelZodiac->Location = System::Drawing::Point(43, 324);
			this->labelZodiac->Name = L"labelZodiac";
			this->labelZodiac->Size = System::Drawing::Size(322, 93);
			this->labelZodiac->TabIndex = 17;
			this->labelZodiac->Text = L"Zodiac Is";
			this->labelZodiac->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pAries
			// 
			this->pAries->BackColor = System::Drawing::Color::Transparent;
			this->pAries->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pAries.Image")));
			this->pAries->Location = System::Drawing::Point(651, 196);
			this->pAries->Name = L"pAries";
			this->pAries->Size = System::Drawing::Size(276, 269);
			this->pAries->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pAries->TabIndex = 18;
			this->pAries->TabStop = false;
			// 
			// btnTry
			// 
			this->btnTry->BackColor = System::Drawing::Color::OliveDrab;
			this->btnTry->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTry->Font = (gcnew System::Drawing::Font(L"ALISEO", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTry->ForeColor = System::Drawing::Color::Ivory;
			this->btnTry->Location = System::Drawing::Point(516, 524);
			this->btnTry->Name = L"btnTry";
			this->btnTry->Size = System::Drawing::Size(205, 48);
			this->btnTry->TabIndex = 19;
			this->btnTry->Text = L"Try Again!";
			this->btnTry->UseVisualStyleBackColor = false;
			this->btnTry->Click += gcnew System::EventHandler(this, &MyForm1::btnTry_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm1::timer1_Tick);
			// 
			// pTaurus
			// 
			this->pTaurus->BackColor = System::Drawing::Color::Transparent;
			this->pTaurus->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pTaurus.Image")));
			this->pTaurus->Location = System::Drawing::Point(651, 201);
			this->pTaurus->Name = L"pTaurus";
			this->pTaurus->Size = System::Drawing::Size(276, 269);
			this->pTaurus->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pTaurus->TabIndex = 20;
			this->pTaurus->TabStop = false;
			// 
			// pGemini
			// 
			this->pGemini->BackColor = System::Drawing::Color::Transparent;
			this->pGemini->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pGemini.Image")));
			this->pGemini->Location = System::Drawing::Point(651, 196);
			this->pGemini->Name = L"pGemini";
			this->pGemini->Size = System::Drawing::Size(276, 269);
			this->pGemini->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pGemini->TabIndex = 21;
			this->pGemini->TabStop = false;
			// 
			// pCancer
			// 
			this->pCancer->BackColor = System::Drawing::Color::Transparent;
			this->pCancer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pCancer.Image")));
			this->pCancer->Location = System::Drawing::Point(651, 201);
			this->pCancer->Name = L"pCancer";
			this->pCancer->Size = System::Drawing::Size(276, 269);
			this->pCancer->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pCancer->TabIndex = 22;
			this->pCancer->TabStop = false;
			// 
			// pLeo
			// 
			this->pLeo->BackColor = System::Drawing::Color::Transparent;
			this->pLeo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pLeo.Image")));
			this->pLeo->Location = System::Drawing::Point(651, 201);
			this->pLeo->Name = L"pLeo";
			this->pLeo->Size = System::Drawing::Size(276, 269);
			this->pLeo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pLeo->TabIndex = 23;
			this->pLeo->TabStop = false;
			// 
			// pVirgo
			// 
			this->pVirgo->BackColor = System::Drawing::Color::Transparent;
			this->pVirgo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pVirgo.Image")));
			this->pVirgo->Location = System::Drawing::Point(651, 201);
			this->pVirgo->Name = L"pVirgo";
			this->pVirgo->Size = System::Drawing::Size(276, 269);
			this->pVirgo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pVirgo->TabIndex = 24;
			this->pVirgo->TabStop = false;
			// 
			// pLibra
			// 
			this->pLibra->BackColor = System::Drawing::Color::Transparent;
			this->pLibra->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pLibra.Image")));
			this->pLibra->Location = System::Drawing::Point(651, 201);
			this->pLibra->Name = L"pLibra";
			this->pLibra->Size = System::Drawing::Size(276, 269);
			this->pLibra->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pLibra->TabIndex = 25;
			this->pLibra->TabStop = false;
			// 
			// pScorpio
			// 
			this->pScorpio->BackColor = System::Drawing::Color::Transparent;
			this->pScorpio->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pScorpio.Image")));
			this->pScorpio->Location = System::Drawing::Point(651, 201);
			this->pScorpio->Name = L"pScorpio";
			this->pScorpio->Size = System::Drawing::Size(276, 269);
			this->pScorpio->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pScorpio->TabIndex = 26;
			this->pScorpio->TabStop = false;
			// 
			// pSagittarius
			// 
			this->pSagittarius->BackColor = System::Drawing::Color::Transparent;
			this->pSagittarius->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pSagittarius.Image")));
			this->pSagittarius->Location = System::Drawing::Point(651, 201);
			this->pSagittarius->Name = L"pSagittarius";
			this->pSagittarius->Size = System::Drawing::Size(276, 269);
			this->pSagittarius->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pSagittarius->TabIndex = 27;
			this->pSagittarius->TabStop = false;
			// 
			// pCapricorn
			// 
			this->pCapricorn->BackColor = System::Drawing::Color::Transparent;
			this->pCapricorn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pCapricorn.Image")));
			this->pCapricorn->Location = System::Drawing::Point(651, 201);
			this->pCapricorn->Name = L"pCapricorn";
			this->pCapricorn->Size = System::Drawing::Size(276, 269);
			this->pCapricorn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pCapricorn->TabIndex = 28;
			this->pCapricorn->TabStop = false;
			// 
			// pAquarius
			// 
			this->pAquarius->BackColor = System::Drawing::Color::Transparent;
			this->pAquarius->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pAquarius.Image")));
			this->pAquarius->Location = System::Drawing::Point(651, 201);
			this->pAquarius->Name = L"pAquarius";
			this->pAquarius->Size = System::Drawing::Size(276, 269);
			this->pAquarius->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pAquarius->TabIndex = 29;
			this->pAquarius->TabStop = false;
			// 
			// pPisces
			// 
			this->pPisces->BackColor = System::Drawing::Color::Transparent;
			this->pPisces->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pPisces.Image")));
			this->pPisces->Location = System::Drawing::Point(651, 201);
			this->pPisces->Name = L"pPisces";
			this->pPisces->Size = System::Drawing::Size(276, 269);
			this->pPisces->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pPisces->TabIndex = 30;
			this->pPisces->TabStop = false;
			// 
			// btnDetails
			// 
			this->btnDetails->BackColor = System::Drawing::Color::Transparent;
			this->btnDetails->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDetails->Font = (gcnew System::Drawing::Font(L"ALISEO", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDetails->ForeColor = System::Drawing::Color::Ivory;
			this->btnDetails->Location = System::Drawing::Point(278, 524);
			this->btnDetails->Name = L"btnDetails";
			this->btnDetails->Size = System::Drawing::Size(205, 48);
			this->btnDetails->TabIndex = 31;
			this->btnDetails->Text = L"See Details";
			this->btnDetails->UseVisualStyleBackColor = false;
			this->btnDetails->Click += gcnew System::EventHandler(this, &MyForm1::btnDetails_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1000, 700);
			this->Controls->Add(this->btnDetails);
			this->Controls->Add(this->pPisces);
			this->Controls->Add(this->pAquarius);
			this->Controls->Add(this->pCapricorn);
			this->Controls->Add(this->pSagittarius);
			this->Controls->Add(this->pScorpio);
			this->Controls->Add(this->pLibra);
			this->Controls->Add(this->pVirgo);
			this->Controls->Add(this->pLeo);
			this->Controls->Add(this->pCancer);
			this->Controls->Add(this->pGemini);
			this->Controls->Add(this->pTaurus);
			this->Controls->Add(this->labelZodiac);
			this->Controls->Add(this->btnTry);
			this->Controls->Add(this->labelNama);
			this->Controls->Add(this->btnSubmit);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->labelInfo);
			this->Controls->Add(this->labelYear);
			this->Controls->Add(this->labelMonth);
			this->Controls->Add(this->labelDay);
			this->Controls->Add(this->textYear);
			this->Controls->Add(this->textMonth);
			this->Controls->Add(this->textboxDay);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->username);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pAries);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pAries))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pTaurus))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pGemini))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pCancer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pLeo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pVirgo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pLibra))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pScorpio))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pSagittarius))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pCapricorn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pAquarius))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pPisces))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
			//Nyimpen bentar buat ntar kopas
			this->label1->Hide();
			this->textboxDay->Hide();
			this->textMonth->Hide();
			this->textYear->Hide();
			this->labelDay->Hide();
			this->labelMonth->Hide();
			this->labelYear->Hide();
			this->label6->Hide();
			this->label7->Hide();
			this->btnSubmit->Hide();
			this->labelInfo->Hide();
			//Bagan Hasil
			this->labelNama->Hide();
			this->labelZodiac->Hide();
			this->btnTry->Hide();
			this->btnDetails->Hide();
			//Hide Zodiac
			this->pAries->Hide();
			this->pTaurus->Hide();
			this->pGemini->Hide();
			this->pCancer->Hide();
			this->pLeo->Hide();
			this->pVirgo->Hide();
			this->pLibra->Hide();
			this->pScorpio->Hide();
			this->pSagittarius->Hide();
			this->pCapricorn->Hide();
			this->pAquarius->Hide();
			this->pPisces->Hide();

		}
#pragma endregion
		//Encapsulation
		private:
			String^ userName;
			String^ Hari;
			String^ Bulan;
			String^ Tahun;

		//Getter
		public:
			String^ getUsername() {
				return userName;
			}
			String^ getDay() {
				return Hari;
			}
			String^ getMonth() {
				return Bulan;
			}
			String^ getYear() {
				return Tahun;
			}
		//Setter
			void setUsername(String^ name) {
				userName = name;
			}
			void setTanggal(String^ hari, String^ bulan, String^ tahun) {
				Hari = hari;
				Bulan = bulan;
				Tahun = tahun;
			}


	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox1->Text == "") {
			MessageBox::Show("Isi nama terlebih dahulu!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			//Hide
			this->username->Hide();
			this->panel1->Hide();
			this->pictureBox2->Hide();
			this->textBox1->Hide();
			//Show
			this->label1->Show();
			this->textboxDay->Show();
			this->textMonth->Show();
			this->textYear->Show();
			this->labelDay->Show();
			this->labelMonth->Show();
			this->labelYear->Show();
			this->label6->Show();
			this->label7->Show();
			this->btnSubmit->Show();
			this->labelInfo->Show();
			setUsername(this->username->Text);
		}
	}


	//Sumber : "https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox"
	private: System::Void textboxDay_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Hanya Menerima Digit/Angka
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Hanya Menerima Digit/Angka
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}

	private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Hanya Menerima Digit/Angka
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Apakah anda yakin ingin keluar?", "Exit", MessageBoxButtons::YesNo, MessageBoxIcon::Question) ==
			System::Windows::Forms::DialogResult::Yes) {
			Application::Exit();
		}
	}
	private: System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textboxDay->Text == "" || this->textMonth->Text == "" || this->textYear->Text == "") {
			MessageBox::Show("Harap input terisi lebih dahulu!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			int hari = Convert::ToInt32(this->textboxDay->Text);
			int bulan = Convert::ToInt32(this->textMonth->Text);
			int tahun = Convert::ToInt32(this->textYear->Text);

			//PENGKONDISIAN
			if (!(hari > 0 && hari < 32 && bulan <= 12 && bulan > 0 && tahun > 1000 && tahun <= 2022)) {
				MessageBox::Show("Maaf, Masukkan anda Invalid", "Invalid", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				//Zodiak
				// //Hide
				this->label1->Hide();
				this->textboxDay->Hide();
				this->textMonth->Hide();
				this->textYear->Hide();
				this->labelDay->Hide();
				this->labelMonth->Hide();
				this->labelYear->Hide();
				this->label6->Hide();
				this->label7->Hide();
				this->btnSubmit->Hide();
				this->labelInfo->Hide();
				//Show
				this->labelNama->Show();
				this->labelZodiac->Show();
				//labelName
				this->labelNama->Text = this->textBox1->Text;
				//tick
				this->timer1->Enabled = true;
				//Set
				setTanggal(this->textboxDay->Text, this->textMonth->Text, this->textYear->Text);


			}
		}
		
	}
		   static int tick = 1;
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		int hari = Convert::ToInt32(getDay());
		int bulan = Convert::ToInt32(getMonth());
		int tahun = Convert::ToInt32(getYear());
		//label
		if (tick < 4) {
			this->labelZodiac->Text += ".";
		}
		else if (tick == 6) {
			//Aries
			if ((hari >= 21 && bulan == 3) || (hari <= 19 && bulan == 4)) {
				// TODO launch
				this->pAries->Show();
				this->labelZodiac->Text = "Zodiac is Aries!";
			}
			//Taurus
			else if ((hari >= 20 && bulan == 4) || (hari <= 20 && bulan == 5)) {
				//TODO
				this->pTaurus->Show();
				this->labelZodiac->Text = "Zodiac is Taurus!";
			}
			//Gemini
			else if ((hari >= 21 && bulan == 5) || (hari <= 20 && bulan == 6)) {
				//TODO
				this->pGemini->Show();
				this->labelZodiac->Text = "Zodiac is Gemini!";
			}
			//Cancer
			else if ((hari >= 21 && bulan == 6) || (hari <= 22 && bulan == 7)) {
				//TODO
				this->pCancer->Show();
				this->labelZodiac->Text = "Zodiac is Cancer!";
			}
			//Leo
			else if ((hari >= 23 && bulan == 7) || (hari <= 22 && bulan == 8)) {
				//TODO
				this->pLeo->Show();
				this->labelZodiac->Text = "Zodiac is Leo!";
			}
			//Virgo
			else if ((hari >= 23 && bulan == 8) || (hari <= 22 && bulan == 9)) {
				//TODO
				this->pVirgo->Show();
				this->labelZodiac->Text = "Zodiac is Virgo!";
			}
			//Libra
			else if ((hari >= 23 && bulan == 9) || (hari <= 22 && bulan == 10)) {
				//TODO
				this->pLibra->Show();
				this->labelZodiac->Text = "Zodiac is Libra!";
			}
			//Scorpio
			else if ((hari >= 23 && bulan == 10) || (hari <= 21 && bulan == 11)) {
				//TODO
				this->pScorpio->Show();
				this->labelZodiac->Text = "Zodiac is Scorpio!";
			}
			//Sagittarius
			else if ((hari >= 22 && bulan == 11) || (hari <= 21 && bulan == 12)) {
				//TODO
				this->pSagittarius->Show();
				this->labelZodiac->Text = "Zodiac is \nSagittarius!";
				this->labelZodiac->Location = System::Drawing::Point(43, 277);
				this->labelNama->Location = System::Drawing::Point(45, 196);
			}
			//Capricorn
			else if ((hari >= 22 && bulan == 12) || (hari <= 19 && bulan == 1)) {
				//TODO
				this->pCapricorn->Show();
				this->labelZodiac->Text = "Zodiac is \nCapricorn!";
				this->labelZodiac->Location = System::Drawing::Point(43, 277);
				this->labelNama->Location = System::Drawing::Point(45, 196);
			}
			//Aquarius
			else if ((hari >= 20 && bulan == 1) || (hari <= 18 && bulan == 2)) {
				//TODO
				this->pAquarius->Show();
				this->labelZodiac->Text = "Zodiac is \nAquarius!";
				this->labelZodiac->Location = System::Drawing::Point(43, 277);
				this->labelNama->Location = System::Drawing::Point(45, 196);
			}
			//Pisces
			else if ((hari >= 19 && bulan == 2) || (hari <= 20 && bulan == 3)) {
				//TODO
				this->pPisces->Show();
				this->labelZodiac->Text = "Zodiac is Pisces!";
			}
			//Show
			this->btnTry->Show();
			this->btnDetails->Show();
		}
		tick++;
		
	}
	private: System::Void btnTry_Click(System::Object^ sender, System::EventArgs^ e) {
		//Hide
		this->labelNama->Hide();
		this->labelZodiac->Hide();
		this->btnTry->Hide();
		this->btnDetails->Hide();
		//Hide Zodiac
		this->pAries->Hide();
		this->pTaurus->Hide();
		this->pGemini->Hide();
		this->pCancer->Hide();
		this->pLeo->Hide();
		this->pVirgo->Hide();
		this->pLibra->Hide();
		this->pScorpio->Hide();
		this->pSagittarius->Hide();
		this->pCapricorn->Hide();
		this->pAquarius->Hide();
		this->pPisces->Hide();
		//Show
		this->username->Show();
		this->panel1->Show();
		this->pictureBox2->Show();
		this->textBox1->Show();
		//Reset Input
		this->textBox1->Text = "";
		this->textboxDay->Text = "";
		this->textMonth->Text = "";
		this->textYear->Text = "";
		this->labelZodiac->Text = "Zodiac is";
		this->labelZodiac->Location = System::Drawing::Point(43, 324);
		this->labelNama->Location = System::Drawing::Point(45, 243);
		this->timer1->Enabled = false;
		tick = 1;
	}
	private: System::Void btnDetails_Click(System::Object^ sender, System::EventArgs^ e) {
		int hari = Convert::ToInt32(getDay());
		int bulan = Convert::ToInt32(getMonth());
		int tahun = Convert::ToInt32(getYear());
		//Popup Details menu
		Details^ main = gcnew Details();
		
		

		//Aries
		if ((hari >= 21 && bulan == 3) || (hari <= 19 && bulan == 4)) {
			// TODO launch
			main->lZodiac->Text = "Aries";
			main->txtDeskripsi->Text = "Zodiak Aries memiliki lambang domba jantan. Lambang zodiak Aries memiliki arti tentang kesuburan, keberanian, agresif serta serangan. Sedangkan lambang tanduk pada zodiak Aries memiliki makna tentang keinginan atau Hasrat untuk memimpin. Karena itulah Aries juga punya karakteristik sebagai seorang yang suka memimpin.";
		}
		//Taurus
		else if ((hari >= 20 && bulan == 4) || (hari <= 20 && bulan == 5)) {
			//TODO
			main->lZodiac->Text = "Taurus";
			main->txtDeskripsi->Text = "Zodiak Taurus memiliki lambang Sapi dengan tanduk atau banteng. Lambang banteng ini memiliki makna tentang kekuatan, kekuasaan, kekerasan hati, serta kejantanan. Zodiak ini bisa jadi pemarah jika ada yang membuatnya emosi. Namun juga mereka sebenarnya adalah seorang yang sangat menyukai perdamaian.";
		}
		//Gemini
		else if ((hari >= 21 && bulan == 5) || (hari <= 20 && bulan == 6)) {
			//TODO
			main->lZodiac->Text = "Gemini";
			main->txtDeskripsi->Text = " Zodiak Gemini memiliki lambang anak kembar. Arti zodiak Gemini dengan lambang ini adalah memiliki dua sisi berbeda dalam satu tubuh. Selain itu lambang ini juga memiliki makna adanya perubahan yang terjadi di antara dua sisi. Artinya zodiak ini cukup mudah adaptasi pada lingkungan baru.";
		}
		//Cancer
		else if ((hari >= 21 && bulan == 6) || (hari <= 22 && bulan == 7)) {
			//TODO
			main->lZodiac->Text = "Cancer";
			main->txtDeskripsi->Text = "Zodiak Cancer memiliki lambang kepiting. Lambang zodiak ini dikenal memiliki sikap yang unik, berbeda, tergolong mandiri, sensitif, tertutup, terkadang juga egois. Selain itu lambang tersebut juga bermakna bahwa mereka cukup nyaman berada pada zona nyamannya saja.";
		}
		//Leo
		else if ((hari >= 23 && bulan == 7) || (hari <= 22 && bulan == 8)) {
			//TODO
			main->lZodiac->Text = "Leo";
			main->txtDeskripsi->Text = "Zodiak Leo memiliki lambang singa. Arti zodiak ini adalah seorang pemimpin yang dikenal berani, memiliki kekuatan, dan kekuasaan.";
		}
		//Virgo
		else if ((hari >= 23 && bulan == 8) || (hari <= 22 && bulan == 9)) {
			//TODO
			main->lZodiac->Text = "Virgo";
			main->txtDeskripsi->Text = " Zodiak Virgo memiliki lambang perempuan. Arti zodiak ini mengandung makna seorang yang pemalu, lembut, natural, serta bijaksana.";
		}
		//Libra
		else if ((hari >= 23 && bulan == 9) || (hari <= 22 && bulan == 10)) {
			//TODO
			main->lZodiac->Text = "Libra";
			main->txtDeskripsi->Text = "Zodiak Libra memiliki lambang timbangan. Arti zodiak ini adalah tentang keseimbangan baik itu keharmonisan serta keadilan.";
		}
		//Scorpio
		else if ((hari >= 23 && bulan == 10) || (hari <= 21 && bulan == 11)) {
			//TODO
			main->lZodiac->Text = "Scorpio";
			main->txtDeskripsi->Text = "Zodiak Scorpio memiliki lambang kalajengking. Arti zodiak ini adalah penuh emosi serta pendendam. Hal ini juga melambangkan kalajengking yang dikenal termasuk hewan berbisa.";
		}
		//Sagittarius
		else if ((hari >= 22 && bulan == 11) || (hari <= 21 && bulan == 12)) {
			//TODO
			main->lZodiac->Text = "Sagittarius";
			main->txtDeskripsi->Text = "Zodiak Sagitarius memiliki lambang Archer. Arti zodiak ini yakni dikenal sebagai seseorang yang emosional, berani, penuh gairah.";
		}
		//Capricorn
		else if ((hari >= 22 && bulan == 12) || (hari <= 19 && bulan == 1)) {
			//TODO
			main->lZodiac->Text = "Capricorn";
			main->txtDeskripsi->Text = "Zodiak Capricorn memiliki lambang kambing jantan. Arti zodiak ini adalah keras kepala bahkan egois. Selain itu dikenal juga cukup misterius dan tertutup.";
		}
		//Aquarius
		else if ((hari >= 20 && bulan == 1) || (hari <= 18 && bulan == 2)) {
			//TODO
			main->lZodiac->Text = "Aquarius";
			main->txtDeskripsi->Text = " Zodiak Aquarius memiliki lambang pembawa air. Arti zodiak ini adalah natural serta spiritualis dan mencintai perdamaian.";
		}
		//Pisces
		else if ((hari >= 19 && bulan == 2) || (hari <= 20 && bulan == 3)) {
			//TODO
			main->lZodiac->Text = "Pisces";
			main->txtDeskripsi->Text = "Zodiak Pisces memiliki lambang ikan. Arti zodiak ini adalah cukup bimbang dalam mengambil sebuah keputusan. Karena itulah memiliki lambang dua ikan yang berlawanan arah.";
		}




		
		main->ShowDialog();
	}
};
}

/*
//TODO jangan lupa ntar dihapus ngabs
			//Nyimpen bentar buat ntar kopas
			this->label1->Hide();
			this->textboxDay->Hide();
			this->textMonth->Hide();
			this->textYear->Hide();
			this->labelDay->Hide();
			this->labelMonth->Hide();
			this->labelYear->Hide();
			this->label6->Hide();
			this->label7->Hide();
			this->btnSubmit->Hide();
			this->labelInfo->Hide();
			//Bagan Hasil
			this->labelNama->Hide();
			this->labelZodiac->Hide();
			this->btnTry->Hide();
			//Hide Zodiac
			this->pAries->Hide();
			this->pTaurus->Hide();
			this->pGemini->Hide();
			this->pCancer->Hide();
			this->pLeo->Hide();
			this->pVirgo->Hide();
			this->pLibra->Hide();
			this->pScorpio->Hide();
			this->pSagittarius->Hide();
			this->pCapricorn->Hide();
			this->pAquarius->Hide();
			this->pPisces->Hide();
*/
