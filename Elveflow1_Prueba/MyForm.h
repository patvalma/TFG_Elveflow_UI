#pragma once
#include "AF1.h"
#include <Elveflow64.h>
#include "error_check.h"
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <stdio.h>
#include <string.h>


namespace Elveflow1Prueba {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//			
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;








	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::Button^ Set_preassure;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;



























	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Set_preassure = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label1->Location = System::Drawing::Point(44, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 52);
			this->label1->TabIndex = 0;
			this->label1->Text = L"AF1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label2->Location = System::Drawing::Point(480, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 50);
			this->label2->TabIndex = 1;
			this->label2->Text = L"MUX";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Corbel", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label3->Location = System::Drawing::Point(40, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Presión";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"Cargar perfil calibracion";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label5->Location = System::Drawing::Point(486, 93);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 18);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Seleccion canales";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label6->Location = System::Drawing::Point(486, 111);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(254, 18);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Para abrir un canal seleccione el deseado";
			// 
			// Set_preassure
			// 
			this->Set_preassure->BackColor = System::Drawing::Color::LimeGreen;
			this->Set_preassure->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Set_preassure->ForeColor = System::Drawing::SystemColors::WindowText;
			this->Set_preassure->Location = System::Drawing::Point(42, 172);
			this->Set_preassure->Name = L"Set_preassure";
			this->Set_preassure->Size = System::Drawing::Size(139, 23);
			this->Set_preassure->TabIndex = 13;
			this->Set_preassure->Text = L"set preassure";
			this->Set_preassure->UseVisualStyleBackColor = false;
			this->Set_preassure->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Crimson;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(42, 224);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 15;
			this->button1->Text = L"EXIT";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::PaleVioletRed;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button2->Location = System::Drawing::Point(655, 240);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 23);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Close ALL";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LimeGreen;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button3->Location = System::Drawing::Point(655, 211);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(126, 23);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Open ALL";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(187, 172);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 18;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->BackColor = System::Drawing::Color::White;
			this->checkedListBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Impact", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBox1->ForeColor = System::Drawing::Color::Black;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8"
			});
			this->checkedListBox1->Location = System::Drawing::Point(489, 154);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(36, 168);
			this->checkedListBox1->TabIndex = 19;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::checkedListBox1_SelectedIndexChanged);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button4->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button4->Location = System::Drawing::Point(531, 299);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 20;
			this->button4->Text = L"SEND";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_2);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(42, 275);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 21;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(857, 562);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Set_preassure);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Corbel", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Configurador Elveflow";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SetPresion_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	//SET DE PRESION.
	public: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		//Set presion, si quiero otra presión solo tengo que volverle a dar.
		int error = 0;
		int  MyAF1_ID = -1;
		error = AF1_Initialization("AF1", Z_regulator_type_none, Z_sensor_type_none, &MyAF1_ID);
		Check_Error(error);// error send if not recognized

		String^ in = textBox1->Text;
		int In = System::Convert::ToInt16(in);

		double* Calibration = new double[1000];
		AF1_Calib(MyAF1_ID, Calibration, 1000);//Perform calibration ! ! ! Take about 2 minutes ! ! !
		error = Elveflow_Calibration_Save("D:\ELVEFLOW_CALIBRACIONES", Calibration, 1000); // Save calibration in the selected path, if no path or path non valid, open prompt to ask the file name
		Check_Error(error);

		
		AF1_Set_Press(MyAF1_ID, In, Calibration, 1000);

		//AF1_Destructor(MyAF1_ID);
		//system("PAUSE");

	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//AF1 DESTRUCTOR
		//Si entro aquí es que he elegido el AF1: INICIALIZAR
		//int  MyAF1_ID = -1;
		//System::String respuesta; //create a new variable to store the user answer for communication
		//int error = 0;// use to obtain errors of function. If it's 0 -> no error , else -> error, see labview error 

		// initialize the AF1 -> Use NiMAX to determine the device name
		//avoid non alphanumeric characters in device name
		//error = AF1_Initialization("0123", Z_regulator_type_none, Z_sensor_type_none, &MyAF1_ID);
		//Check_Error(error);// error send if not recognized
		int  MyAF1_ID = -1;
		int In = 0;
		double* Calibration = new double[1000];
		Elveflow_Calibration_Default(Calibration, 1000); //use default calibration

		AF1_Set_Press(MyAF1_ID, In, Calibration, 1000);
		
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//ABRIR TODAS LAS VALVULAS
		int error = 0;// use to obtain errors of function. If it's 0 -> no error , else -> error, see labview error 
		int  MyMUX_ID = -1; //AQUI PUSE EL NOMBRE DEL MUX QUE SE VE CON EL PROGRAMA DE ELVEFLOW PARA QUE LO RECONOZCA-
		// initialize the AF1 -> Use NiMAX to determine the device name
		//avoid non alphanumeric characters in device name
		error = MUX_Initialization("Dev2", &MyMUX_ID);//Chose instrument port
		Check_Error(error);// error send if not recognized

		int all_valves_open[16] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };//all valve open
		MUX_Set_all_valves(MyMUX_ID, all_valves_open, 16);

	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//CERRAR TODAS LAS VALVULAS
		int error = 0;// use to obtain errors of function. If it's 0 -> no error , else -> error, see labview error 
		int  MyMUX_ID = -1; //AQUI PUSE EL NOMBRE DEL MUX QUE SE VE CON EL PROGRAMA DE ELVEFLOW PARA QUE LO RECONOZCA-
		// initialize the AF1 -> Use NiMAX to determine the device name
		//avoid non alphanumeric characters in device name
		error = MUX_Initialization("Dev2", &MyMUX_ID);//Chose instrument port
		Check_Error(error);// error send if not recognized

		int all_valves_open[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };//Close valve open //AUNQUE TENGAMOS SOLO 8 SALIDAS HAY QUE DEJAR LAS 16
		MUX_Set_all_valves(MyMUX_ID, all_valves_open, 16);
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		{

		}

	}
	

private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}



private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	int  MyMUX_ID = -1;
	int input_valve = -1;
	int output_valve = -1;
	int valve_state = -1;
	int all_valves[16] = { 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1 };//init all valves here !!! should be exactelly 8 elements, otherwise nothing will happen 
	


	MUX_Wire_Set_all_valves(MyMUX_ID, all_valves, 16);
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {


	int  MyMUX_ID = -1;
	int input_valve = -1;
	int output_valve = -1;
	int valve_state = -1;
	int all_valves[16] = { 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1 };//init all valves here !!! should be exactelly 8 elements, otherwise nothing will happen 
	int all_valves_open[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int all_valves_closed[16] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };

	
	int error = 0;// use to obtain errors of function. If it's 0 -> no error , else -> error, see labview error 
	error = MUX_Initialization("Dev2", &MyMUX_ID);//Chose instrument port
	Check_Error(error);// error send if not recognized

	MUX_Set_all_valves(MyMUX_ID, all_valves, 16);

}
	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {


}		


private: System::Void button4_Click_2(System::Object^ sender, System::EventArgs^ e) {
	bool check;
	int  MyMUX_ID = -1;
	int input_valve = -1;
	int output_valve = -1;
	int valve_state = -1;
	int all_valves[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int error = 0;// use to obtain errors of function. If it's 0 -> no error , else -> error, see labview error 
	error = MUX_Initialization("Dev2", &MyMUX_ID);//Chose instrument port
	Check_Error(error);// error send if not recognized

	int my_vector[8]; //Me genero un vector de 8 posiciones que son el máximo de válvulas que puede abrir/cerrar  el usuario

	String^ convert = ""; //tengo un string vacío 

	for (int i = 0; i < 8; ++i) { //recojo cada item del textbox

		check = checkedListBox1->GetItemChecked(i); //check se pone a true en cada iteraccion si ese elemento esta checkeado


		if (check == true) { //si está chequeado, el usuario quiere abrirlo/cerrarlo 
			convert = checkedListBox1->GetItemText(i);//convert se convierte en un string que lo que tiene es el texto del item que checkeo, como le he puesto los numeros se convierte en el numero
			int valvula = System::Convert::ToInt16(convert);//valvula es convert -> string
			int masUnoValvula = valvula + 1; 

			my_vector[i] = masUnoValvula;//my_vector en la posición i se convertira en el numero que hay almacenado en válvula.

			switch (my_vector[i]) {

			case 1: my_vector[i] = 16; break;
			case 2: my_vector[i] = 12; break;
			case 3: my_vector[i] = 8; break;
			case 4: my_vector[i] = 4; break;
			case 5: my_vector[i] = 15; break;
			case 6: my_vector[i] = 11; break;
			case 7: my_vector[i] = 7; break;
			case 8: my_vector[i] = 3; break;
			default: my_vector[i] = 0; break; 
			}
		}
		else (my_vector[i] = 0);
	}

	for (int j = 0; j < 8; ++j) { //me creo otra variable J que ira hasta 16 que es el tamaño de all_valves
		//if (my_vector[j] ==! 0) { //ahora si la posicion de j coincide con el número que tengo almacenado en my_vector es que en esa posicion quiero tener un 1. Encendido
			
		switch (my_vector[j]) {

			case 16: all_valves[15] = 1; break;
			case 12: all_valves[11] = 1; break;
			case 8: all_valves[7] = 1; break;
			case 4: all_valves[3] = 1; break;
			case 15: all_valves[14] = 1; break;
			case 11: all_valves[10] = 1; break;
			case 7: all_valves[6] = 1; break;
			case 3: all_valves[2] = 1; break;
			default: all_valves[1] = 0; all_valves[4] = 0; all_valves[5] = 0; all_valves[8] = 0; all_valves[9] = 0; all_valves[12] = 0; all_valves[13] = 0; all_valves[0] = 0; break;
			}
		//}	else all_valves[j] = 0;//si no coincide es que quiero tener un 0.
	}

	MUX_Set_all_valves(MyMUX_ID, all_valves, 16);

}

private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}

