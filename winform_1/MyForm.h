#pragma once

namespace winform1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ label_otvet;
	private: System::Windows::Forms::Button^ button_AC;
	private: System::Windows::Forms::Button^ button_plus_minys;
	private: System::Windows::Forms::Button^ button_prochent;
	private: System::Windows::Forms::Button^ button_delenie;
	private: System::Windows::Forms::Button^ button_7;
	private: System::Windows::Forms::Button^ button_8;
	private: System::Windows::Forms::Button^ button_9;






	private: System::Windows::Forms::Button^ button_ymnozh;
	private: System::Windows::Forms::Button^ button_4;
	private: System::Windows::Forms::Button^ button_5;
	private: System::Windows::Forms::Button^ button_6;




	private: System::Windows::Forms::Button^ button_minus;
	private: System::Windows::Forms::Button^ button_1;
	private: System::Windows::Forms::Button^ button_2;
	private: System::Windows::Forms::Button^ button_3;




	private: System::Windows::Forms::Button^ button_plas;

	private: System::Windows::Forms::Button^ button_0;

	private: System::Windows::Forms::Button^ button_point;
	private: System::Windows::Forms::Button^ button_rovno;

	private: float first_num;
	private: char user_action = ' ';
	private: bool is_equel = false;

	private: System::Windows::Forms::Button^ button_svorach;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->label_otvet = (gcnew System::Windows::Forms::Label());
			this->button_AC = (gcnew System::Windows::Forms::Button());
			this->button_plus_minys = (gcnew System::Windows::Forms::Button());
			this->button_prochent = (gcnew System::Windows::Forms::Button());
			this->button_delenie = (gcnew System::Windows::Forms::Button());
			this->button_7 = (gcnew System::Windows::Forms::Button());
			this->button_8 = (gcnew System::Windows::Forms::Button());
			this->button_9 = (gcnew System::Windows::Forms::Button());
			this->button_ymnozh = (gcnew System::Windows::Forms::Button());
			this->button_4 = (gcnew System::Windows::Forms::Button());
			this->button_5 = (gcnew System::Windows::Forms::Button());
			this->button_6 = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_1 = (gcnew System::Windows::Forms::Button());
			this->button_2 = (gcnew System::Windows::Forms::Button());
			this->button_3 = (gcnew System::Windows::Forms::Button());
			this->button_plas = (gcnew System::Windows::Forms::Button());
			this->button_0 = (gcnew System::Windows::Forms::Button());
			this->button_point = (gcnew System::Windows::Forms::Button());
			this->button_rovno = (gcnew System::Windows::Forms::Button());
			this->button_svorach = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_exit->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_exit->Location = System::Drawing::Point(262, 12);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(30, 20);
			this->button_exit->TabIndex = 0;
			this->button_exit->Text = L"X";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			// 
			// label_otvet
			// 
			this->label_otvet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_otvet->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_otvet->Location = System::Drawing::Point(12, 35);
			this->label_otvet->Name = L"label_otvet";
			this->label_otvet->Size = System::Drawing::Size(280, 52);
			this->label_otvet->TabIndex = 1;
			this->label_otvet->Text = L"0";
			// 
			// button_AC
			// 
			this->button_AC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)));
			this->button_AC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_AC->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_AC->Location = System::Drawing::Point(12, 116);
			this->button_AC->Name = L"button_AC";
			this->button_AC->Size = System::Drawing::Size(65, 50);
			this->button_AC->TabIndex = 2;
			this->button_AC->Text = L"AC";
			this->button_AC->UseVisualStyleBackColor = false;
			this->button_AC->Click += gcnew System::EventHandler(this, &MyForm::button_AC_Click);
			// 
			// button_plus_minys
			// 
			this->button_plus_minys->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(7)));
			this->button_plus_minys->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_plus_minys->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_plus_minys->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_plus_minys->Location = System::Drawing::Point(83, 116);
			this->button_plus_minys->Name = L"button_plus_minys";
			this->button_plus_minys->Size = System::Drawing::Size(65, 50);
			this->button_plus_minys->TabIndex = 3;
			this->button_plus_minys->Text = L"+/-";
			this->button_plus_minys->UseVisualStyleBackColor = false;
			this->button_plus_minys->Click += gcnew System::EventHandler(this, &MyForm::button_plus_minys_Click);
			// 
			// button_prochent
			// 
			this->button_prochent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)));
			this->button_prochent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_prochent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_prochent->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_prochent->Location = System::Drawing::Point(154, 116);
			this->button_prochent->Name = L"button_prochent";
			this->button_prochent->Size = System::Drawing::Size(65, 50);
			this->button_prochent->TabIndex = 4;
			this->button_prochent->Text = L"%";
			this->button_prochent->UseVisualStyleBackColor = false;
			this->button_prochent->Click += gcnew System::EventHandler(this, &MyForm::button_prochent_Click);
			// 
			// button_delenie
			// 
			this->button_delenie->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)));
			this->button_delenie->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_delenie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_delenie->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_delenie->Location = System::Drawing::Point(225, 116);
			this->button_delenie->Name = L"button_delenie";
			this->button_delenie->Size = System::Drawing::Size(65, 50);
			this->button_delenie->TabIndex = 5;
			this->button_delenie->Text = L"/";
			this->button_delenie->UseVisualStyleBackColor = false;
			this->button_delenie->Click += gcnew System::EventHandler(this, &MyForm::button_delenie_Click);
			// 
			// button_7
			// 
			this->button_7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->button_7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_7->Location = System::Drawing::Point(12, 172);
			this->button_7->Name = L"button_7";
			this->button_7->Size = System::Drawing::Size(65, 50);
			this->button_7->TabIndex = 6;
			this->button_7->Text = L"7";
			this->button_7->UseVisualStyleBackColor = false;
			this->button_7->Click += gcnew System::EventHandler(this, &MyForm::buttonNomber_Click);
			// 
			// button_8
			// 
			this->button_8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->button_8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_8->Location = System::Drawing::Point(83, 172);
			this->button_8->Name = L"button_8";
			this->button_8->Size = System::Drawing::Size(65, 50);
			this->button_8->TabIndex = 7;
			this->button_8->Text = L"8";
			this->button_8->UseVisualStyleBackColor = false;
			this->button_8->Click += gcnew System::EventHandler(this, &MyForm::buttonNomber_Click);
			// 
			// button_9
			// 
			this->button_9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->button_9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_9->Location = System::Drawing::Point(154, 172);
			this->button_9->Name = L"button_9";
			this->button_9->Size = System::Drawing::Size(65, 50);
			this->button_9->TabIndex = 8;
			this->button_9->Text = L"9";
			this->button_9->UseVisualStyleBackColor = false;
			this->button_9->Click += gcnew System::EventHandler(this, &MyForm::buttonNomber_Click);
			// 
			// button_ymnozh
			// 
			this->button_ymnozh->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)));
			this->button_ymnozh->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_ymnozh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_ymnozh->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_ymnozh->Location = System::Drawing::Point(225, 172);
			this->button_ymnozh->Name = L"button_ymnozh";
			this->button_ymnozh->Size = System::Drawing::Size(65, 50);
			this->button_ymnozh->TabIndex = 9;
			this->button_ymnozh->Text = L"*";
			this->button_ymnozh->UseVisualStyleBackColor = false;
			this->button_ymnozh->Click += gcnew System::EventHandler(this, &MyForm::button_ymnozh_Click);
			// 
			// button_4
			// 
			this->button_4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->button_4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_4->Location = System::Drawing::Point(12, 228);
			this->button_4->Name = L"button_4";
			this->button_4->Size = System::Drawing::Size(65, 50);
			this->button_4->TabIndex = 10;
			this->button_4->Text = L"4";
			this->button_4->UseVisualStyleBackColor = false;
			this->button_4->Click += gcnew System::EventHandler(this, &MyForm::buttonNomber_Click);
			// 
			// button_5
			// 
			this->button_5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->button_5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_5->Location = System::Drawing::Point(83, 228);
			this->button_5->Name = L"button_5";
			this->button_5->Size = System::Drawing::Size(65, 50);
			this->button_5->TabIndex = 11;
			this->button_5->Text = L"5";
			this->button_5->UseVisualStyleBackColor = false;
			this->button_5->Click += gcnew System::EventHandler(this, &MyForm::buttonNomber_Click);
			// 
			// button_6
			// 
			this->button_6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->button_6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_6->Location = System::Drawing::Point(154, 228);
			this->button_6->Name = L"button_6";
			this->button_6->Size = System::Drawing::Size(65, 50);
			this->button_6->TabIndex = 12;
			this->button_6->Text = L"6";
			this->button_6->UseVisualStyleBackColor = false;
			this->button_6->Click += gcnew System::EventHandler(this, &MyForm::buttonNomber_Click);
			// 
			// button_minus
			// 
			this->button_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)));
			this->button_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_minus->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_minus->Location = System::Drawing::Point(225, 228);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(65, 50);
			this->button_minus->TabIndex = 13;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = false;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::button_minus_Click);
			// 
			// button_1
			// 
			this->button_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->button_1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_1->Location = System::Drawing::Point(12, 284);
			this->button_1->Name = L"button_1";
			this->button_1->Size = System::Drawing::Size(65, 50);
			this->button_1->TabIndex = 14;
			this->button_1->Text = L"1";
			this->button_1->UseVisualStyleBackColor = false;
			this->button_1->Click += gcnew System::EventHandler(this, &MyForm::buttonNomber_Click);
			// 
			// button_2
			// 
			this->button_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->button_2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_2->Location = System::Drawing::Point(83, 284);
			this->button_2->Name = L"button_2";
			this->button_2->Size = System::Drawing::Size(65, 50);
			this->button_2->TabIndex = 15;
			this->button_2->Text = L"2";
			this->button_2->UseVisualStyleBackColor = false;
			this->button_2->Click += gcnew System::EventHandler(this, &MyForm::buttonNomber_Click);
			// 
			// button_3
			// 
			this->button_3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->button_3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_3->Location = System::Drawing::Point(154, 284);
			this->button_3->Name = L"button_3";
			this->button_3->Size = System::Drawing::Size(65, 50);
			this->button_3->TabIndex = 16;
			this->button_3->Text = L"3";
			this->button_3->UseVisualStyleBackColor = false;
			this->button_3->Click += gcnew System::EventHandler(this, &MyForm::buttonNomber_Click);
			// 
			// button_plas
			// 
			this->button_plas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)));
			this->button_plas->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_plas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_plas->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_plas->Location = System::Drawing::Point(225, 284);
			this->button_plas->Name = L"button_plas";
			this->button_plas->Size = System::Drawing::Size(65, 50);
			this->button_plas->TabIndex = 17;
			this->button_plas->Text = L"+";
			this->button_plas->UseVisualStyleBackColor = false;
			this->button_plas->Click += gcnew System::EventHandler(this, &MyForm::button_plas_Click);
			// 
			// button_0
			// 
			this->button_0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->button_0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_0->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_0->Location = System::Drawing::Point(12, 340);
			this->button_0->Name = L"button_0";
			this->button_0->Size = System::Drawing::Size(136, 50);
			this->button_0->TabIndex = 18;
			this->button_0->Text = L"0";
			this->button_0->UseVisualStyleBackColor = false;
			this->button_0->Click += gcnew System::EventHandler(this, &MyForm::buttonNomber_Click);
			// 
			// button_point
			// 
			this->button_point->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->button_point->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_point->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_point->Location = System::Drawing::Point(154, 340);
			this->button_point->Name = L"button_point";
			this->button_point->Size = System::Drawing::Size(65, 50);
			this->button_point->TabIndex = 19;
			this->button_point->Text = L",";
			this->button_point->UseVisualStyleBackColor = false;
			this->button_point->Click += gcnew System::EventHandler(this, &MyForm::button_point_Click);
			// 
			// button_rovno
			// 
			this->button_rovno->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)));
			this->button_rovno->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_rovno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_rovno->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_rovno->Location = System::Drawing::Point(225, 340);
			this->button_rovno->Name = L"button_rovno";
			this->button_rovno->Size = System::Drawing::Size(65, 50);
			this->button_rovno->TabIndex = 20;
			this->button_rovno->Text = L"=";
			this->button_rovno->UseVisualStyleBackColor = false;
			this->button_rovno->Click += gcnew System::EventHandler(this, &MyForm::button_rovno_Click);
			// 
			// button_svorach
			// 
			this->button_svorach->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->button_svorach->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_svorach->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_svorach->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_svorach->Location = System::Drawing::Point(226, 12);
			this->button_svorach->Name = L"button_svorach";
			this->button_svorach->Size = System::Drawing::Size(30, 20);
			this->button_svorach->TabIndex = 21;
			this->button_svorach->Text = L"-";
			this->button_svorach->UseVisualStyleBackColor = false;
			this->button_svorach->Click += gcnew System::EventHandler(this, &MyForm::button_svorach_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(304, 407);
			this->Controls->Add(this->button_svorach);
			this->Controls->Add(this->button_rovno);
			this->Controls->Add(this->button_point);
			this->Controls->Add(this->button_0);
			this->Controls->Add(this->button_plas);
			this->Controls->Add(this->button_3);
			this->Controls->Add(this->button_2);
			this->Controls->Add(this->button_1);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button_6);
			this->Controls->Add(this->button_5);
			this->Controls->Add(this->button_4);
			this->Controls->Add(this->button_ymnozh);
			this->Controls->Add(this->button_9);
			this->Controls->Add(this->button_8);
			this->Controls->Add(this->button_7);
			this->Controls->Add(this->button_delenie);
			this->Controls->Add(this->button_prochent);
			this->Controls->Add(this->button_plus_minys);
			this->Controls->Add(this->button_AC);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->label_otvet);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	// закрытие программы 
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}

	// действия деления умнож и тд
	private: System::Void buttonNomber_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Button^ button = safe_cast<Button^>(sender);
		if (this->label_otvet->Text == "0" || is_equel)
		{
			this->label_otvet->Text = button->Text;
			is_equel = false;
		}
		else
			this->label_otvet->Text = this->label_otvet->Text + button->Text;
	}

	private: System::Void button_delenie_Click(System::Object^ sender, System::EventArgs^ e)
	{
		math_action('/');
	}
	private: System::Void button_ymnozh_Click(System::Object^ sender, System::EventArgs^ e)
	{
		math_action('*');
	}
	private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		math_action('-');
	}
	private: System::Void button_plas_Click(System::Object^ sender, System::EventArgs^ e)
	{
		math_action('+');
	}
	private: System::Void math_action(char action)
	{
		this->first_num = System::Convert::ToDouble(this->label_otvet->Text);
		this->user_action = action;
		this->label_otvet->Text = "0";
	}

	private: System::Void button_rovno_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (user_action == ' ')
			return;

		float second = System::Convert::ToDouble(this->label_otvet->Text);
		float res = 0;
		switch (this->user_action)
		{
		case '+': res = this->first_num + second; break;
		case '-': res = this->first_num - second; break;
		case '*': res = this->first_num * second; break;
		case '%': res = this->first_num * second / 100; break;
		case '/':
			if (second != 0)
				res = this->first_num / second;
			else
			{
				res = 0;
				MessageBox::Show(this, "Ты чё еблан делить на 0 ? ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
				
			break;
		}
		this->is_equel = true;
		this->label_otvet->Text = System::Convert::ToString(res);
	}
	private: System::Void button_AC_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->label_otvet->Text = "0";
		this->label_otvet->ForeColor = Color::White;
		this->first_num = 0;
		this->user_action = ' ';
		this->is_equel = false;
	}
	private: System::Void button_plus_minys_Click(System::Object^ sender, System::EventArgs^ e)
	{
		float num = System::Convert::ToDouble(this->label_otvet->Text);
		num *= -1;
		this->label_otvet->Text = System::Convert::ToString(num);
	}
	private: System::Void button_prochent_Click(System::Object^ sender, System::EventArgs^ e)
	{
		math_action('%');
	}
	private: System::Void button_point_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ text = this->label_otvet->Text;
		if(!text->Contains(","))
			this->label_otvet->Text = text + ",";
	}
	private: System::Void button_svorach_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->WindowState = FormWindowState::Minimized;
	}

	// движение окна по рабочему столу

};
}
