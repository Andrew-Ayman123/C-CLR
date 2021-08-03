#pragma once
#include<string>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:







	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  butback;
	private: System::Windows::Forms::TextBox^  txt1;


	private: System::Windows::Forms::Button^  butc;
	private: System::Windows::Forms::Button^  butce;





	private: System::Windows::Forms::Button^  butpm;

	private: System::Windows::Forms::Button^  but7;
	private: System::Windows::Forms::Button^  but8;
	private: System::Windows::Forms::Button^  but9;
	private: System::Windows::Forms::Button^  butad;




	private: System::Windows::Forms::Button^  but4;
	private: System::Windows::Forms::Button^  but5;
	private: System::Windows::Forms::Button^  but6;
	private: System::Windows::Forms::Button^  butsu;




	private: System::Windows::Forms::Button^  but1;
	private: System::Windows::Forms::Button^  but2;
	private: System::Windows::Forms::Button^  but3;
	private: System::Windows::Forms::Button^  butml;




	private: System::Windows::Forms::Button^  but0;
	private: System::Windows::Forms::Button^  butdec;
	private: System::Windows::Forms::Button^  buteq;
	private: System::Windows::Forms::Button^  butdi;





	protected:



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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->butback = (gcnew System::Windows::Forms::Button());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->butc = (gcnew System::Windows::Forms::Button());
			this->butce = (gcnew System::Windows::Forms::Button());
			this->butpm = (gcnew System::Windows::Forms::Button());
			this->but7 = (gcnew System::Windows::Forms::Button());
			this->but8 = (gcnew System::Windows::Forms::Button());
			this->but9 = (gcnew System::Windows::Forms::Button());
			this->butad = (gcnew System::Windows::Forms::Button());
			this->but4 = (gcnew System::Windows::Forms::Button());
			this->but5 = (gcnew System::Windows::Forms::Button());
			this->but6 = (gcnew System::Windows::Forms::Button());
			this->butsu = (gcnew System::Windows::Forms::Button());
			this->but1 = (gcnew System::Windows::Forms::Button());
			this->but2 = (gcnew System::Windows::Forms::Button());
			this->but3 = (gcnew System::Windows::Forms::Button());
			this->butml = (gcnew System::Windows::Forms::Button());
			this->but0 = (gcnew System::Windows::Forms::Button());
			this->butdec = (gcnew System::Windows::Forms::Button());
			this->buteq = (gcnew System::Windows::Forms::Button());
			this->butdi = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(705, 396);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Developed By : Andrew Ayman";
			// 
			// butback
			// 
			this->butback->Font = (gcnew System::Drawing::Font(L"Wingdings", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->butback->Location = System::Drawing::Point(12, 56);
			this->butback->Name = L"butback";
			this->butback->Size = System::Drawing::Size(75, 66);
			this->butback->TabIndex = 13;
			this->butback->Text = L"";
			this->butback->UseVisualStyleBackColor = true;
			this->butback->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// txt1
			// 
			this->txt1->BackColor = System::Drawing::Color::White;
			this->txt1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt1->Location = System::Drawing::Point(12, 12);
			this->txt1->Multiline = true;
			this->txt1->Name = L"txt1";
			this->txt1->ReadOnly = true;
			this->txt1->Size = System::Drawing::Size(322, 38);
			this->txt1->TabIndex = 14;
			this->txt1->Text = L"0";
			this->txt1->TextChanged += gcnew System::EventHandler(this, &MyForm::txt1_TextChanged);
			// 
			// butc
			// 
			this->butc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butc->Location = System::Drawing::Point(93, 56);
			this->butc->Name = L"butc";
			this->butc->Size = System::Drawing::Size(75, 66);
			this->butc->TabIndex = 13;
			this->butc->Text = L"C";
			this->butc->UseVisualStyleBackColor = true;
			this->butc->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// butce
			// 
			this->butce->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butce->Location = System::Drawing::Point(174, 56);
			this->butce->Name = L"butce";
			this->butce->Size = System::Drawing::Size(75, 66);
			this->butce->TabIndex = 13;
			this->butce->Text = L"CE";
			this->butce->UseVisualStyleBackColor = true;
			this->butce->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// butpm
			// 
			this->butpm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butpm->Location = System::Drawing::Point(255, 56);
			this->butpm->Name = L"butpm";
			this->butpm->Size = System::Drawing::Size(75, 66);
			this->butpm->TabIndex = 13;
			this->butpm->Text = L"±";
			this->butpm->UseVisualStyleBackColor = true;
			this->butpm->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// but7
			// 
			this->but7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but7->Location = System::Drawing::Point(12, 128);
			this->but7->Name = L"but7";
			this->but7->Size = System::Drawing::Size(75, 66);
			this->but7->TabIndex = 13;
			this->but7->Text = L"7";
			this->but7->UseVisualStyleBackColor = true;
			this->but7->Click += gcnew System::EventHandler(this, &MyForm::Numbers);
			// 
			// but8
			// 
			this->but8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but8->Location = System::Drawing::Point(93, 128);
			this->but8->Name = L"but8";
			this->but8->Size = System::Drawing::Size(75, 66);
			this->but8->TabIndex = 13;
			this->but8->Text = L"8";
			this->but8->UseVisualStyleBackColor = true;
			this->but8->Click += gcnew System::EventHandler(this, &MyForm::Numbers);
			// 
			// but9
			// 
			this->but9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but9->Location = System::Drawing::Point(174, 128);
			this->but9->Name = L"but9";
			this->but9->Size = System::Drawing::Size(75, 66);
			this->but9->TabIndex = 13;
			this->but9->Text = L"9";
			this->but9->UseVisualStyleBackColor = true;
			this->but9->Click += gcnew System::EventHandler(this, &MyForm::Numbers);
			// 
			// butad
			// 
			this->butad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butad->Location = System::Drawing::Point(254, 128);
			this->butad->Name = L"butad";
			this->butad->Size = System::Drawing::Size(75, 66);
			this->butad->TabIndex = 13;
			this->butad->Text = L"+";
			this->butad->UseVisualStyleBackColor = true;
			this->butad->Click += gcnew System::EventHandler(this, &MyForm::op);
			// 
			// but4
			// 
			this->but4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but4->Location = System::Drawing::Point(12, 200);
			this->but4->Name = L"but4";
			this->but4->Size = System::Drawing::Size(75, 66);
			this->but4->TabIndex = 13;
			this->but4->Text = L"4";
			this->but4->UseVisualStyleBackColor = true;
			this->but4->Click += gcnew System::EventHandler(this, &MyForm::Numbers);
			// 
			// but5
			// 
			this->but5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but5->Location = System::Drawing::Point(93, 200);
			this->but5->Name = L"but5";
			this->but5->Size = System::Drawing::Size(75, 66);
			this->but5->TabIndex = 13;
			this->but5->Text = L"5";
			this->but5->UseVisualStyleBackColor = true;
			this->but5->Click += gcnew System::EventHandler(this, &MyForm::Numbers);
			// 
			// but6
			// 
			this->but6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but6->Location = System::Drawing::Point(174, 200);
			this->but6->Name = L"but6";
			this->but6->Size = System::Drawing::Size(75, 66);
			this->but6->TabIndex = 13;
			this->but6->Text = L"6";
			this->but6->UseVisualStyleBackColor = true;
			this->but6->Click += gcnew System::EventHandler(this, &MyForm::Numbers);
			// 
			// butsu
			// 
			this->butsu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butsu->Location = System::Drawing::Point(254, 200);
			this->butsu->Name = L"butsu";
			this->butsu->Size = System::Drawing::Size(75, 66);
			this->butsu->TabIndex = 13;
			this->butsu->Text = L"-";
			this->butsu->UseVisualStyleBackColor = true;
			this->butsu->Click += gcnew System::EventHandler(this, &MyForm::op);
			// 
			// but1
			// 
			this->but1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but1->Location = System::Drawing::Point(12, 273);
			this->but1->Name = L"but1";
			this->but1->Size = System::Drawing::Size(75, 66);
			this->but1->TabIndex = 13;
			this->but1->Text = L"1";
			this->but1->UseVisualStyleBackColor = true;
			this->but1->Click += gcnew System::EventHandler(this, &MyForm::Numbers);
			// 
			// but2
			// 
			this->but2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but2->Location = System::Drawing::Point(93, 272);
			this->but2->Name = L"but2";
			this->but2->Size = System::Drawing::Size(75, 66);
			this->but2->TabIndex = 13;
			this->but2->Text = L"2";
			this->but2->UseVisualStyleBackColor = true;
			this->but2->Click += gcnew System::EventHandler(this, &MyForm::Numbers);
			// 
			// but3
			// 
			this->but3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but3->Location = System::Drawing::Point(174, 272);
			this->but3->Name = L"but3";
			this->but3->Size = System::Drawing::Size(75, 66);
			this->but3->TabIndex = 13;
			this->but3->Text = L"3";
			this->but3->UseVisualStyleBackColor = true;
			this->but3->Click += gcnew System::EventHandler(this, &MyForm::Numbers);
			// 
			// butml
			// 
			this->butml->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butml->Location = System::Drawing::Point(254, 272);
			this->butml->Name = L"butml";
			this->butml->Size = System::Drawing::Size(75, 66);
			this->butml->TabIndex = 13;
			this->butml->Text = L"X";
			this->butml->UseVisualStyleBackColor = true;
			this->butml->Click += gcnew System::EventHandler(this, &MyForm::op);
			// 
			// but0
			// 
			this->but0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but0->Location = System::Drawing::Point(12, 345);
			this->but0->Name = L"but0";
			this->but0->Size = System::Drawing::Size(75, 66);
			this->but0->TabIndex = 13;
			this->but0->Text = L"0";
			this->but0->UseVisualStyleBackColor = true;
			this->but0->Click += gcnew System::EventHandler(this, &MyForm::Numbers);
			// 
			// butdec
			// 
			this->butdec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butdec->Location = System::Drawing::Point(93, 345);
			this->butdec->Name = L"butdec";
			this->butdec->Size = System::Drawing::Size(75, 66);
			this->butdec->TabIndex = 13;
			this->butdec->Text = L".";
			this->butdec->UseVisualStyleBackColor = true;
			this->butdec->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// buteq
			// 
			this->buteq->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buteq->Location = System::Drawing::Point(174, 345);
			this->buteq->Name = L"buteq";
			this->buteq->Size = System::Drawing::Size(75, 66);
			this->buteq->TabIndex = 13;
			this->buteq->Text = L"=";
			this->buteq->UseVisualStyleBackColor = true;
			this->buteq->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// butdi
			// 
			this->butdi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butdi->Location = System::Drawing::Point(254, 345);
			this->butdi->Name = L"butdi";
			this->butdi->Size = System::Drawing::Size(75, 66);
			this->butdi->TabIndex = 13;
			this->butdi->Text = L"÷";
			this->butdi->UseVisualStyleBackColor = true;
			this->butdi->Click += gcnew System::EventHandler(this, &MyForm::op);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(346, 423);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->butdi);
			this->Controls->Add(this->butml);
			this->Controls->Add(this->butsu);
			this->Controls->Add(this->butad);
			this->Controls->Add(this->butpm);
			this->Controls->Add(this->buteq);
			this->Controls->Add(this->butdec);
			this->Controls->Add(this->but3);
			this->Controls->Add(this->but2);
			this->Controls->Add(this->but6);
			this->Controls->Add(this->but5);
			this->Controls->Add(this->but0);
			this->Controls->Add(this->but9);
			this->Controls->Add(this->but1);
			this->Controls->Add(this->but8);
			this->Controls->Add(this->but4);
			this->Controls->Add(this->butce);
			this->Controls->Add(this->but7);
			this->Controls->Add(this->butc);
			this->Controls->Add(this->butback);
			this->Controls->Add(this->label3);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->TransparencyKey = System::Drawing::Color::Pink;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		double firstnum, secondnum, res;
		String ^ iop;
#pragma endregion
	


private: System::Void Numbers(System::Object^  sender, System::EventArgs^  e) {
	Button ^ numb = safe_cast<Button ^>(sender);
	if (txt1->Text == "0") {
		txt1->Text = numb->Text;
	}
	else {
		txt1->Text += numb->Text;
	}

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	txt1->Text = "";
	res = 0;
	iop = ""; 

}


private: System::Void op(System::Object^  sender, System::EventArgs^  e) {
	Button ^ App = safe_cast<Button ^>(sender);
	firstnum = Double::Parse(txt1->Text);
	txt1->Text = "";
	iop = App->Text;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	txt1->Text = "0";

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!txt1->Text->Contains(".")) {
		txt1->Text += ".";
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txt1->Text->Length>0) {
		txt1->Text = txt1->Text->Remove(txt1->Text->Length - 1 ,1);
	}


}
private: System::Void txt1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
	if (txt1->Text=="") {
		txt1->Text = "0";
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txt1->Text->Contains("-")) {
		txt1->Text = txt1->Text->Remove(0,1);
	}
	else {
		txt1->Text = "-" + txt1->Text;
	}

}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	secondnum = Double::Parse(txt1->Text);
	if (iop == "+") {
		res = firstnum + secondnum;
		txt1->Text = System::Convert::ToString(res);
	}
	else if (iop == "-") {
		res = firstnum - secondnum;
		txt1->Text = System::Convert::ToString(res);
	}
	else if (iop == "X") {
		res = firstnum * secondnum;
		txt1->Text = System::Convert::ToString(res);
	}
	else if (iop == "÷") {
		if (secondnum != 0) {
			res = firstnum / secondnum;
			txt1->Text = System::Convert::ToString(res);
		}
		else
			txt1->Text = "You are an idiot";

	}



}
};
}
