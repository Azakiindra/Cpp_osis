#pragma once

namespace FinalOsis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Iniadmin
	/// </summary>
	public ref class Iniadmin : public System::Windows::Forms::Form
	{
	public:
		Form^ kembali;
		Iniadmin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Iniadmin(Form^ ia)
		{
			kembali = ia;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Iniadmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape4;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;


	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape2;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button1;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer3;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape7;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape6;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape5;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape3;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape8;
	private: System::Windows::Forms::Label^  label3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Iniadmin::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->rectangleShape4 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->rectangleShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape8 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->shapeContainer3 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->rectangleShape7 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape6 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape5 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape3 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(275, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(37, 30);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Iniadmin::pictureBox1_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox6->Location = System::Drawing::Point(325, 3);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(37, 30);
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Iniadmin::pictureBox6_Click);
			// 
			// rectangleShape4
			// 
			this->rectangleShape4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->rectangleShape4->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape4->BorderWidth = 3;
			this->rectangleShape4->CornerRadius = 5;
			this->rectangleShape4->Location = System::Drawing::Point(270, -3);
			this->rectangleShape4->Name = L"rectangleShape4";
			this->rectangleShape4->Size = System::Drawing::Size(96, 40);
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(4) {this->rectangleShape2, 
				this->rectangleShape8, this->rectangleShape1, this->rectangleShape4});
			this->shapeContainer1->Size = System::Drawing::Size(649, 492);
			this->shapeContainer1->TabIndex = 12;
			this->shapeContainer1->TabStop = false;
			// 
			// rectangleShape2
			// 
			this->rectangleShape2->BackColor = System::Drawing::Color::HotPink;
			this->rectangleShape2->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape2->Location = System::Drawing::Point(138, 77);
			this->rectangleShape2->Name = L"rectangleShape2";
			this->rectangleShape2->Size = System::Drawing::Size(131, 29);
			// 
			// rectangleShape8
			// 
			this->rectangleShape8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(181)), 
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->rectangleShape8->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape8->Location = System::Drawing::Point(349, 76);
			this->rectangleShape8->Name = L"rectangleShape8";
			this->rectangleShape8->Size = System::Drawing::Size(131, 29);
			// 
			// rectangleShape1
			// 
			this->rectangleShape1->BackColor = System::Drawing::Color::DarkOrange;
			this->rectangleShape1->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape1->Location = System::Drawing::Point(127, 68);
			this->rectangleShape1->Name = L"rectangleShape1";
			this->rectangleShape1->Size = System::Drawing::Size(365, 45);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->pictureBox5);
			this->groupBox2->Controls->Add(this->pictureBox4);
			this->groupBox2->Controls->Add(this->pictureBox3);
			this->groupBox2->Controls->Add(this->pictureBox2);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->comboBox2);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->shapeContainer3);
			this->groupBox2->Location = System::Drawing::Point(129, 118);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(363, 332);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(51)), 
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Location = System::Drawing::Point(293, 208);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(35, 30);
			this->pictureBox5->TabIndex = 19;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(85)), 
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Location = System::Drawing::Point(293, 146);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(35, 30);
			this->pictureBox4->TabIndex = 18;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(165)), static_cast<System::Int32>(static_cast<System::Byte>(55)), 
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Location = System::Drawing::Point(293, 83);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(35, 30);
			this->pictureBox3->TabIndex = 17;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(20)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Location = System::Drawing::Point(293, 24);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(35, 30);
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(51)), 
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Gray;
			this->textBox2->Location = System::Drawing::Point(71, 212);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(220, 24);
			this->textBox2->TabIndex = 16;
			this->textBox2->Text = L"Masukan NIS";
			this->textBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Iniadmin::textBox2_MouseClick);
			this->textBox2->Leave += gcnew System::EventHandler(this, &Iniadmin::textBox2_Leave);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(85)), 
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Gray;
			this->textBox1->Location = System::Drawing::Point(71, 149);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(220, 24);
			this->textBox1->TabIndex = 15;
			this->textBox1->Text = L"Masukan Name";
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Iniadmin::textBox1_MouseClick);
			this->textBox1->Leave += gcnew System::EventHandler(this, &Iniadmin::textBox1_Leave);
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(165)), static_cast<System::Int32>(static_cast<System::Byte>(55)), 
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->comboBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"X", L"XI", L"XII"});
			this->comboBox2->Location = System::Drawing::Point(71, 83);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(220, 28);
			this->comboBox2->TabIndex = 3;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(20)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"TKJ", L"RPL", L"TKR", L"TLO", L"TITL"});
			this->comboBox1->Location = System::Drawing::Point(71, 26);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(220, 28);
			this->comboBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Khaki;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->Location = System::Drawing::Point(141, 272);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 32);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Entry";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Iniadmin::button1_Click);
			// 
			// shapeContainer3
			// 
			this->shapeContainer3->Location = System::Drawing::Point(3, 16);
			this->shapeContainer3->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer3->Name = L"shapeContainer3";
			this->shapeContainer3->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(4) {this->rectangleShape7, 
				this->rectangleShape6, this->rectangleShape5, this->rectangleShape3});
			this->shapeContainer3->Size = System::Drawing::Size(357, 313);
			this->shapeContainer3->TabIndex = 0;
			this->shapeContainer3->TabStop = false;
			// 
			// rectangleShape7
			// 
			this->rectangleShape7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(51)), 
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->rectangleShape7->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape7->CornerRadius = 10;
			this->rectangleShape7->Location = System::Drawing::Point(41, 186);
			this->rectangleShape7->Name = L"rectangleShape7";
			this->rectangleShape7->Size = System::Drawing::Size(288, 42);
			// 
			// rectangleShape6
			// 
			this->rectangleShape6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(85)), 
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->rectangleShape6->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape6->CornerRadius = 10;
			this->rectangleShape6->Location = System::Drawing::Point(41, 123);
			this->rectangleShape6->Name = L"rectangleShape6";
			this->rectangleShape6->Size = System::Drawing::Size(289, 42);
			// 
			// rectangleShape5
			// 
			this->rectangleShape5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(165)), static_cast<System::Int32>(static_cast<System::Byte>(55)), 
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->rectangleShape5->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape5->CornerRadius = 10;
			this->rectangleShape5->Location = System::Drawing::Point(41, 60);
			this->rectangleShape5->Name = L"rectangleShape5";
			this->rectangleShape5->Size = System::Drawing::Size(288, 42);
			// 
			// rectangleShape3
			// 
			this->rectangleShape3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(20)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->rectangleShape3->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape3->CornerRadius = 10;
			this->rectangleShape3->Location = System::Drawing::Point(44, 2);
			this->rectangleShape3->Name = L"rectangleShape3";
			this->rectangleShape3->Size = System::Drawing::Size(283, 42);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox7->Location = System::Drawing::Point(7, 453);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(37, 31);
			this->pictureBox7->TabIndex = 15;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &Iniadmin::pictureBox7_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::HotPink;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Crimson;
			this->label1->Location = System::Drawing::Point(152, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 21);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Entry Data";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(181)), 
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->label2->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Navy;
			this->label2->Location = System::Drawing::Point(370, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 21);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Edit Data";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::DarkOrange;
			this->label3->ForeColor = System::Drawing::Color::DarkOrange;
			this->label3->Location = System::Drawing::Point(299, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"0";
			// 
			// Iniadmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(649, 492);
			this->ControlBox = false;
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->shapeContainer1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Iniadmin";
			this->Opacity = 0.9;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Iniadmin";
			this->Load += gcnew System::EventHandler(this, &Iniadmin::Iniadmin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Iniadmin_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 kembali->Show();
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 WindowState = FormWindowState::Minimized;
		 }
private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::ExitThread();
			 Application::Exit();
		 }
private: System::Void textBox1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 textBox1->Text = "";
			 textBox1->ForeColor = System::Drawing::Color::Black;
		 }
private: System::Void textBox1_Leave(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text == "")
			 {

				 textBox1->Text = "Masukan Nama";
				 textBox1->ForeColor = System::Drawing::Color::Gray;

			 }
		 }
private: System::Void textBox2_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 textBox2->Text = "";
			 textBox2->ForeColor = System::Drawing::Color::Black;
		 }
private: System::Void textBox2_Leave(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox2->Text == "")
			 {

				 textBox2->Text = "Masukan Nama";
				 textBox2->ForeColor = System::Drawing::Color::Gray;

			 }
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ cnkonek =L"datasource=127.0.0.1;port=2002;user=root;password=akuzaki";
			 MySqlConnection^ cnkonekDB = gcnew MySqlConnection(cnkonek);
			 MySqlCommand^ cncmdDB = gcnew MySqlCommand("SELECT * FROM osis.user_osis where nis=@nis;",cnkonekDB);
			 MySqlDataReader^ cnreadDB;
			 try
			 {
				 cnkonekDB->Open();
				 cncmdDB->Parameters->AddWithValue("@nis",textBox2->Text);
				 cnreadDB = cncmdDB->ExecuteReader();
				 int cekNIS = 0;
				 while (cnreadDB->Read())
				 {
					 cekNIS = cekNIS + 1;
				 }
				 if (cekNIS == 1)
				 {
					 MessageBox::Show("Maaf Nis Sudah terdaftar!");
				 }
				 else
				 {
					 String^ Mkonek = L"datasource=127.0.0.1;port=2002;user=root;password=akuzaki";
					 MySqlConnection^ MkonekDB = gcnew MySqlConnection(Mkonek);
					 MySqlCommand^ McmdDB = gcnew MySqlCommand("INSERT INTO osis.user_osis set nis=@nis,nama_siswa=@ns,jurusan=@ju,kelas=@kel,pilihan='"+this->label3->Text+"';",MkonekDB);
					 MySqlDataReader^ MreadDB;
					 try
					 {
						 MkonekDB->Open();
						 McmdDB->Parameters->AddWithValue("@ns",textBox1->Text);
						 McmdDB->Parameters->AddWithValue("@nis",textBox2->Text);
						 McmdDB->Parameters->AddWithValue("@ju",comboBox1->Text);
						 McmdDB->Parameters->AddWithValue("@kel",comboBox2->Text);
						 MreadDB = McmdDB->ExecuteReader();
						 MessageBox::Show("Sukses Tambah!!!");
					 }catch(Exception^ HandleInput)
						{
							MessageBox::Show(HandleInput->Message);
						}
				 }
			 }catch(Exception^ cNIS)
			 {
				 MessageBox::Show(cNIS->Message);
			 }
		 }
};
}
