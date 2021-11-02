#pragma once
#include "GrossIncome.h"
#include "FedTax.h"
#include "NYTax.h"

namespace Payrolls {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for UpdateForm
	/// </summary>
	public ref class UpdateEmployee : public System::Windows::Forms::Form
	{
	public:
		Form^ otherPage;
		UpdateEmployee(void)
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
		~UpdateEmployee()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox10;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(44, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Employee ID: ";
			this->label1->Click += gcnew System::EventHandler(this, &UpdateEmployee::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(248, 58);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(288, 31);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(128, 124);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(299, 70);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Retrieve Info";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UpdateEmployee::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(44, 236);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 33);
			this->label2->TabIndex = 3;
			this->label2->Text = L"First Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(229, 236);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 33);
			this->label3->TabIndex = 4;
			this->label3->Text = L"----";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(44, 304);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 33);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Last Name:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(229, 304);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 33);
			this->label5->TabIndex = 6;
			this->label5->Text = L"----";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(47, 369);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 33);
			this->label6->TabIndex = 7;
			this->label6->Text = L"DOB:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(229, 369);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 33);
			this->label7->TabIndex = 8;
			this->label7->Text = L"----";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(47, 510);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(97, 33);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Email:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(183, 510);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(352, 31);
			this->textBox2->TabIndex = 10;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(47, 586);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(130, 33);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Phone #:";
			this->label9->Click += gcnew System::EventHandler(this, &UpdateEmployee::label9_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(183, 590);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(352, 31);
			this->textBox3->TabIndex = 12;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(47, 660);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(130, 33);
			this->label10->TabIndex = 13;
			this->label10->Text = L"Address:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(183, 664);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(352, 31);
			this->textBox4->TabIndex = 14;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(44, 731);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(127, 33);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Zipcode:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(184, 733);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(352, 31);
			this->textBox5->TabIndex = 16;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(673, 510);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(127, 33);
			this->label12->TabIndex = 17;
			this->label12->Text = L"Position:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(819, 514);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(352, 31);
			this->textBox6->TabIndex = 18;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(686, 586);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(101, 33);
			this->label13->TabIndex = 19;
			this->label13->Text = L"Hours:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(819, 590);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(134, 31);
			this->textBox7->TabIndex = 20;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(673, 660);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(191, 33);
			this->label14->TabIndex = 21;
			this->label14->Text = L"Hourly Wage:";
			this->label14->Click += gcnew System::EventHandler(this, &UpdateEmployee::label14_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(891, 660);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(280, 31);
			this->textBox8->TabIndex = 22;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(642, 827);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(299, 70);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Update Changes";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UpdateEmployee::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1012, 827);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(299, 70);
			this->button3->TabIndex = 24;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &UpdateEmployee::button3_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(686, 731);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(151, 33);
			this->label15->TabIndex = 25;
			this->label15->Text = L"Password:";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(891, 735);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(280, 31);
			this->textBox9->TabIndex = 26;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(47, 436);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(120, 33);
			this->label16->TabIndex = 27;
			this->label16->Text = L"Gender:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(229, 436);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(55, 33);
			this->label17->TabIndex = 28;
			this->label17->Text = L"----";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(673, 436);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(74, 33);
			this->label18->TabIndex = 29;
			this->label18->Text = L"Age:";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(773, 440);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(134, 31);
			this->textBox10->TabIndex = 30;
			// 
			// UpdateForm
			// 
			this->AccessibleName = L"";
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1421, 989);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"UpdateForm";
			this->Text = L"UpdateEmployee";
			this->Load += gcnew System::EventHandler(this, &UpdateEmployee::UpdateForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void UpdateForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source= C:/Users/Zhuowei Hu/Documents/Payroll Info.accdb");
		conn->Open();
		OleDbCommand^ cmd = conn->CreateCommand();
		cmd->CommandType = CommandType::Text;
		cmd->CommandText = "select * from EmployeeInfo where ID = @ID";
		cmd->Parameters->AddWithValue("@ID", Int32::Parse(textBox1->Text));
		OleDbDataReader^ reader = cmd->ExecuteReader();
		while (reader->Read()) {
			label3->Text = reader["Firstname"]->ToString();
			label5->Text = reader["Lastname"]->ToString();
			label7->Text = reader["DateofBirth"]->ToString();
			label17->Text = reader["Gender"]->ToString();
			textBox2->Text = reader["Email"]->ToString();
			textBox3->Text = reader["PhoneNumber"]->ToString();
			textBox4->Text = reader["Address1"]->ToString();
			textBox5->Text = reader["Zipcode"]->ToString();
			textBox6->Text = reader["Position"]->ToString();
			textBox7->Text = reader["Hours"]->ToString();
			textBox8->Text = reader["HourlyPay"]->ToString();
			textBox9->Text = reader["Password"]->ToString();
			textBox10->Text = reader["Age"]->ToString();
		}
		conn->Close();
	}
	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		otherPage->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		GrossIncome gross;
		FedTax fTax;
		NYTax nTax;
		int overtimeHours = gross.calculateOvertimeHour(Int32::Parse(textBox7->Text));
		double overtimePay = gross.CalculateOvertimePay(overtimeHours, Convert::ToDouble(textBox8->Text));
		double grossIncome = gross.CalculateGrossIncome(Int32::Parse(textBox7->Text), overtimePay, Convert::ToDouble(textBox8->Text));
		double fedTax = fTax.FedTaxRate(grossIncome);
		double nyTax = nTax.NYTaxRate(grossIncome);
		OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source= C:/Users/Zhuowei Hu/Documents/Payroll Info.accdb");
		conn->Open();
		OleDbCommand^ cmd = conn->CreateCommand();
		cmd->CommandType = CommandType::Text;
		cmd->CommandText = "UPDATE EmployeeInfo SET [Email] = @Email, [PhoneNumber] = @PhoneNumber, [Address1] = @Address, [Zipcode] = @Zipcode, [Position] = @Position, " +
			"[Hours] = @Hours, [HourlyPay] = @HourlyPay, [Password] = @Password, [OvertimeHours] = @OvertimeHours, [OvertimePay] = @OvertimePay, " +
			"[Weeklygrosspay] = @Weeklygrosspay, [Age] = @Age WHERE ID = @ID";
		cmd->Parameters->AddWithValue("@Email", textBox2->Text);
		cmd->Parameters->AddWithValue("@PhoneNumber", textBox3->Text);
		cmd->Parameters->AddWithValue("@Address", textBox4->Text);
		cmd->Parameters->AddWithValue("@Zipcode", textBox5->Text);
		cmd->Parameters->AddWithValue("@Position", textBox6->Text);
		cmd->Parameters->AddWithValue("@Hours", Int32::Parse(textBox7->Text) - overtimeHours);
		cmd->Parameters->AddWithValue("@HourlyPay", Convert::ToDouble(textBox8->Text));
		cmd->Parameters->AddWithValue("@Password", textBox9->Text);
		cmd->Parameters->AddWithValue("@OvertimeHours", overtimeHours);
		cmd->Parameters->AddWithValue("@OvertimePay", overtimePay);
		cmd->Parameters->AddWithValue("@Weeklygrosspay", grossIncome);
		cmd->Parameters->AddWithValue("@Age", Int32::Parse(textBox10->Text));
		cmd->Parameters->AddWithValue("@ID", Int32::Parse(textBox1->Text));
		cmd->ExecuteNonQuery();
		conn->Close();
		MessageBox::Show("Update Employee Succeed");
		this->Close();
	}
	};
}