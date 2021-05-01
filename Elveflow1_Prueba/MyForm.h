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
			//TODO: agregar c�digo de constructor aqu�
			//			
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ b_connect;



























	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;
		int32_t  MyAF1_ID2 = -1;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
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
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->b_connect = (gcnew System::Windows::Forms::Button());
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
			this->label3->Text = L"Presi�n";
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
			// button6
			// 
			this->button6->Location = System::Drawing::Point(38, 328);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 22;
			this->button6->Text = L"disconnect";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// b_connect
			// 
			this->b_connect->Location = System::Drawing::Point(206, 328);
			this->b_connect->Name = L"b_connect";
			this->b_connect->Size = System::Drawing::Size(111, 33);
			this->b_connect->TabIndex = 23;
			this->b_connect->Text = L"connect";
			this->b_connect->UseVisualStyleBackColor = true;
			this->b_connect->Click += gcnew System::EventHandler(this, &MyForm::b_connect_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(857, 562);
			this->Controls->Add(this->b_connect);
			this->Controls->Add(this->button6);
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

	public: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {//Poner presion
		int error = 0;
		int  MyAF1_ID = -1;
		double* Calibration = new double[1000];
		double* Calibration2 = new double[1000];
		String^ in = textBox1->Text;
		int In = System::Convert::ToInt16(in);
		error = AF1_Initialization("MyAF1", Z_regulator_type__0_2000_mbar, Z_sensor_type_none, &MyAF1_ID);
		Check_Error(error);// error send if not recognized 
		error = 0;

		error=AF1_Calib(MyAF1_ID, Calibration, 1000);//Perform calibration ! ! ! Take about 2 minutes ! ! !
		Check_Error(error);

		error = 0;
		char* path2 = "D:\\calib2";

		error = Elveflow_Calibration_Save(path2, Calibration, 1000); // Save calibration in the selected path, if no path or path non valid, open prompt to ask the file name
		Check_Error(error);

		error = 0;

		char* path = "D:\\calib";

		error=Elveflow_Calibration_Load(path2, Calibration2, 1000);
		Check_Error(error);// error send if not recognized 

		error = 0;
	
		AF1_Set_Press(MyAF1_ID, In, Calibration, 1000);
		Check_Error(error);// error send if not recognized 


	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) { //EXIT pero no es funcional de momento, tengo que ponerle que salga del programa.
		//AF1 DESTRUCTOR
		//Si entro aqu� es que he elegido el AF1: INICIALIZAR
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
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {//TODAS LAS VALVULAS
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
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {//TODAS LAS VALVULAS
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

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {//Nivel de presion que quiero
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	
private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {//Checkbox 

}		

private: System::Void button4_Click_2(System::Object^ sender, System::EventArgs^ e) {//boton SEND del multiplexor
	bool check;
	int  MyMUX_ID = -1;
	int input_valve = -1;
	int output_valve = -1;
	int valve_state = -1;
	int all_valves[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int error = 0;// use to obtain errors of function. If it's 0 -> no error , else -> error, see labview error 
	error = MUX_Initialization("Dev2", &MyMUX_ID);//Chose instrument port
	Check_Error(error);// error send if not recognized

	int my_vector[8]; //Me genero un vector de 8 posiciones que son el m�ximo de v�lvulas que puede abrir/cerrar  el usuario

	String^ convert = ""; //tengo un string vac�o 

	for (int i = 0; i < 8; ++i) { //recojo cada item del textbox

		check = checkedListBox1->GetItemChecked(i); //check se pone a true en cada iteraccion si ese elemento esta checkeado


		if (check == true) { //si est� chequeado, el usuario quiere abrirlo/cerrarlo 
			convert = checkedListBox1->GetItemText(i);//convert se convierte en un string que lo que tiene es el texto del item que checkeo, como le he puesto los numeros se convierte en el numero
			int valvula = System::Convert::ToInt16(convert);//valvula es convert -> string
			int masUnoValvula = valvula + 1; 

			my_vector[i] = masUnoValvula;//my_vector en la posici�n i se convertira en el numero que hay almacenado en v�lvula.

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

	for (int j = 0; j < 8; ++j) { //me creo otra variable J que ira hasta 16 que es el tama�o de all_valves
		//if (my_vector[j] ==! 0) { //ahora si la posicion de j coincide con el n�mero que tengo almacenado en my_vector es que en esa posicion quiero tener un 1. Encendido
			
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


private: System::Void b_connect_Click(System::Object^ sender, System::EventArgs^ e) {

	int error = 0;
	//int  MyAF1_ID = -1;
	int MyAF1_ID = System::Convert::ToInt32(MyAF1_ID2);
	//error = AF1_Initialization("MyAF1", Z_regulator_type_m1000_1000_mbar, Z_sensor_type_Flow_1000_muL_min, &MyAF1_ID);
	error = AF1_Initialization("MyAF1", Z_regulator_type__0_2000_mbar, Z_sensor_type_none, &MyAF1_ID);
	Check_Error(error);// error send if not recognized 
	//cout << "CONNECTED" << endl;
	

}
};
}

