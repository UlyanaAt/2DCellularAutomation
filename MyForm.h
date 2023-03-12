#pragma once

const int width = 61;
const int height = 32;
typedef bool ArrayType[width];

namespace My2DCellularAutomation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ buttonRF;
	private: System::Windows::Forms::Button^ buttonSS;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column23;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column24;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column25;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column26;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column27;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column28;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column29;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column30;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column31;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column32;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column33;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column34;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column35;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column36;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column37;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column38;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column39;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column40;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column41;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column42;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column43;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column44;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column45;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column46;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column47;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column48;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column49;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column50;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column51;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column52;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column53;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column54;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column55;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column56;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column57;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column58;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column59;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column60;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column61;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
















































































































































































	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonRF = (gcnew System::Windows::Forms::Button());
			this->buttonSS = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column29 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column30 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column31 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column32 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column33 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column34 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column35 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column36 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column37 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column38 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column39 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column40 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column41 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column42 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column43 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column44 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column45 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column46 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column47 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column48 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column49 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column50 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column51 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column52 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column53 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column54 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column55 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column56 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column57 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column58 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column59 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column60 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column61 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->buttonRF);
			this->groupBox1->Controls->Add(this->buttonSS);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"MS Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(285, 224);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Start";
			// 
			// buttonRF
			// 
			this->buttonRF->Location = System::Drawing::Point(56, 118);
			this->buttonRF->Name = L"buttonRF";
			this->buttonRF->Size = System::Drawing::Size(171, 64);
			this->buttonRF->TabIndex = 1;
			this->buttonRF->Text = L"Random Filling";
			this->buttonRF->UseVisualStyleBackColor = true;
			this->buttonRF->Click += gcnew System::EventHandler(this, &MyForm::buttonRF_Click);
			// 
			// buttonSS
			// 
			this->buttonSS->Location = System::Drawing::Point(56, 43);
			this->buttonSS->Name = L"buttonSS";
			this->buttonSS->Size = System::Drawing::Size(171, 57);
			this->buttonSS->TabIndex = 0;
			this->buttonSS->Text = L"Start/Stop";
			this->buttonSS->UseVisualStyleBackColor = true;
			this->buttonSS->Click += gcnew System::EventHandler(this, &MyForm::buttonSS_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(61) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10,
					this->Column11, this->Column12, this->Column13, this->Column14, this->Column15, this->Column16, this->Column17, this->Column18,
					this->Column19, this->Column20, this->Column21, this->Column22, this->Column23, this->Column24, this->Column25, this->Column26,
					this->Column27, this->Column28, this->Column29, this->Column30, this->Column31, this->Column32, this->Column33, this->Column34,
					this->Column35, this->Column36, this->Column37, this->Column38, this->Column39, this->Column40, this->Column41, this->Column42,
					this->Column43, this->Column44, this->Column45, this->Column46, this->Column47, this->Column48, this->Column49, this->Column50,
					this->Column51, this->Column52, this->Column53, this->Column54, this->Column55, this->Column56, this->Column57, this->Column58,
					this->Column59, this->Column60, this->Column61
			});
			this->dataGridView1->Location = System::Drawing::Point(312, 25);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView1->Size = System::Drawing::Size(1710, 950);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 6;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 6;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 6;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Column4";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 6;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Column5";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 6;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Column6";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 6;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Column7";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 6;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Column8";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 6;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Column9";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 6;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Column10";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->Width = 6;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Column11";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->Width = 6;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Column12";
			this->Column12->MinimumWidth = 6;
			this->Column12->Name = L"Column12";
			this->Column12->Width = 6;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"Column13";
			this->Column13->MinimumWidth = 6;
			this->Column13->Name = L"Column13";
			this->Column13->Width = 6;
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"Column14";
			this->Column14->MinimumWidth = 6;
			this->Column14->Name = L"Column14";
			this->Column14->Width = 6;
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"Column15";
			this->Column15->MinimumWidth = 6;
			this->Column15->Name = L"Column15";
			this->Column15->Width = 6;
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"Column16";
			this->Column16->MinimumWidth = 6;
			this->Column16->Name = L"Column16";
			this->Column16->Width = 6;
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"Column17";
			this->Column17->MinimumWidth = 6;
			this->Column17->Name = L"Column17";
			this->Column17->Width = 6;
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"Column18";
			this->Column18->MinimumWidth = 6;
			this->Column18->Name = L"Column18";
			this->Column18->Width = 6;
			// 
			// Column19
			// 
			this->Column19->HeaderText = L"Column19";
			this->Column19->MinimumWidth = 6;
			this->Column19->Name = L"Column19";
			this->Column19->Width = 6;
			// 
			// Column20
			// 
			this->Column20->HeaderText = L"Column20";
			this->Column20->MinimumWidth = 6;
			this->Column20->Name = L"Column20";
			this->Column20->Width = 6;
			// 
			// Column21
			// 
			this->Column21->HeaderText = L"Column21";
			this->Column21->MinimumWidth = 6;
			this->Column21->Name = L"Column21";
			this->Column21->Width = 6;
			// 
			// Column22
			// 
			this->Column22->HeaderText = L"Column22";
			this->Column22->MinimumWidth = 6;
			this->Column22->Name = L"Column22";
			this->Column22->Width = 6;
			// 
			// Column23
			// 
			this->Column23->HeaderText = L"Column23";
			this->Column23->MinimumWidth = 6;
			this->Column23->Name = L"Column23";
			this->Column23->Width = 6;
			// 
			// Column24
			// 
			this->Column24->HeaderText = L"Column24";
			this->Column24->MinimumWidth = 6;
			this->Column24->Name = L"Column24";
			this->Column24->Width = 6;
			// 
			// Column25
			// 
			this->Column25->HeaderText = L"Column25";
			this->Column25->MinimumWidth = 6;
			this->Column25->Name = L"Column25";
			this->Column25->Width = 6;
			// 
			// Column26
			// 
			this->Column26->HeaderText = L"Column26";
			this->Column26->MinimumWidth = 6;
			this->Column26->Name = L"Column26";
			this->Column26->Width = 6;
			// 
			// Column27
			// 
			this->Column27->HeaderText = L"Column27";
			this->Column27->MinimumWidth = 6;
			this->Column27->Name = L"Column27";
			this->Column27->Width = 6;
			// 
			// Column28
			// 
			this->Column28->HeaderText = L"Column28";
			this->Column28->MinimumWidth = 6;
			this->Column28->Name = L"Column28";
			this->Column28->Width = 6;
			// 
			// Column29
			// 
			this->Column29->HeaderText = L"Column29";
			this->Column29->MinimumWidth = 6;
			this->Column29->Name = L"Column29";
			this->Column29->Width = 6;
			// 
			// Column30
			// 
			this->Column30->HeaderText = L"Column30";
			this->Column30->MinimumWidth = 6;
			this->Column30->Name = L"Column30";
			this->Column30->Width = 6;
			// 
			// Column31
			// 
			this->Column31->HeaderText = L"Column31";
			this->Column31->MinimumWidth = 6;
			this->Column31->Name = L"Column31";
			this->Column31->Width = 6;
			// 
			// Column32
			// 
			this->Column32->HeaderText = L"Column32";
			this->Column32->MinimumWidth = 6;
			this->Column32->Name = L"Column32";
			this->Column32->Width = 6;
			// 
			// Column33
			// 
			this->Column33->HeaderText = L"Column33";
			this->Column33->MinimumWidth = 6;
			this->Column33->Name = L"Column33";
			this->Column33->Width = 6;
			// 
			// Column34
			// 
			this->Column34->HeaderText = L"Column34";
			this->Column34->MinimumWidth = 6;
			this->Column34->Name = L"Column34";
			this->Column34->Width = 6;
			// 
			// Column35
			// 
			this->Column35->HeaderText = L"Column35";
			this->Column35->MinimumWidth = 6;
			this->Column35->Name = L"Column35";
			this->Column35->Width = 6;
			// 
			// Column36
			// 
			this->Column36->HeaderText = L"Column36";
			this->Column36->MinimumWidth = 6;
			this->Column36->Name = L"Column36";
			this->Column36->Width = 6;
			// 
			// Column37
			// 
			this->Column37->HeaderText = L"Column37";
			this->Column37->MinimumWidth = 6;
			this->Column37->Name = L"Column37";
			this->Column37->Width = 6;
			// 
			// Column38
			// 
			this->Column38->HeaderText = L"Column38";
			this->Column38->MinimumWidth = 6;
			this->Column38->Name = L"Column38";
			this->Column38->Width = 6;
			// 
			// Column39
			// 
			this->Column39->HeaderText = L"Column39";
			this->Column39->MinimumWidth = 6;
			this->Column39->Name = L"Column39";
			this->Column39->Width = 6;
			// 
			// Column40
			// 
			this->Column40->HeaderText = L"Column40";
			this->Column40->MinimumWidth = 6;
			this->Column40->Name = L"Column40";
			this->Column40->Width = 6;
			// 
			// Column41
			// 
			this->Column41->HeaderText = L"Column41";
			this->Column41->MinimumWidth = 6;
			this->Column41->Name = L"Column41";
			this->Column41->Width = 6;
			// 
			// Column42
			// 
			this->Column42->HeaderText = L"Column42";
			this->Column42->MinimumWidth = 6;
			this->Column42->Name = L"Column42";
			this->Column42->Width = 6;
			// 
			// Column43
			// 
			this->Column43->HeaderText = L"Column43";
			this->Column43->MinimumWidth = 6;
			this->Column43->Name = L"Column43";
			this->Column43->Width = 6;
			// 
			// Column44
			// 
			this->Column44->HeaderText = L"Column44";
			this->Column44->MinimumWidth = 6;
			this->Column44->Name = L"Column44";
			this->Column44->Width = 6;
			// 
			// Column45
			// 
			this->Column45->HeaderText = L"Column45";
			this->Column45->MinimumWidth = 6;
			this->Column45->Name = L"Column45";
			this->Column45->Width = 6;
			// 
			// Column46
			// 
			this->Column46->HeaderText = L"Column46";
			this->Column46->MinimumWidth = 6;
			this->Column46->Name = L"Column46";
			this->Column46->Width = 6;
			// 
			// Column47
			// 
			this->Column47->HeaderText = L"Column47";
			this->Column47->MinimumWidth = 6;
			this->Column47->Name = L"Column47";
			this->Column47->Width = 6;
			// 
			// Column48
			// 
			this->Column48->HeaderText = L"Column48";
			this->Column48->MinimumWidth = 6;
			this->Column48->Name = L"Column48";
			this->Column48->Width = 6;
			// 
			// Column49
			// 
			this->Column49->HeaderText = L"Column49";
			this->Column49->MinimumWidth = 6;
			this->Column49->Name = L"Column49";
			this->Column49->Width = 6;
			// 
			// Column50
			// 
			this->Column50->HeaderText = L"Column50";
			this->Column50->MinimumWidth = 6;
			this->Column50->Name = L"Column50";
			this->Column50->Width = 6;
			// 
			// Column51
			// 
			this->Column51->HeaderText = L"Column51";
			this->Column51->MinimumWidth = 6;
			this->Column51->Name = L"Column51";
			this->Column51->Width = 6;
			// 
			// Column52
			// 
			this->Column52->HeaderText = L"Column52";
			this->Column52->MinimumWidth = 6;
			this->Column52->Name = L"Column52";
			this->Column52->Width = 6;
			// 
			// Column53
			// 
			this->Column53->HeaderText = L"Column53";
			this->Column53->MinimumWidth = 6;
			this->Column53->Name = L"Column53";
			this->Column53->Width = 6;
			// 
			// Column54
			// 
			this->Column54->HeaderText = L"Column54";
			this->Column54->MinimumWidth = 6;
			this->Column54->Name = L"Column54";
			this->Column54->Width = 6;
			// 
			// Column55
			// 
			this->Column55->HeaderText = L"Column55";
			this->Column55->MinimumWidth = 6;
			this->Column55->Name = L"Column55";
			this->Column55->Width = 6;
			// 
			// Column56
			// 
			this->Column56->HeaderText = L"Column56";
			this->Column56->MinimumWidth = 6;
			this->Column56->Name = L"Column56";
			this->Column56->Width = 6;
			// 
			// Column57
			// 
			this->Column57->HeaderText = L"Column57";
			this->Column57->MinimumWidth = 6;
			this->Column57->Name = L"Column57";
			this->Column57->Width = 6;
			// 
			// Column58
			// 
			this->Column58->HeaderText = L"Column58";
			this->Column58->MinimumWidth = 6;
			this->Column58->Name = L"Column58";
			this->Column58->Width = 6;
			// 
			// Column59
			// 
			this->Column59->HeaderText = L"Column59";
			this->Column59->MinimumWidth = 6;
			this->Column59->Name = L"Column59";
			this->Column59->Width = 6;
			// 
			// Column60
			// 
			this->Column60->HeaderText = L"Column60";
			this->Column60->MinimumWidth = 6;
			this->Column60->Name = L"Column60";
			this->Column60->Width = 6;
			// 
			// Column61
			// 
			this->Column61->HeaderText = L"Column61";
			this->Column61->MinimumWidth = 6;
			this->Column61->Name = L"Column61";
			this->Column61->Width = 6;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 979);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private:int BCount = 0;

private: System::Void buttonSS_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void buttonRF_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e);

Void Cleaner();
bool isAlive(ArrayType* pointer, int y, int x);
Void Draw(ArrayType* pointer, ArrayType* pointerT);

};
}
