#pragma once
#include "AdminMenu.h"
#include "AddEmployee.h"
#include "UpdateEmployee.h"
#include "removeEmployee.h"
#include "ViewPaystub.h"

namespace Payrolls {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for HrView
    /// </summary>
    public ref class HrView : public System::Windows::Forms::Form
    {
    public:
        HrView(void)
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
        ~HrView()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Button^ button1;
    protected:
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button5;

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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HrView::typeid));
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(39, 37);
            this->button1->Margin = System::Windows::Forms::Padding(2);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(169, 72);
            this->button1->TabIndex = 0;
            this->button1->Text = L"My Info";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &HrView::button1_Click);
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(352, 213);
            this->button2->Margin = System::Windows::Forms::Padding(2);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(134, 34);
            this->button2->TabIndex = 1;
            this->button2->Text = L"Add Employee";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &HrView::button2_Click);
            // 
            // button3
            // 
            this->button3->Location = System::Drawing::Point(352, 263);
            this->button3->Margin = System::Windows::Forms::Padding(2);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(134, 34);
            this->button3->TabIndex = 2;
            this->button3->Text = L"Update Employee";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &HrView::button3_Click);
            // 
            // button4
            // 
            this->button4->Location = System::Drawing::Point(352, 310);
            this->button4->Margin = System::Windows::Forms::Padding(2);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(134, 34);
            this->button4->TabIndex = 3;
            this->button4->Text = L"Delete Employee";
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &HrView::button4_Click);
            // 
            // button5
            // 
            this->button5->Location = System::Drawing::Point(309, 47);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(177, 52);
            this->button5->TabIndex = 4;
            this->button5->Text = L"View Pay Stub";
            this->button5->UseVisualStyleBackColor = true;
            this->button5->Click += gcnew System::EventHandler(this, &HrView::button5_Click);
            // 
            // HrView
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(544, 400);
            this->Controls->Add(this->button5);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Margin = System::Windows::Forms::Padding(2);
            this->Name = L"HrView";
            this->Text = L"HR";
            this->ResumeLayout(false);

        }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

        AddEmployee^ addEmp = gcnew AddEmployee();
        addEmp->otherPage = this;
        this->Hide();
        addEmp->ShowDialog();
    }

    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        UpdateEmployee^ updateEmp = gcnew UpdateEmployee();
        updateEmp->otherPage = this;
        this->Hide();
        updateEmp->ShowDialog();
    }

    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
        removeEmployee^ removeEmp = gcnew removeEmployee();
        this->Hide();
        removeEmp->ShowDialog();
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
        ViewPaystub^ viewPay = gcnew ViewPaystub();
       // this->Hide();
        viewPay->ShowDialog();
    }
};
}