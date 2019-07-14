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
	/// Summary for Iniuser
	/// </summary>
	public ref class Iniuser : public System::Windows::Forms::Form
	{
	public:
		Form^ keloginuser;
		Iniuser(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Iniuser(Form^ iu,String^ tb1)
		{
			InitializeComponent();
			keloginuser = iu;
			label6->Text = tb1;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Iniuser()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 



	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape1;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer2;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;

	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape4;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Iniuser::typeid));
			this->rectangleShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->shapeContainer2 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->ovalShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->rectangleShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape3 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->rectangleShape4 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// rectangleShape1
			// 
			this->rectangleShape1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->rectangleShape1->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape1->Location = System::Drawing::Point(41, 49);
			this->rectangleShape1->Name = L"rectangleShape1";
			this->rectangleShape1->Size = System::Drawing::Size(796, 437);
			this->rectangleShape1->Click += gcnew System::EventHandler(this, &Iniuser::rectangleShape1_Click);
			// 
			// shapeContainer2
			// 
			this->shapeContainer2->Location = System::Drawing::Point(0, 0);
			this->shapeContainer2->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer2->Name = L"shapeContainer2";
			this->shapeContainer2->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(4) {this->ovalShape1, 
				this->rectangleShape2, this->rectangleShape1, this->rectangleShape3});
			this->shapeContainer2->Size = System::Drawing::Size(870, 526);
			this->shapeContainer2->TabIndex = 18;
			this->shapeContainer2->TabStop = false;
			// 
			// ovalShape1
			// 
			this->ovalShape1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ovalShape1.BackgroundImage")));
			this->ovalShape1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ovalShape1->Location = System::Drawing::Point(162, 168);
			this->ovalShape1->Name = L"ovalShape1";
			this->ovalShape1->Size = System::Drawing::Size(205, 183);
			// 
			// rectangleShape2
			// 
			this->rectangleShape2->BackColor = System::Drawing::Color::Black;
			this->rectangleShape2->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape2->Location = System::Drawing::Point(42, 50);
			this->rectangleShape2->Name = L"rectangleShape2";
			this->rectangleShape2->Size = System::Drawing::Size(61, 437);
			this->rectangleShape2->Click += gcnew System::EventHandler(this, &Iniuser::rectangleShape1_Click);
			// 
			// rectangleShape3
			// 
			this->rectangleShape3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(54)), 
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->rectangleShape3->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape3->Location = System::Drawing::Point(0, -5);
			this->rectangleShape3->Name = L"rectangleShape3";
			this->rectangleShape3->Size = System::Drawing::Size(873, 33);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(54)), 
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Bitstream Vera Sans Mono", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::MediumPurple;
			this->label1->Location = System::Drawing::Point(364, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 18);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Hallo :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(54)), 
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Bitstream Vera Sans Mono", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::MediumPurple;
			this->label2->Location = System::Drawing::Point(434, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 18);
			this->label2->TabIndex = 20;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(54)), 
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Bitstream Vera Sans Mono", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::MediumPurple;
			this->label3->Location = System::Drawing::Point(11, 6);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 18);
			this->label3->TabIndex = 21;
			this->label3->Text = L"NIS :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(54)), 
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Bitstream Vera Sans Mono", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::MediumPurple;
			this->label4->Location = System::Drawing::Point(746, 6);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 18);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Kelas :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(54)), 
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Bitstream Vera Sans Mono", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::MediumPurple;
			this->label5->Location = System::Drawing::Point(815, 7);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 18);
			this->label5->TabIndex = 23;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(54)), 
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Bitstream Vera Sans Mono", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::MediumPurple;
			this->label6->Location = System::Drawing::Point(56, 6);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 18);
			this->label6->TabIndex = 24;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(54)), 
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Bitstream Vera Sans Mono", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::MediumPurple;
			this->label7->Location = System::Drawing::Point(175, 6);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 18);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Jurusan :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(54)), 
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->label8->Font = (gcnew System::Drawing::Font(L"Bitstream Vera Sans Mono", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::MediumPurple;
			this->label8->Location = System::Drawing::Point(257, 7);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 18);
			this->label8->TabIndex = 26;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(58, 61);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(33, 32);
			this->pictureBox1->TabIndex = 27;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Iniuser::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Black;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Location = System::Drawing::Point(58, 61);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(33, 32);
			this->pictureBox2->TabIndex = 28;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Iniuser::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Location = System::Drawing::Point(247, 353);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(39, 42);
			this->pictureBox3->TabIndex = 29;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Iniuser::pictureBox3_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label9->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label9->Location = System::Drawing::Point(366, 67);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 30;
			this->label9->Text = L"0";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(0, 0);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 31;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->groupBox1->Controls->Add(this->shapeContainer1);
			this->groupBox1->Location = System::Drawing::Point(479, 124);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(313, 271);
			this->groupBox1->TabIndex = 32;
			this->groupBox1->TabStop = false;
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(3, 16);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) {this->rectangleShape4});
			this->shapeContainer1->Size = System::Drawing::Size(307, 252);
			this->shapeContainer1->TabIndex = 0;
			this->shapeContainer1->TabStop = false;
			// 
			// rectangleShape4
			// 
			this->rectangleShape4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->rectangleShape4->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape4->Location = System::Drawing::Point(5, -1);
			this->rectangleShape4->Name = L"rectangleShape4";
			this->rectangleShape4->Size = System::Drawing::Size(295, 245);
			// 
			// Iniuser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(870, 526);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->shapeContainer2);
			this->Name = L"Iniuser";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Iniuser";
			this->Load += gcnew System::EventHandler(this, &Iniuser::Iniuser_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Iniuser_Load(System::Object^  sender, System::EventArgs^  e) {
				 rectangleShape4->Hide();
				 pictureBox2->Hide();
				 rectangleShape2->Hide();
			 	 String^ constring =L"datasource=127.0.0.1;port=2002;user=root;password=akuzaki";
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from osis.user_osis where nis=@nis;",conDataBase);
				 MySqlDataReader^ myReader;
				 try
				 {

					 conDataBase->Open();
					 cmdDataBase->Parameters->AddWithValue("@nis",label6->Text);
					 myReader = cmdDataBase->ExecuteReader();

					 while (myReader->Read())
					 {

						 String^ nama;
						 String^ jurusan;
						 String^ kelas;
						 nama = myReader->GetString("nama_siswa");
						 jurusan = myReader->GetString("jurusan");
						 kelas = myReader->GetString("kelas");
						 label5->Text = kelas;
						 label8->Text = jurusan;
						 label2->Text = nama;

					 }
					 
				 
				 }catch(Exception^ HandleCombox)
					{

						MessageBox::Show(HandleCombox->Message);

					}
			 }
	private: System::Void rectangleShape1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox1->Hide();
			 rectangleShape2->Show();
			 pictureBox2->Show();
		 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox2->Hide();
			 rectangleShape2->Hide();
			 pictureBox1->Show();
		 }
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (label9->Text == "0")
			 {
				 rectangleShape4->Show();
				 label9->Text = "1";
			 }
			 else
			 {
				 rectangleShape4->Hide();
				 label9->Text = "0";
			 }
		 }
};
}
