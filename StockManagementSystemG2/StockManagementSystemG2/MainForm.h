#pragma once
#include "StockItems.h"



namespace StockManagementSystemG2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:

		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}










	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ NAME;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::NumericUpDown^ WHOLESALE;
	private: System::Windows::Forms::NumericUpDown^ RETAIL;
	private: System::Windows::Forms::NumericUpDown^ QUANTITY;












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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->NAME = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->WHOLESALE = (gcnew System::Windows::Forms::NumericUpDown());
			this->RETAIL = (gcnew System::Windows::Forms::NumericUpDown());
			this->QUANTITY = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WHOLESALE))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RETAIL))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QUANTITY))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 131);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(335, 35);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Item Information\r\n";
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(539, 373);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 28);
			this->button1->TabIndex = 9;
			this->button1->Text = L"ADD";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click_1);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(47, 238);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(150, 23);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Item Name:";
			// 
			// NAME
			// 
			this->NAME->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->NAME->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NAME->Location = System::Drawing::Point(203, 241);
			this->NAME->Name = L"NAME";
			this->NAME->Size = System::Drawing::Size(206, 24);
			this->NAME->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(61, 298);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(136, 23);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Quantity:";
			this->label7->Click += gcnew System::EventHandler(this, &MainForm::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(446, 235);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(192, 23);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Retail Price:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(404, 298);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(234, 23);
			this->label9->TabIndex = 17;
			this->label9->Text = L"WholeSale Price:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(335, 70);
			this->label2->TabIndex = 2;
			this->label2->Text = L"STOCK MANAGEMENT\r\nSYSTEM";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Gray;
			this->label3->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(699, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Main Menu";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->label3->Click += gcnew System::EventHandler(this, &MainForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(539, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Stock Items";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(733, 29);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(73, 65);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(564, 29);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(77, 65);
			this->button2->TabIndex = 7;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->AutoSize = true;
			this->panel1->BackColor = System::Drawing::Color::Gray;
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(-3, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(865, 112);
			this->panel1->TabIndex = 1;
			// 
			// WHOLESALE
			// 
			this->WHOLESALE->DecimalPlaces = 2;
			this->WHOLESALE->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WHOLESALE->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->WHOLESALE->Location = System::Drawing::Point(648, 298);
			this->WHOLESALE->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1569325055, 23283064, 0, 0 });
			this->WHOLESALE->Name = L"WHOLESALE";
			this->WHOLESALE->Size = System::Drawing::Size(120, 24);
			this->WHOLESALE->TabIndex = 21;
			// 
			// RETAIL
			// 
			this->RETAIL->DecimalPlaces = 2;
			this->RETAIL->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RETAIL->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->RETAIL->Location = System::Drawing::Point(648, 235);
			this->RETAIL->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1569325055, 23283064, 0, 0 });
			this->RETAIL->Name = L"RETAIL";
			this->RETAIL->Size = System::Drawing::Size(120, 24);
			this->RETAIL->TabIndex = 22;
			// 
			// QUANTITY
			// 
			this->QUANTITY->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QUANTITY->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->QUANTITY->Location = System::Drawing::Point(203, 297);
			this->QUANTITY->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1569325055, 23283064, 0, 0 });
			this->QUANTITY->Name = L"QUANTITY";
			this->QUANTITY->Size = System::Drawing::Size(120, 24);
			this->QUANTITY->TabIndex = 23;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(855, 457);
			this->Controls->Add(this->QUANTITY);
			this->Controls->Add(this->RETAIL);
			this->Controls->Add(this->WHOLESALE);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->NAME);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WHOLESALE))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RETAIL))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QUANTITY))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   String^ connString = "Server=localhost;port=3306;database=management;uid=root;password=00001234";
	   MySqlConnection^ conn = gcnew MySqlConnection(connString);

 private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	 
	 try
	 {
		 conn->Open();
		 MessageBox::Show("Success.");
		 conn->Close();
	 }
	 catch (Exception^ e)
	 {
		 MessageBox::Show("Failed");
	 }

	 

}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	StockItems^ stock = gcnew StockItems();
	stock->Visible = true;
	


}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

	String^ name = NAME->Text; 
	int qty = Convert::ToInt32(QUANTITY->Value);
	double rp = Convert::ToDouble(RETAIL->Value);
	double wsp = Convert::ToDouble(WHOLESALE->Value);

	bool isValid = true;

	
	if (name->Trim()->Length <= 2) {
		MessageBox::Show("Enter a proper Item Name.");
		isValid = false;
	}

	if (rp <= 0 || wsp <= 0) {
		MessageBox::Show("Enter a proper Retail or Wholesale Price.");
		isValid = false;
	}

	if (qty <= 0) {
		MessageBox::Show("Enter a proper Quantity.");	
		isValid = false;
	}
	if (isValid) {

		conn->Open();

		String^ cmdString = "INSERT INTO stocks (NAME, QUANTITY, RETAILP, WHOLESALEP) VALUES (@iname, @quantity, @retailp, @wholesalep)";
		MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

		cmd->Parameters->AddWithValue("@iname", name);
		cmd->Parameters->AddWithValue("@quantity", qty);
		cmd->Parameters->AddWithValue("@retailp", rp);
		cmd->Parameters->AddWithValue("@wholesalep", wsp);

		try {
			cmd->ExecuteNonQuery();
			MessageBox::Show(name + " Inserted Successfully.");
			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("Insert Data Failed.");
		}


	}
}
};
}
