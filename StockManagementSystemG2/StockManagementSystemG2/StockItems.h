#pragma once



namespace StockManagementSystemG2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;


	/// <summary>
	/// Summary for StockItems
	/// </summary>
	public ref class StockItems : public System::Windows::Forms::Form
	{
	public:

		StockItems(void)
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
		~StockItems()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ data;
	private: System::Windows::Forms::TabPage^ tabPage2;








	private: System::Windows::Forms::Button^ DELETE;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::NumericUpDown^ iquantity;
	private: System::Windows::Forms::NumericUpDown^ iwholesale;
	private: System::Windows::Forms::NumericUpDown^ iretail;
	private: System::Windows::Forms::Button^ UPDATE;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ iname;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::Button^ button2;














































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StockItems::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->data = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->DELETE = (gcnew System::Windows::Forms::Button());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->iquantity = (gcnew System::Windows::Forms::NumericUpDown());
			this->iwholesale = (gcnew System::Windows::Forms::NumericUpDown());
			this->iretail = (gcnew System::Windows::Forms::NumericUpDown());
			this->UPDATE = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->iname = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iquantity))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iwholesale))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iretail))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoSize = true;
			this->panel1->BackColor = System::Drawing::Color::Gray;
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(-17, -3);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1160, 116);
			this->panel1->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(884, 29);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(97, 65);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(865, 12);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Stock Items";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(20, 24);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(335, 70);
			this->label2->TabIndex = 2;
			this->label2->Text = L"STOCK MANAGEMENT\r\nSYSTEM";
			// 
			// data
			// 
			this->data->AllowUserToAddRows = false;
			this->data->AllowUserToDeleteRows = false;
			this->data->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->data->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->data->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->data->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->data->Location = System::Drawing::Point(421, 119);
			this->data->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->data->MultiSelect = false;
			this->data->Name = L"data";
			this->data->ReadOnly = true;
			this->data->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data->Size = System::Drawing::Size(703, 326);
			this->data->TabIndex = 4;
			this->data->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StockItems::data_CellClick);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->DELETE);
			this->tabPage2->Location = System::Drawing::Point(4, 23);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(384, 299);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"DELETE";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// DELETE
			// 
			this->DELETE->Location = System::Drawing::Point(59, 202);
			this->DELETE->Name = L"DELETE";
			this->DELETE->Size = System::Drawing::Size(265, 56);
			this->DELETE->TabIndex = 40;
			this->DELETE->Text = L"DELETE";
			this->DELETE->UseVisualStyleBackColor = true;
			this->DELETE->Click += gcnew System::EventHandler(this, &StockItems::DELETE_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->iquantity);
			this->tabPage1->Controls->Add(this->iwholesale);
			this->tabPage1->Controls->Add(this->iretail);
			this->tabPage1->Controls->Add(this->UPDATE);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->iname);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Location = System::Drawing::Point(4, 23);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(384, 299);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"UPDATE";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// iquantity
			// 
			this->iquantity->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->iquantity->Location = System::Drawing::Point(198, 99);
			this->iquantity->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { -727379968, 232, 0, 0 });
			this->iquantity->Name = L"iquantity";
			this->iquantity->Size = System::Drawing::Size(157, 21);
			this->iquantity->TabIndex = 42;
			// 
			// iwholesale
			// 
			this->iwholesale->DecimalPlaces = 2;
			this->iwholesale->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->iwholesale->Location = System::Drawing::Point(198, 185);
			this->iwholesale->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1874919423, 2328306, 0, 0 });
			this->iwholesale->Name = L"iwholesale";
			this->iwholesale->Size = System::Drawing::Size(157, 21);
			this->iwholesale->TabIndex = 41;
			// 
			// iretail
			// 
			this->iretail->DecimalPlaces = 2;
			this->iretail->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->iretail->Location = System::Drawing::Point(198, 141);
			this->iretail->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999999, 0, 0, 0 });
			this->iretail->Name = L"iretail";
			this->iretail->Size = System::Drawing::Size(157, 21);
			this->iretail->TabIndex = 40;
			// 
			// UPDATE
			// 
			this->UPDATE->Location = System::Drawing::Point(56, 224);
			this->UPDATE->Name = L"UPDATE";
			this->UPDATE->Size = System::Drawing::Size(265, 56);
			this->UPDATE->TabIndex = 39;
			this->UPDATE->Text = L"UPDATE";
			this->UPDATE->UseVisualStyleBackColor = true;
			this->UPDATE->Click += gcnew System::EventHandler(this, &StockItems::UPDATE_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(7, 185);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(184, 17);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Wholesale Price:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(40, 145);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(151, 17);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Retail Price:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(84, 99);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 17);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Quantity:";
			// 
			// iname
			// 
			this->iname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->iname->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iname->Location = System::Drawing::Point(16, 56);
			this->iname->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->iname->Name = L"iname";
			this->iname->Size = System::Drawing::Size(346, 21);
			this->iname->TabIndex = 21;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(13, 36);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 17);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Item Name:";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(22, 119);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(392, 326);
			this->tabControl1->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1017, 42);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 36);
			this->button2->TabIndex = 43;
			this->button2->Text = L"BACK";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &StockItems::button2_Click_1);
			// 
			// StockItems
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1140, 457);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->data);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximizeBox = false;
			this->Name = L"StockItems";
			this->Text = L"StockItems";
			this->Load += gcnew System::EventHandler(this, &StockItems::StockItems_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iquantity))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iwholesale))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iretail))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	String^ connString = "Server=localhost;port=3306;database=management;uid=root;password=00001234";;
	MySqlConnection^ conn = gcnew MySqlConnection(connString);
	void RefreshTable() {
		try {
			conn->Open();
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT * FROM stocks", conn);
			DataTable^ table = gcnew DataTable();
			adapter->Fill(table);
			data->DataSource = table;
			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to Read Data.");
		}
	}


private: System::Void StockItems_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshTable();
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void data_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
	String^ currId = data->Rows[data->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
	
	try {
		conn->Open();

		
		iname->Text = "";
		iquantity->Value = 0;
		iretail->Value = 0;
		iwholesale->Value = 0;



		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT * FROM stocks WHERE ID = " + currId, conn);
		DataTable^ table = gcnew DataTable();
		adapter->Fill(table);

		
		iname->Text = data->Rows[data->CurrentCell->RowIndex]->Cells[1]->Value->ToString();
		iquantity->Value = Convert::ToInt32(data->Rows[data->CurrentCell->RowIndex]->Cells[2]->Value->ToString());
		iretail->Value = Convert::ToDecimal(data->Rows[data->CurrentCell->RowIndex]->Cells[3]->Value->ToString());
		iwholesale->Value = Convert::ToDecimal(data->Rows[data->CurrentCell->RowIndex]->Cells[4]->Value->ToString());

		conn->Close();
	}
	catch (Exception^ e) {
		conn->Close();
	}

}	
private: System::Void UPDATE_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currId = data->Rows[data->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
	String^ pname = iname->Text;
	int pquantity = Convert::ToInt32(iquantity->Value);
	double pretail = Convert::ToDouble(iretail->Value);
	double pwholesale = Convert::ToDouble(iwholesale->Value);

	try {
		conn->Open();
		MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE stocks SET NAME=@iname, QUANTITY=@iquantity, RETAILP=@rp, WHOLESALEP=@wp WHERE ID = " + currId, conn);
		cmd->Parameters->AddWithValue("@iname", pname);
		cmd->Parameters->AddWithValue("@iquantity", pquantity);
		cmd->Parameters->AddWithValue("@rp", pretail);
		cmd->Parameters->AddWithValue("@wp", pwholesale);
		
		cmd->ExecuteNonQuery();
		MessageBox::Show(pname + " Successfully Updated.");
		
		conn->Close();
		RefreshTable();
	}
	catch (Exception^ e) {
		MessageBox::Show(pname + " Error Updating.");
	}
	
}

private: System::Void DELETE_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currId = data->Rows[data->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try {
		conn->Open();
		MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM stocks WHERE ID = " + currId, conn);
		cmd->ExecuteNonQuery(); 
		
		conn->Close();
		MessageBox::Show("Successfully Deleted.");
		RefreshTable();
	}
	catch(Exception^ e){
		MessageBox::Show("Failed Deleted.");
	}
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Visible = false;
}
};
};	