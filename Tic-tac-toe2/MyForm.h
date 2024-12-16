#pragma once
#include "Source.cpp"
#include <vector>
#include <msclr/marshal.h>
#include <cstring>
#include <string>
#include <sstream>

namespace Tictactoe2 {
	using namespace System::Threading;
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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label95;
	private: System::Windows::Forms::Label^ label68;
	private: System::Windows::Forms::Label^ label94;
	private: System::Windows::Forms::Label^ label67;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label93;
	private: System::Windows::Forms::Label^ label66;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label92;
	private: System::Windows::Forms::Label^ label65;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label91;
	private: System::Windows::Forms::Label^ label64;
	private: System::Windows::Forms::Label^ label90;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label63;
	private: System::Windows::Forms::Label^ label89;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label62;
	private: System::Windows::Forms::Label^ label88;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label61;
	private: System::Windows::Forms::Label^ label87;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label60;
	private: System::Windows::Forms::Label^ label86;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label59;
	private: System::Windows::Forms::Label^ label85;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label58;
	private: System::Windows::Forms::Label^ label84;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label57;
	private: System::Windows::Forms::Label^ label83;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Label^ label82;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::Label^ label81;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::Label^ label80;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::Label^ label79;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::Label^ label78;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::Label^ label77;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Label^ label76;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Label^ label75;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label74;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label73;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label72;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Label^ label71;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label70;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label69;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label96;
private: System::Windows::Forms::Label^ label97;
private: System::Windows::Forms::Label^ label98;

private: System::Windows::Forms::Label^ label99;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button13;

private: System::Windows::Forms::PictureBox^ pictureBox12;
private: System::Windows::Forms::PictureBox^ pictureBox29;
private: System::Windows::Forms::PictureBox^ pictureBox20;
private: System::Windows::Forms::PictureBox^ pictureBox28;
private: System::Windows::Forms::PictureBox^ pictureBox17;
private: System::Windows::Forms::PictureBox^ pictureBox27;
private: System::Windows::Forms::PictureBox^ pictureBox19;
private: System::Windows::Forms::PictureBox^ pictureBox26;
private: System::Windows::Forms::PictureBox^ pictureBox13;
private: System::Windows::Forms::PictureBox^ pictureBox25;
private: System::Windows::Forms::PictureBox^ pictureBox18;
private: System::Windows::Forms::PictureBox^ pictureBox24;
private: System::Windows::Forms::PictureBox^ pictureBox23;
private: System::Windows::Forms::PictureBox^ pictureBox16;
private: System::Windows::Forms::PictureBox^ pictureBox22;
private: System::Windows::Forms::PictureBox^ pictureBox15;
private: System::Windows::Forms::PictureBox^ pictureBox21;
private: System::Windows::Forms::PictureBox^ pictureBox14;
private: System::Windows::Forms::Panel^ panel6;







private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::PictureBox^ pictureBox30;



private: System::Windows::Forms::Label^ label103;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Label^ label104;
private: System::Windows::Forms::Label^ label108;
private: System::Windows::Forms::Label^ label107;
private: System::Windows::Forms::Label^ label106;
private: System::Windows::Forms::Label^ label105;
private: System::Windows::Forms::Label^ label112;
private: System::Windows::Forms::Label^ label111;




private: System::Windows::Forms::Label^ label110;



private: System::Windows::Forms::Label^ label109;
private: System::Windows::Forms::Label^ label120;
private: System::Windows::Forms::Label^ label119;
private: System::Windows::Forms::Label^ label116;
private: System::Windows::Forms::Label^ label115;
private: System::Windows::Forms::Label^ label118;
private: System::Windows::Forms::Label^ label114;
private: System::Windows::Forms::Label^ label117;
private: System::Windows::Forms::Label^ label113;
private: System::Windows::Forms::PictureBox^ pictureBox31;
private: System::Windows::Forms::PictureBox^ pictureBox50;
private: System::Windows::Forms::PictureBox^ pictureBox62;
private: System::Windows::Forms::PictureBox^ pictureBox61;
private: System::Windows::Forms::PictureBox^ pictureBox46;
private: System::Windows::Forms::PictureBox^ pictureBox60;
private: System::Windows::Forms::PictureBox^ pictureBox45;
private: System::Windows::Forms::PictureBox^ pictureBox59;
private: System::Windows::Forms::PictureBox^ pictureBox42;
private: System::Windows::Forms::PictureBox^ pictureBox58;
private: System::Windows::Forms::PictureBox^ pictureBox41;
private: System::Windows::Forms::PictureBox^ pictureBox57;
private: System::Windows::Forms::PictureBox^ pictureBox38;
private: System::Windows::Forms::PictureBox^ pictureBox56;
private: System::Windows::Forms::PictureBox^ pictureBox44;
private: System::Windows::Forms::PictureBox^ pictureBox55;
private: System::Windows::Forms::PictureBox^ pictureBox37;
private: System::Windows::Forms::PictureBox^ pictureBox54;
private: System::Windows::Forms::PictureBox^ pictureBox40;
private: System::Windows::Forms::PictureBox^ pictureBox53;
private: System::Windows::Forms::PictureBox^ pictureBox34;
private: System::Windows::Forms::PictureBox^ pictureBox52;
private: System::Windows::Forms::PictureBox^ pictureBox43;
private: System::Windows::Forms::PictureBox^ pictureBox51;
private: System::Windows::Forms::PictureBox^ pictureBox36;
private: System::Windows::Forms::PictureBox^ pictureBox39;
private: System::Windows::Forms::PictureBox^ pictureBox49;
private: System::Windows::Forms::PictureBox^ pictureBox33;
private: System::Windows::Forms::PictureBox^ pictureBox48;
private: System::Windows::Forms::PictureBox^ pictureBox35;
private: System::Windows::Forms::PictureBox^ pictureBox47;
private: System::Windows::Forms::PictureBox^ pictureBox32;
private: System::Windows::Forms::PictureBox^ pictureBox63;
private: System::Windows::Forms::Label^ label122;
private: System::Windows::Forms::PictureBox^ pictureBox64;
private: System::Windows::Forms::PictureBox^ pictureBox66;
private: System::Windows::Forms::PictureBox^ pictureBox65;
private: System::Windows::Forms::Label^ label102;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::PictureBox^ pictureBox67;
private: System::Windows::Forms::PictureBox^ pictureBox68;
private: System::Windows::Forms::Label^ label121;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::PictureBox^ pictureBox69;
private: System::Windows::Forms::Label^ label123;
private: System::Windows::Forms::Label^ label124;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::Label^ label125;
private: System::Windows::Forms::PictureBox^ pictureBox72;
private: System::Windows::Forms::PictureBox^ pictureBox73;
private: System::Windows::Forms::PictureBox^ pictureBox70;
private: System::Windows::Forms::PictureBox^ pictureBox71;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Label^ label133;
private: System::Windows::Forms::Label^ label132;
private: System::Windows::Forms::Label^ label131;
private: System::Windows::Forms::Label^ label129;
private: System::Windows::Forms::Label^ label134;
private: System::Windows::Forms::Label^ label130;
private: System::Windows::Forms::Label^ label128;
private: System::Windows::Forms::Label^ label127;
private: System::Windows::Forms::Label^ label126;
private: System::Windows::Forms::Label^ label140;
private: System::Windows::Forms::Label^ label139;
private: System::Windows::Forms::Label^ label138;
private: System::Windows::Forms::Label^ label137;
private: System::Windows::Forms::Label^ label136;
private: System::Windows::Forms::Label^ label135;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::PictureBox^ pictureBox74;
private: System::Windows::Forms::Label^ label143;
private: System::Windows::Forms::Label^ label142;
private: System::Windows::Forms::PictureBox^ pictureBox78;
private: System::Windows::Forms::PictureBox^ pictureBox77;
private: System::Windows::Forms::PictureBox^ pictureBox76;
private: System::Windows::Forms::PictureBox^ pictureBox75;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::Label^ label141;
private: System::Windows::Forms::Label^ label152;
private: System::Windows::Forms::Label^ label149;
private: System::Windows::Forms::Label^ label151;
private: System::Windows::Forms::Label^ label146;
private: System::Windows::Forms::Label^ label150;
private: System::Windows::Forms::Label^ label148;
private: System::Windows::Forms::Label^ label147;
private: System::Windows::Forms::Label^ label145;
private: System::Windows::Forms::Label^ label144;
private: System::Windows::Forms::Panel^ panel12;

private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::Label^ label162;
private: System::Windows::Forms::PictureBox^ pictureBox79;
private: System::Windows::Forms::PictureBox^ pictureBox80;
private: System::Windows::Forms::PictureBox^ pictureBox81;
private: System::Windows::Forms::PictureBox^ pictureBox82;
private: System::Windows::Forms::Label^ label163;
private: System::Windows::Forms::Label^ label164;
private: System::Windows::Forms::PictureBox^ pictureBox83;

private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Panel^ panel15;

private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Panel^ panel17;
private: System::Windows::Forms::Label^ label165;


private: System::Windows::Forms::PictureBox^ pictureBox84;
private: System::Windows::Forms::PictureBox^ pictureBox85;
private: System::Windows::Forms::PictureBox^ pictureBox86;
private: System::Windows::Forms::PictureBox^ pictureBox87;
private: System::Windows::Forms::Label^ label166;
private: System::Windows::Forms::Label^ label167;


private: System::Windows::Forms::PictureBox^ pictureBox88;






private: System::Windows::Forms::Label^ label183;
private: System::Windows::Forms::Label^ label182;
private: System::Windows::Forms::Label^ label178;
private: System::Windows::Forms::Label^ label177;
private: System::Windows::Forms::Label^ label173;
private: System::Windows::Forms::Label^ label172;
private: System::Windows::Forms::Label^ label181;

private: System::Windows::Forms::Label^ label176;

private: System::Windows::Forms::Label^ label171;
private: System::Windows::Forms::Label^ label180;
private: System::Windows::Forms::Label^ label175;

private: System::Windows::Forms::Label^ label170;
private: System::Windows::Forms::Label^ label179;
private: System::Windows::Forms::Label^ label174;

private: System::Windows::Forms::Label^ label169;
private: System::Windows::Forms::Label^ label188;

private: System::Windows::Forms::Label^ label187;

private: System::Windows::Forms::Label^ label186;

private: System::Windows::Forms::Label^ label185;

private: System::Windows::Forms::Label^ label184;
private: System::Windows::Forms::Label^ label193;

private: System::Windows::Forms::Label^ label192;

private: System::Windows::Forms::Label^ label191;

private: System::Windows::Forms::Label^ label190;

private: System::Windows::Forms::Label^ label189;
private: System::Windows::Forms::Panel^ panel18;

private: System::Windows::Forms::Label^ label219;

private: System::Windows::Forms::Label^ label218;




private: System::Windows::Forms::Label^ label214;

private: System::Windows::Forms::Label^ label213;



private: System::Windows::Forms::Label^ label209;

private: System::Windows::Forms::Label^ label208;

private: System::Windows::Forms::Label^ label204;
private: System::Windows::Forms::Label^ label217;



private: System::Windows::Forms::Label^ label203;
private: System::Windows::Forms::Label^ label212;


private: System::Windows::Forms::Label^ label207;
private: System::Windows::Forms::Label^ label216;



private: System::Windows::Forms::Label^ label202;
private: System::Windows::Forms::Label^ label211;
private: System::Windows::Forms::Label^ label220;





private: System::Windows::Forms::Label^ label206;
private: System::Windows::Forms::Label^ label215;




private: System::Windows::Forms::Label^ label201;
private: System::Windows::Forms::Label^ label210;



private: System::Windows::Forms::Label^ label205;

private: System::Windows::Forms::Label^ label200;



private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Panel^ panel20;
private: System::Windows::Forms::Label^ label156;

private: System::Windows::Forms::PictureBox^ pictureBox89;
private: System::Windows::Forms::PictureBox^ pictureBox90;
private: System::Windows::Forms::PictureBox^ pictureBox91;
private: System::Windows::Forms::PictureBox^ pictureBox92;
private: System::Windows::Forms::Label^ label157;

private: System::Windows::Forms::Label^ label155;

private: System::Windows::Forms::PictureBox^ pictureBox93;
private: System::Windows::Forms::Label^ label240;

private: System::Windows::Forms::Label^ label239;


private: System::Windows::Forms::Label^ label235;

private: System::Windows::Forms::Label^ label234;



private: System::Windows::Forms::Label^ label230;

private: System::Windows::Forms::Label^ label229;



private: System::Windows::Forms::Label^ label225;
private: System::Windows::Forms::Label^ label238;




private: System::Windows::Forms::Label^ label224;
private: System::Windows::Forms::Label^ label233;



private: System::Windows::Forms::Label^ label228;
private: System::Windows::Forms::Label^ label237;


private: System::Windows::Forms::Label^ label223;
private: System::Windows::Forms::Label^ label232;
private: System::Windows::Forms::Label^ label241;



private: System::Windows::Forms::Label^ label227;
private: System::Windows::Forms::Label^ label236;


private: System::Windows::Forms::Label^ label222;
private: System::Windows::Forms::Label^ label231;


private: System::Windows::Forms::Label^ label226;

private: System::Windows::Forms::Label^ label221;
private: System::Windows::Forms::Panel^ panel21;

private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Panel^ panel23;
private: System::Windows::Forms::Label^ label271;

private: System::Windows::Forms::PictureBox^ pictureBox95;
private: System::Windows::Forms::PictureBox^ pictureBox96;
private: System::Windows::Forms::PictureBox^ pictureBox97;
private: System::Windows::Forms::Label^ label272;
private: System::Windows::Forms::Label^ label273;
private: System::Windows::Forms::PictureBox^ pictureBox98;
private: System::Windows::Forms::Panel^ panel24;
private: System::Windows::Forms::Button^ button28;

private: System::Windows::Forms::Button^ button31;

private: System::Windows::Forms::Button^ button29;

private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::Button^ button30;
private: System::Windows::Forms::Label^ label242;
private: System::Windows::Forms::Label^ label250;


private: System::Windows::Forms::Label^ label247;

private: System::Windows::Forms::Label^ label244;
private: System::Windows::Forms::Label^ label249;


private: System::Windows::Forms::Label^ label248;

private: System::Windows::Forms::Label^ label246;

private: System::Windows::Forms::Label^ label245;

private: System::Windows::Forms::Label^ label243;

private: System::Windows::Forms::Button^ button36;

private: System::Windows::Forms::Button^ button34;
private: System::Windows::Forms::Button^ button37;


private: System::Windows::Forms::Button^ button35;





private: System::Windows::Forms::Button^ button33;
private: System::Windows::Forms::PictureBox^ pictureBox94;
private: System::Windows::Forms::Panel^ panel22;
private: System::Windows::Forms::Button^ button41;

private: System::Windows::Forms::Button^ button38;


private: System::Windows::Forms::Button^ button40;




private: System::Windows::Forms::Button^ button39;

private: System::Windows::Forms::Button^ button43;
private: System::Windows::Forms::Button^ button44;

private: System::Windows::Forms::Button^ button46;
private: System::Windows::Forms::Button^ button47;
private: System::Windows::Forms::Label^ label100;
private: System::Windows::Forms::Label^ label101;
private: System::Windows::Forms::Label^ label153;
private: System::Windows::Forms::PictureBox^ pictureBox99;
private: System::Windows::Forms::PictureBox^ pictureBox100;




























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox100 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->label153 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox99 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox67 = (gcnew System::Windows::Forms::PictureBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->pictureBox68 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label121 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox66 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox65 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
			this->label122 = (gcnew System::Windows::Forms::Label());
			this->label120 = (gcnew System::Windows::Forms::Label());
			this->label119 = (gcnew System::Windows::Forms::Label());
			this->label116 = (gcnew System::Windows::Forms::Label());
			this->label115 = (gcnew System::Windows::Forms::Label());
			this->label112 = (gcnew System::Windows::Forms::Label());
			this->label118 = (gcnew System::Windows::Forms::Label());
			this->label111 = (gcnew System::Windows::Forms::Label());
			this->label114 = (gcnew System::Windows::Forms::Label());
			this->label108 = (gcnew System::Windows::Forms::Label());
			this->label117 = (gcnew System::Windows::Forms::Label());
			this->label110 = (gcnew System::Windows::Forms::Label());
			this->label113 = (gcnew System::Windows::Forms::Label());
			this->label107 = (gcnew System::Windows::Forms::Label());
			this->label109 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label140 = (gcnew System::Windows::Forms::Label());
			this->label133 = (gcnew System::Windows::Forms::Label());
			this->label139 = (gcnew System::Windows::Forms::Label());
			this->label132 = (gcnew System::Windows::Forms::Label());
			this->label138 = (gcnew System::Windows::Forms::Label());
			this->label131 = (gcnew System::Windows::Forms::Label());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->label137 = (gcnew System::Windows::Forms::Label());
			this->label136 = (gcnew System::Windows::Forms::Label());
			this->label135 = (gcnew System::Windows::Forms::Label());
			this->label134 = (gcnew System::Windows::Forms::Label());
			this->label130 = (gcnew System::Windows::Forms::Label());
			this->label128 = (gcnew System::Windows::Forms::Label());
			this->label127 = (gcnew System::Windows::Forms::Label());
			this->label126 = (gcnew System::Windows::Forms::Label());
			this->label123 = (gcnew System::Windows::Forms::Label());
			this->label124 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label125 = (gcnew System::Windows::Forms::Label());
			this->pictureBox72 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox73 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox70 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox71 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox69 = (gcnew System::Windows::Forms::PictureBox());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->pictureBox74 = (gcnew System::Windows::Forms::PictureBox());
			this->label143 = (gcnew System::Windows::Forms::Label());
			this->label142 = (gcnew System::Windows::Forms::Label());
			this->pictureBox78 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox77 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox76 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox75 = (gcnew System::Windows::Forms::PictureBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label152 = (gcnew System::Windows::Forms::Label());
			this->label149 = (gcnew System::Windows::Forms::Label());
			this->label151 = (gcnew System::Windows::Forms::Label());
			this->label146 = (gcnew System::Windows::Forms::Label());
			this->label150 = (gcnew System::Windows::Forms::Label());
			this->label148 = (gcnew System::Windows::Forms::Label());
			this->label147 = (gcnew System::Windows::Forms::Label());
			this->label145 = (gcnew System::Windows::Forms::Label());
			this->label144 = (gcnew System::Windows::Forms::Label());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label141 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->pictureBox79 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox80 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox81 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox82 = (gcnew System::Windows::Forms::PictureBox());
			this->label163 = (gcnew System::Windows::Forms::Label());
			this->label164 = (gcnew System::Windows::Forms::Label());
			this->pictureBox83 = (gcnew System::Windows::Forms::PictureBox());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label162 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->label193 = (gcnew System::Windows::Forms::Label());
			this->label192 = (gcnew System::Windows::Forms::Label());
			this->label188 = (gcnew System::Windows::Forms::Label());
			this->label187 = (gcnew System::Windows::Forms::Label());
			this->label183 = (gcnew System::Windows::Forms::Label());
			this->label182 = (gcnew System::Windows::Forms::Label());
			this->label178 = (gcnew System::Windows::Forms::Label());
			this->label177 = (gcnew System::Windows::Forms::Label());
			this->label191 = (gcnew System::Windows::Forms::Label());
			this->label173 = (gcnew System::Windows::Forms::Label());
			this->label186 = (gcnew System::Windows::Forms::Label());
			this->label172 = (gcnew System::Windows::Forms::Label());
			this->label181 = (gcnew System::Windows::Forms::Label());
			this->label190 = (gcnew System::Windows::Forms::Label());
			this->label176 = (gcnew System::Windows::Forms::Label());
			this->label185 = (gcnew System::Windows::Forms::Label());
			this->label171 = (gcnew System::Windows::Forms::Label());
			this->label180 = (gcnew System::Windows::Forms::Label());
			this->label189 = (gcnew System::Windows::Forms::Label());
			this->label175 = (gcnew System::Windows::Forms::Label());
			this->label184 = (gcnew System::Windows::Forms::Label());
			this->label170 = (gcnew System::Windows::Forms::Label());
			this->label179 = (gcnew System::Windows::Forms::Label());
			this->label174 = (gcnew System::Windows::Forms::Label());
			this->label169 = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->pictureBox84 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox85 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox86 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox87 = (gcnew System::Windows::Forms::PictureBox());
			this->label166 = (gcnew System::Windows::Forms::Label());
			this->label167 = (gcnew System::Windows::Forms::Label());
			this->pictureBox88 = (gcnew System::Windows::Forms::PictureBox());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->label165 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->label240 = (gcnew System::Windows::Forms::Label());
			this->label219 = (gcnew System::Windows::Forms::Label());
			this->label239 = (gcnew System::Windows::Forms::Label());
			this->label218 = (gcnew System::Windows::Forms::Label());
			this->label235 = (gcnew System::Windows::Forms::Label());
			this->label214 = (gcnew System::Windows::Forms::Label());
			this->label234 = (gcnew System::Windows::Forms::Label());
			this->label213 = (gcnew System::Windows::Forms::Label());
			this->label230 = (gcnew System::Windows::Forms::Label());
			this->label209 = (gcnew System::Windows::Forms::Label());
			this->label229 = (gcnew System::Windows::Forms::Label());
			this->label208 = (gcnew System::Windows::Forms::Label());
			this->label225 = (gcnew System::Windows::Forms::Label());
			this->label204 = (gcnew System::Windows::Forms::Label());
			this->label238 = (gcnew System::Windows::Forms::Label());
			this->label217 = (gcnew System::Windows::Forms::Label());
			this->label224 = (gcnew System::Windows::Forms::Label());
			this->label203 = (gcnew System::Windows::Forms::Label());
			this->label233 = (gcnew System::Windows::Forms::Label());
			this->label212 = (gcnew System::Windows::Forms::Label());
			this->label228 = (gcnew System::Windows::Forms::Label());
			this->label207 = (gcnew System::Windows::Forms::Label());
			this->label237 = (gcnew System::Windows::Forms::Label());
			this->label216 = (gcnew System::Windows::Forms::Label());
			this->label223 = (gcnew System::Windows::Forms::Label());
			this->label202 = (gcnew System::Windows::Forms::Label());
			this->label232 = (gcnew System::Windows::Forms::Label());
			this->label211 = (gcnew System::Windows::Forms::Label());
			this->label241 = (gcnew System::Windows::Forms::Label());
			this->label227 = (gcnew System::Windows::Forms::Label());
			this->label220 = (gcnew System::Windows::Forms::Label());
			this->label236 = (gcnew System::Windows::Forms::Label());
			this->label206 = (gcnew System::Windows::Forms::Label());
			this->label222 = (gcnew System::Windows::Forms::Label());
			this->label215 = (gcnew System::Windows::Forms::Label());
			this->label231 = (gcnew System::Windows::Forms::Label());
			this->label201 = (gcnew System::Windows::Forms::Label());
			this->label226 = (gcnew System::Windows::Forms::Label());
			this->label210 = (gcnew System::Windows::Forms::Label());
			this->label221 = (gcnew System::Windows::Forms::Label());
			this->label205 = (gcnew System::Windows::Forms::Label());
			this->label200 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->pictureBox89 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox90 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox91 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox92 = (gcnew System::Windows::Forms::PictureBox());
			this->label157 = (gcnew System::Windows::Forms::Label());
			this->label155 = (gcnew System::Windows::Forms::Label());
			this->pictureBox93 = (gcnew System::Windows::Forms::PictureBox());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->label156 = (gcnew System::Windows::Forms::Label());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->label250 = (gcnew System::Windows::Forms::Label());
			this->label247 = (gcnew System::Windows::Forms::Label());
			this->label244 = (gcnew System::Windows::Forms::Label());
			this->label249 = (gcnew System::Windows::Forms::Label());
			this->label248 = (gcnew System::Windows::Forms::Label());
			this->label246 = (gcnew System::Windows::Forms::Label());
			this->label245 = (gcnew System::Windows::Forms::Label());
			this->label243 = (gcnew System::Windows::Forms::Label());
			this->label242 = (gcnew System::Windows::Forms::Label());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->label272 = (gcnew System::Windows::Forms::Label());
			this->label273 = (gcnew System::Windows::Forms::Label());
			this->pictureBox98 = (gcnew System::Windows::Forms::PictureBox());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->label271 = (gcnew System::Windows::Forms::Label());
			this->pictureBox94 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox96 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox97 = (gcnew System::Windows::Forms::PictureBox());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->pictureBox95 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox100))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox99))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox73))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox78))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox77))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->BeginInit();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox79))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox80))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox81))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox82))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox83))->BeginInit();
			this->panel14->SuspendLayout();
			this->panel15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox84))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox85))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox86))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox87))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox88))->BeginInit();
			this->panel17->SuspendLayout();
			this->panel18->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox89))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox90))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox91))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox92))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox93))->BeginInit();
			this->panel20->SuspendLayout();
			this->panel21->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox98))->BeginInit();
			this->panel23->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox94))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox96))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox97))->BeginInit();
			this->panel22->SuspendLayout();
			this->panel24->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox95))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox100);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1262, 789);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 13.77391F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(508, 150);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(288, 30);
			this->label14->TabIndex = 11;
			this->label14->Text = L"\"Game Name\"";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(128, 90);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click_1);
			// 
			// button9
			// 
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 8.765216F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button9->Location = System::Drawing::Point(1074, 721);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(132, 43);
			this->button9->TabIndex = 9;
			this->button9->Text = L"NEXT";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 11.26956F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button7->Location = System::Drawing::Point(694, 608);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(478, 59);
			this->button7->TabIndex = 8;
			this->button7->Text = L"Ultimate Tic-Tac-Toe";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 11.26956F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button8->Location = System::Drawing::Point(83, 608);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(478, 59);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Word Tic-Tac-Toe";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 11.26956F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button5->Location = System::Drawing::Point(694, 495);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(478, 59);
			this->button5->TabIndex = 6;
			this->button5->Text = L" 4 x 4 Tic-Tac-Toe";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 11.26956F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button6->Location = System::Drawing::Point(83, 495);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(478, 59);
			this->button6->TabIndex = 5;
			this->button6->Text = L"5 x 5 Tic-Tac-Toe";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 11.26956F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button3->Location = System::Drawing::Point(694, 380);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(478, 59);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Misere Tic-Tac-Toe";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 11.26956F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button4->Location = System::Drawing::Point(83, 380);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(478, 59);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Four-in-a-row\r\n";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 11.26956F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button2->Location = System::Drawing::Point(694, 267);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(478, 59);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Numerical Tic-Tac-Toe";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->AllowDrop = true;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 11.26956F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button1->Location = System::Drawing::Point(83, 267);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(478, 59);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Pyramic Tic-Tac-Toe";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 23.7913F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(409, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(500, 52);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Chosse Game";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// pictureBox100
			// 
			this->pictureBox100->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox100.BackgroundImage")));
			this->pictureBox100->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox100->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox100->Location = System::Drawing::Point(0, 0);
			this->pictureBox100->Name = L"pictureBox100";
			this->pictureBox100->Size = System::Drawing::Size(1262, 789);
			this->pictureBox100->TabIndex = 12;
			this->pictureBox100->TabStop = false;
			this->pictureBox100->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel2->Controls->Add(this->label101);
			this->panel2->Controls->Add(this->label153);
			this->panel2->Controls->Add(this->label100);
			this->panel2->Controls->Add(this->button10);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1262, 789);
			this->panel2->TabIndex = 9;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// label101
			// 
			this->label101->AutoSize = true;
			this->label101->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 6.886956F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label101->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label101->Location = System::Drawing::Point(12, 761);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(227, 15);
			this->label101->TabIndex = 2;
			this->label101->Text = L"Design: Abdallah Gamal";
			// 
			// label153
			// 
			this->label153->AutoSize = true;
			this->label153->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 6.886956F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label153->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->label153->Location = System::Drawing::Point(611, 766);
			this->label153->Name = L"label153";
			this->label153->Size = System::Drawing::Size(96, 15);
			this->label153->TabIndex = 1;
			this->label153->Text = L"2024/2025";
			this->label153->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label100
			// 
			this->label100->AutoSize = true;
			this->label100->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 6.886956F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label100->ForeColor = System::Drawing::Color::White;
			this->label100->Location = System::Drawing::Point(411, 711);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(490, 45);
			this->label100->TabIndex = 1;
			this->label100->Text = L"Author\r\n\r\nAbdallah Gamal,  Eyad Nader,  Abdelmonem Osama";
			this->label100->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 11.26956F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button10->Location = System::Drawing::Point(442, 346);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(415, 60);
			this->button10->TabIndex = 0;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->button11);
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Controls->Add(this->label97);
			this->panel3->Controls->Add(this->label96);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->pictureBox6);
			this->panel3->Controls->Add(this->pictureBox7);
			this->panel3->Controls->Add(this->pictureBox8);
			this->panel3->Controls->Add(this->pictureBox4);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Controls->Add(this->pictureBox5);
			this->panel3->Controls->Add(this->pictureBox9);
			this->panel3->Controls->Add(this->pictureBox10);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->pictureBox99);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1262, 789);
			this->panel3->TabIndex = 11;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// button11
			// 
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 13.77391F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button11->Location = System::Drawing::Point(533, 684);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(238, 54);
			this->button11->TabIndex = 34;
			this->button11->Text = L"GO!";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 15.02609F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(200, 642);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(237, 32);
			this->textBox2->TabIndex = 33;
			this->textBox2->Text = L"PLAYER";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label97
			// 
			this->label97->AutoSize = true;
			this->label97->BackColor = System::Drawing::Color::Transparent;
			this->label97->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 13.77391F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label97->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label97->Location = System::Drawing::Point(865, 566);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(244, 30);
			this->label97->TabIndex = 32;
			this->label97->Text = L"RM Player 2";
			// 
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->BackColor = System::Drawing::Color::Transparent;
			this->label96->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 13.77391F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label96->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label96->Location = System::Drawing::Point(194, 566);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(233, 30);
			this->label96->TabIndex = 32;
			this->label96->Text = L"RM Player 1";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 11.26956F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(149, 596);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(326, 25);
			this->label12->TabIndex = 32;
			this->label12->Text = L"ENTER YOUR NAME";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 11.26956F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(237, 483);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(140, 25);
			this->label13->TabIndex = 31;
			this->label13->Text = L"HUMAN";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 15.02609F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->textBox1->Location = System::Drawing::Point(882, 642);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(237, 32);
			this->textBox1->TabIndex = 30;
			this->textBox1->Text = L"PLAYER";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 11.26956F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label11->Location = System::Drawing::Point(825, 596);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(326, 25);
			this->label11->TabIndex = 29;
			this->label11->Text = L"ENTER YOUR NAME";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 11.26956F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(909, 483);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(140, 25);
			this->label10->TabIndex = 28;
			this->label10->Text = L"HUMAN";
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Location = System::Drawing::Point(461, 303);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(100, 196);
			this->pictureBox6->TabIndex = 17;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm::pictureBox6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->Location = System::Drawing::Point(1119, 303);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(100, 196);
			this->pictureBox7->TabIndex = 20;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->Location = System::Drawing::Point(725, 303);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(100, 196);
			this->pictureBox8->TabIndex = 19;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MyForm::pictureBox8_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(461, 303);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(100, 196);
			this->pictureBox4->TabIndex = 15;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(67, 303);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 196);
			this->pictureBox3->TabIndex = 14;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 21.91304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label3->Location = System::Drawing::Point(855, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(264, 48);
			this->label3->TabIndex = 13;
			this->label3->Text = L"PLAYER";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 21.91304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(163, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(264, 48);
			this->label2->TabIndex = 12;
			this->label2->Text = L"PLAYER";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(128, 90);
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Location = System::Drawing::Point(67, 303);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(100, 196);
			this->pictureBox5->TabIndex = 16;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->Location = System::Drawing::Point(725, 303);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(100, 196);
			this->pictureBox9->TabIndex = 22;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.BackgroundImage")));
			this->pictureBox10->Location = System::Drawing::Point(1119, 303);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(100, 196);
			this->pictureBox10->TabIndex = 23;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &MyForm::pictureBox10_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 60.10435F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label5->Location = System::Drawing::Point(860, 334);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(229, 132);
			this->label5->TabIndex = 21;
			this->label5->Text = L"AI";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 55.09565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label8->Location = System::Drawing::Point(850, 346);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(269, 120);
			this->label8->TabIndex = 26;
			this->label8->Text = L"HU";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 45.07825F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label9->Location = System::Drawing::Point(846, 346);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(264, 99);
			this->label9->TabIndex = 27;
			this->label9->Text = L"RM";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 60.10435F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(198, 334);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(229, 132);
			this->label4->TabIndex = 18;
			this->label4->Text = L"AI";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 55.09565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(186, 346);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(269, 120);
			this->label6->TabIndex = 24;
			this->label6->Text = L"HU";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 45.07825F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(189, 346);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(264, 99);
			this->label7->TabIndex = 25;
			this->label7->Text = L"RM";
			// 
			// pictureBox99
			// 
			this->pictureBox99->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox99.BackgroundImage")));
			this->pictureBox99->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox99->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox99->Location = System::Drawing::Point(0, 0);
			this->pictureBox99->Name = L"pictureBox99";
			this->pictureBox99->Size = System::Drawing::Size(1262, 789);
			this->pictureBox99->TabIndex = 35;
			this->pictureBox99->TabStop = false;
			this->pictureBox99->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox99_Paint);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel4->Controls->Add(this->pictureBox67);
			this->panel4->Controls->Add(this->button12);
			this->panel4->Controls->Add(this->label99);
			this->panel4->Controls->Add(this->label98);
			this->panel4->Controls->Add(this->label95);
			this->panel4->Controls->Add(this->label68);
			this->panel4->Controls->Add(this->label94);
			this->panel4->Controls->Add(this->label67);
			this->panel4->Controls->Add(this->label41);
			this->panel4->Controls->Add(this->label93);
			this->panel4->Controls->Add(this->label66);
			this->panel4->Controls->Add(this->label32);
			this->panel4->Controls->Add(this->label92);
			this->panel4->Controls->Add(this->label65);
			this->panel4->Controls->Add(this->label40);
			this->panel4->Controls->Add(this->label91);
			this->panel4->Controls->Add(this->label64);
			this->panel4->Controls->Add(this->label90);
			this->panel4->Controls->Add(this->label31);
			this->panel4->Controls->Add(this->label63);
			this->panel4->Controls->Add(this->label89);
			this->panel4->Controls->Add(this->label23);
			this->panel4->Controls->Add(this->label62);
			this->panel4->Controls->Add(this->label88);
			this->panel4->Controls->Add(this->label39);
			this->panel4->Controls->Add(this->label61);
			this->panel4->Controls->Add(this->label87);
			this->panel4->Controls->Add(this->label30);
			this->panel4->Controls->Add(this->label60);
			this->panel4->Controls->Add(this->label86);
			this->panel4->Controls->Add(this->label22);
			this->panel4->Controls->Add(this->label59);
			this->panel4->Controls->Add(this->label85);
			this->panel4->Controls->Add(this->label38);
			this->panel4->Controls->Add(this->label58);
			this->panel4->Controls->Add(this->label84);
			this->panel4->Controls->Add(this->label29);
			this->panel4->Controls->Add(this->label57);
			this->panel4->Controls->Add(this->label83);
			this->panel4->Controls->Add(this->label21);
			this->panel4->Controls->Add(this->label56);
			this->panel4->Controls->Add(this->label82);
			this->panel4->Controls->Add(this->label37);
			this->panel4->Controls->Add(this->label55);
			this->panel4->Controls->Add(this->label81);
			this->panel4->Controls->Add(this->label28);
			this->panel4->Controls->Add(this->label54);
			this->panel4->Controls->Add(this->label80);
			this->panel4->Controls->Add(this->label20);
			this->panel4->Controls->Add(this->label53);
			this->panel4->Controls->Add(this->label79);
			this->panel4->Controls->Add(this->label36);
			this->panel4->Controls->Add(this->label52);
			this->panel4->Controls->Add(this->label78);
			this->panel4->Controls->Add(this->label27);
			this->panel4->Controls->Add(this->label51);
			this->panel4->Controls->Add(this->label77);
			this->panel4->Controls->Add(this->label19);
			this->panel4->Controls->Add(this->label50);
			this->panel4->Controls->Add(this->label76);
			this->panel4->Controls->Add(this->label35);
			this->panel4->Controls->Add(this->label49);
			this->panel4->Controls->Add(this->label75);
			this->panel4->Controls->Add(this->label26);
			this->panel4->Controls->Add(this->label48);
			this->panel4->Controls->Add(this->label74);
			this->panel4->Controls->Add(this->label34);
			this->panel4->Controls->Add(this->label47);
			this->panel4->Controls->Add(this->label73);
			this->panel4->Controls->Add(this->label18);
			this->panel4->Controls->Add(this->label46);
			this->panel4->Controls->Add(this->label72);
			this->panel4->Controls->Add(this->label25);
			this->panel4->Controls->Add(this->label45);
			this->panel4->Controls->Add(this->label71);
			this->panel4->Controls->Add(this->label33);
			this->panel4->Controls->Add(this->label44);
			this->panel4->Controls->Add(this->label70);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Controls->Add(this->label43);
			this->panel4->Controls->Add(this->label69);
			this->panel4->Controls->Add(this->label24);
			this->panel4->Controls->Add(this->label42);
			this->panel4->Controls->Add(this->label16);
			this->panel4->Controls->Add(this->label15);
			this->panel4->Controls->Add(this->pictureBox11);
			this->panel4->Controls->Add(this->button13);
			this->panel4->Controls->Add(this->pictureBox68);
			this->panel4->Controls->Add(this->pictureBox18);
			this->panel4->Controls->Add(this->pictureBox20);
			this->panel4->Controls->Add(this->pictureBox17);
			this->panel4->Controls->Add(this->pictureBox15);
			this->panel4->Controls->Add(this->pictureBox12);
			this->panel4->Controls->Add(this->pictureBox13);
			this->panel4->Controls->Add(this->pictureBox14);
			this->panel4->Controls->Add(this->pictureBox19);
			this->panel4->Controls->Add(this->pictureBox24);
			this->panel4->Controls->Add(this->pictureBox21);
			this->panel4->Controls->Add(this->pictureBox25);
			this->panel4->Controls->Add(this->pictureBox23);
			this->panel4->Controls->Add(this->pictureBox26);
			this->panel4->Controls->Add(this->pictureBox28);
			this->panel4->Controls->Add(this->pictureBox29);
			this->panel4->Controls->Add(this->pictureBox22);
			this->panel4->Controls->Add(this->pictureBox27);
			this->panel4->Controls->Add(this->pictureBox16);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1262, 789);
			this->panel4->TabIndex = 12;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel4_Paint);
			// 
			// pictureBox67
			// 
			this->pictureBox67->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox67.BackgroundImage")));
			this->pictureBox67->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox67->Location = System::Drawing::Point(801, 248);
			this->pictureBox67->Name = L"pictureBox67";
			this->pictureBox67->Size = System::Drawing::Size(382, 306);
			this->pictureBox67->TabIndex = 6;
			this->pictureBox67->TabStop = false;
			// 
			// button12
			// 
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 8.139131F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.Image")));
			this->button12->Location = System::Drawing::Point(834, 670);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(317, 44);
			this->button12->TabIndex = 4;
			this->button12->Text = L"END GAME";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			this->button12->MouseEnter += gcnew System::EventHandler(this, &MyForm::button12_MouseEnter);
			// 
			// label99
			// 
			this->label99->AutoSize = true;
			this->label99->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label99->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label99->Location = System::Drawing::Point(811, 117);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(361, 44);
			this->label99->TabIndex = 3;
			this->label99->Text = L"PLAYERplay";
			this->label99->TextChanged += gcnew System::EventHandler(this, &MyForm::label99_TextChanged);
			// 
			// label98
			// 
			this->label98->AutoSize = true;
			this->label98->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label98->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label98->Location = System::Drawing::Point(811, 57);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(361, 44);
			this->label98->TabIndex = 3;
			this->label98->Text = L"PLAYERplay";
			this->label98->TextChanged += gcnew System::EventHandler(this, &MyForm::label98_TextChanged);
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->BackColor = System::Drawing::Color::Transparent;
			this->label95->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label95->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label95->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label95->Location = System::Drawing::Point(638, 653);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(63, 44);
			this->label95->TabIndex = 2;
			this->label95->Text = L"X";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->BackColor = System::Drawing::Color::Transparent;
			this->label68->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label68->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label68->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label68->Location = System::Drawing::Point(638, 452);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(63, 44);
			this->label68->TabIndex = 2;
			this->label68->Text = L"X";
			// 
			// label94
			// 
			this->label94->AutoSize = true;
			this->label94->BackColor = System::Drawing::Color::Transparent;
			this->label94->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label94->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label94->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label94->Location = System::Drawing::Point(569, 653);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(63, 44);
			this->label94->TabIndex = 2;
			this->label94->Text = L"X";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->BackColor = System::Drawing::Color::Transparent;
			this->label67->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label67->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label67->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label67->Location = System::Drawing::Point(569, 452);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(63, 44);
			this->label67->TabIndex = 2;
			this->label67->Text = L"X";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::Transparent;
			this->label41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label41->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(638, 251);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(63, 44);
			this->label41->TabIndex = 2;
			this->label41->Text = L"X";
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->BackColor = System::Drawing::Color::Transparent;
			this->label93->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label93->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label93->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label93->Location = System::Drawing::Point(502, 654);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(63, 44);
			this->label93->TabIndex = 2;
			this->label93->Text = L"X";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->BackColor = System::Drawing::Color::Transparent;
			this->label66->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label66->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label66->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label66->Location = System::Drawing::Point(502, 452);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(63, 44);
			this->label66->TabIndex = 2;
			this->label66->Text = L"X";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::Transparent;
			this->label32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label32->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(638, 183);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(63, 44);
			this->label32->TabIndex = 2;
			this->label32->Text = L"X";
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->BackColor = System::Drawing::Color::Transparent;
			this->label92->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label92->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label92->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label92->Location = System::Drawing::Point(433, 653);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(63, 44);
			this->label92->TabIndex = 2;
			this->label92->Text = L"X";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->BackColor = System::Drawing::Color::Transparent;
			this->label65->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label65->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label65->Location = System::Drawing::Point(433, 452);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(63, 44);
			this->label65->TabIndex = 2;
			this->label65->Text = L"X";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::Color::Transparent;
			this->label40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label40->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(569, 251);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(63, 44);
			this->label40->TabIndex = 2;
			this->label40->Text = L"X";
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->BackColor = System::Drawing::Color::Transparent;
			this->label91->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label91->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label91->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label91->Location = System::Drawing::Point(367, 653);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(63, 44);
			this->label91->TabIndex = 2;
			this->label91->Text = L"X";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->BackColor = System::Drawing::Color::Transparent;
			this->label64->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label64->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label64->Location = System::Drawing::Point(367, 452);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(63, 44);
			this->label64->TabIndex = 2;
			this->label64->Text = L"X";
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->BackColor = System::Drawing::Color::Transparent;
			this->label90->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label90->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label90->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label90->Location = System::Drawing::Point(300, 653);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(63, 44);
			this->label90->TabIndex = 2;
			this->label90->Text = L"X";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::Transparent;
			this->label31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label31->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(569, 183);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(63, 44);
			this->label31->TabIndex = 2;
			this->label31->Text = L"X";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->BackColor = System::Drawing::Color::Transparent;
			this->label63->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label63->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label63->Location = System::Drawing::Point(300, 452);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(63, 44);
			this->label63->TabIndex = 2;
			this->label63->Text = L"X";
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->BackColor = System::Drawing::Color::Transparent;
			this->label89->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label89->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label89->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label89->Location = System::Drawing::Point(231, 653);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(63, 44);
			this->label89->TabIndex = 2;
			this->label89->Text = L"X";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label23->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(638, 119);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(63, 44);
			this->label23->TabIndex = 2;
			this->label23->Text = L"X";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->BackColor = System::Drawing::Color::Transparent;
			this->label62->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label62->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label62->Location = System::Drawing::Point(231, 452);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(63, 44);
			this->label62->TabIndex = 2;
			this->label62->Text = L"X";
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->BackColor = System::Drawing::Color::Transparent;
			this->label88->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label88->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label88->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label88->Location = System::Drawing::Point(164, 653);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(63, 44);
			this->label88->TabIndex = 2;
			this->label88->Text = L"X";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::Transparent;
			this->label39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label39->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(502, 251);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(63, 44);
			this->label39->TabIndex = 2;
			this->label39->Text = L"X";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->BackColor = System::Drawing::Color::Transparent;
			this->label61->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label61->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label61->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label61->Location = System::Drawing::Point(163, 452);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(63, 44);
			this->label61->TabIndex = 2;
			this->label61->Text = L"X";
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->BackColor = System::Drawing::Color::Transparent;
			this->label87->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label87->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label87->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label87->Location = System::Drawing::Point(93, 653);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(63, 44);
			this->label87->TabIndex = 2;
			this->label87->Text = L"X";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label30->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(502, 183);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(63, 44);
			this->label30->TabIndex = 2;
			this->label30->Text = L"X";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->BackColor = System::Drawing::Color::Transparent;
			this->label60->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label60->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label60->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label60->Location = System::Drawing::Point(94, 452);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(63, 44);
			this->label60->TabIndex = 2;
			this->label60->Text = L"X";
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->BackColor = System::Drawing::Color::Transparent;
			this->label86->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label86->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label86->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label86->Location = System::Drawing::Point(638, 585);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(63, 44);
			this->label86->TabIndex = 2;
			this->label86->Text = L"X";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label22->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(569, 119);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(63, 44);
			this->label22->TabIndex = 2;
			this->label22->Text = L"X";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->BackColor = System::Drawing::Color::Transparent;
			this->label59->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label59->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label59->Location = System::Drawing::Point(638, 384);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(63, 44);
			this->label59->TabIndex = 2;
			this->label59->Text = L"X";
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->BackColor = System::Drawing::Color::Transparent;
			this->label85->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label85->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label85->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label85->Location = System::Drawing::Point(569, 585);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(63, 44);
			this->label85->TabIndex = 2;
			this->label85->Text = L"X";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::Transparent;
			this->label38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label38->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(433, 251);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(63, 44);
			this->label38->TabIndex = 2;
			this->label38->Text = L"X";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->BackColor = System::Drawing::Color::Transparent;
			this->label58->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label58->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label58->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label58->Location = System::Drawing::Point(569, 385);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(63, 44);
			this->label58->TabIndex = 2;
			this->label58->Text = L"X";
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->BackColor = System::Drawing::Color::Transparent;
			this->label84->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label84->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label84->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label84->Location = System::Drawing::Point(502, 585);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(63, 44);
			this->label84->TabIndex = 2;
			this->label84->Text = L"X";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::Transparent;
			this->label29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label29->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(433, 183);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(63, 44);
			this->label29->TabIndex = 2;
			this->label29->Text = L"X";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->BackColor = System::Drawing::Color::Transparent;
			this->label57->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label57->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label57->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label57->Location = System::Drawing::Point(502, 384);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(63, 44);
			this->label57->TabIndex = 2;
			this->label57->Text = L"X";
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->BackColor = System::Drawing::Color::Transparent;
			this->label83->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label83->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label83->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label83->Location = System::Drawing::Point(433, 585);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(63, 44);
			this->label83->TabIndex = 2;
			this->label83->Text = L"X";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label21->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(502, 119);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(63, 44);
			this->label21->TabIndex = 2;
			this->label21->Text = L"X";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->BackColor = System::Drawing::Color::Transparent;
			this->label56->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label56->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label56->Location = System::Drawing::Point(433, 384);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(63, 44);
			this->label56->TabIndex = 2;
			this->label56->Text = L"X";
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->BackColor = System::Drawing::Color::Transparent;
			this->label82->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label82->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label82->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label82->Location = System::Drawing::Point(367, 585);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(63, 44);
			this->label82->TabIndex = 2;
			this->label82->Text = L"X";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::Transparent;
			this->label37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label37->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(367, 251);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(63, 44);
			this->label37->TabIndex = 2;
			this->label37->Text = L"X";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->BackColor = System::Drawing::Color::Transparent;
			this->label55->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label55->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label55->Location = System::Drawing::Point(367, 384);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(63, 44);
			this->label55->TabIndex = 2;
			this->label55->Text = L"X";
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->BackColor = System::Drawing::Color::Transparent;
			this->label81->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label81->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label81->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label81->Location = System::Drawing::Point(300, 585);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(63, 44);
			this->label81->TabIndex = 2;
			this->label81->Text = L"X";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label28->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(367, 183);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(63, 44);
			this->label28->TabIndex = 2;
			this->label28->Text = L"X";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->BackColor = System::Drawing::Color::Transparent;
			this->label54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label54->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label54->Location = System::Drawing::Point(300, 385);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(63, 44);
			this->label54->TabIndex = 2;
			this->label54->Text = L"X";
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->BackColor = System::Drawing::Color::Transparent;
			this->label80->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label80->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label80->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label80->Location = System::Drawing::Point(231, 585);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(63, 44);
			this->label80->TabIndex = 2;
			this->label80->Text = L"X";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label20->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(433, 119);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(63, 44);
			this->label20->TabIndex = 2;
			this->label20->Text = L"X";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->BackColor = System::Drawing::Color::Transparent;
			this->label53->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label53->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label53->Location = System::Drawing::Point(231, 385);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(63, 44);
			this->label53->TabIndex = 2;
			this->label53->Text = L"X";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->BackColor = System::Drawing::Color::Transparent;
			this->label79->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label79->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label79->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label79->Location = System::Drawing::Point(164, 585);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(63, 44);
			this->label79->TabIndex = 2;
			this->label79->Text = L"X";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::Transparent;
			this->label36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label36->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(300, 251);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(63, 44);
			this->label36->TabIndex = 2;
			this->label36->Text = L"X";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->BackColor = System::Drawing::Color::Transparent;
			this->label52->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label52->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label52->Location = System::Drawing::Point(164, 384);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(63, 44);
			this->label52->TabIndex = 2;
			this->label52->Text = L"X";
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->BackColor = System::Drawing::Color::Transparent;
			this->label78->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label78->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label78->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label78->Location = System::Drawing::Point(94, 585);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(63, 44);
			this->label78->TabIndex = 2;
			this->label78->Text = L"X";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label27->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(300, 183);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(63, 44);
			this->label27->TabIndex = 2;
			this->label27->Text = L"X";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->BackColor = System::Drawing::Color::Transparent;
			this->label51->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label51->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(93, 384);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(63, 44);
			this->label51->TabIndex = 2;
			this->label51->Text = L"X";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->BackColor = System::Drawing::Color::Transparent;
			this->label77->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label77->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label77->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label77->Location = System::Drawing::Point(638, 522);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(63, 44);
			this->label77->TabIndex = 2;
			this->label77->Text = L"X";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label19->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(367, 119);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(63, 44);
			this->label19->TabIndex = 2;
			this->label19->Text = L"X";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->BackColor = System::Drawing::Color::Transparent;
			this->label50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label50->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label50->Location = System::Drawing::Point(638, 320);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(63, 44);
			this->label50->TabIndex = 2;
			this->label50->Text = L"X";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->BackColor = System::Drawing::Color::Transparent;
			this->label76->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label76->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label76->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label76->Location = System::Drawing::Point(569, 522);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(63, 44);
			this->label76->TabIndex = 2;
			this->label76->Text = L"X";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Transparent;
			this->label35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label35->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(231, 251);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(63, 44);
			this->label35->TabIndex = 2;
			this->label35->Text = L"X";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->BackColor = System::Drawing::Color::Transparent;
			this->label49->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label49->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label49->Location = System::Drawing::Point(569, 320);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(63, 44);
			this->label49->TabIndex = 2;
			this->label49->Text = L"X";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->BackColor = System::Drawing::Color::Transparent;
			this->label75->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label75->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label75->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label75->Location = System::Drawing::Point(502, 522);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(63, 44);
			this->label75->TabIndex = 2;
			this->label75->Text = L"X";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label26->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(231, 183);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(63, 44);
			this->label26->TabIndex = 2;
			this->label26->Text = L"X";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->BackColor = System::Drawing::Color::Transparent;
			this->label48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label48->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label48->Location = System::Drawing::Point(502, 321);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(63, 44);
			this->label48->TabIndex = 2;
			this->label48->Text = L"X";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->BackColor = System::Drawing::Color::Transparent;
			this->label74->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label74->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label74->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label74->Location = System::Drawing::Point(433, 522);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(63, 44);
			this->label74->TabIndex = 2;
			this->label74->Text = L"X";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::Transparent;
			this->label34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label34->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(164, 251);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(63, 44);
			this->label34->TabIndex = 2;
			this->label34->Text = L"X";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->BackColor = System::Drawing::Color::Transparent;
			this->label47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label47->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(434, 321);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(63, 44);
			this->label47->TabIndex = 2;
			this->label47->Text = L"X";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->BackColor = System::Drawing::Color::Transparent;
			this->label73->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label73->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label73->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label73->Location = System::Drawing::Point(367, 522);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(63, 44);
			this->label73->TabIndex = 1;
			this->label73->Text = L"X";
			this->label73->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label18->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(300, 119);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(63, 44);
			this->label18->TabIndex = 2;
			this->label18->Text = L"X";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->BackColor = System::Drawing::Color::Transparent;
			this->label46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label46->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(367, 321);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(63, 44);
			this->label46->TabIndex = 1;
			this->label46->Text = L"X";
			this->label46->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->BackColor = System::Drawing::Color::Transparent;
			this->label72->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label72->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label72->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label72->Location = System::Drawing::Point(298, 522);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(63, 44);
			this->label72->TabIndex = 2;
			this->label72->Text = L"X";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label25->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(164, 183);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(63, 44);
			this->label25->TabIndex = 2;
			this->label25->Text = L"X";
			this->label25->Click += gcnew System::EventHandler(this, &MyForm::label25_Click);
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->BackColor = System::Drawing::Color::Transparent;
			this->label45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label45->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(300, 321);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(63, 44);
			this->label45->TabIndex = 2;
			this->label45->Text = L"X";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->BackColor = System::Drawing::Color::Transparent;
			this->label71->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label71->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label71->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label71->Location = System::Drawing::Point(231, 522);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(63, 44);
			this->label71->TabIndex = 1;
			this->label71->Text = L"X";
			this->label71->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::Transparent;
			this->label33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label33->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(94, 251);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(63, 44);
			this->label33->TabIndex = 1;
			this->label33->Text = L"X";
			this->label33->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->BackColor = System::Drawing::Color::Transparent;
			this->label44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label44->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(231, 321);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(63, 44);
			this->label44->TabIndex = 1;
			this->label44->Text = L"X";
			this->label44->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->BackColor = System::Drawing::Color::Transparent;
			this->label70->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label70->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label70->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label70->Location = System::Drawing::Point(164, 522);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(63, 44);
			this->label70->TabIndex = 2;
			this->label70->Text = L"X";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label17->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(231, 119);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(63, 44);
			this->label17->TabIndex = 2;
			this->label17->Text = L"X";
			this->label17->Click += gcnew System::EventHandler(this, &MyForm::label17_Click);
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::Color::Transparent;
			this->label43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label43->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(164, 321);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(63, 44);
			this->label43->TabIndex = 2;
			this->label43->Text = L"X";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->BackColor = System::Drawing::Color::Transparent;
			this->label69->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label69->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label69->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label69->Location = System::Drawing::Point(94, 522);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(63, 44);
			this->label69->TabIndex = 1;
			this->label69->Text = L"X";
			this->label69->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label24->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(94, 183);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(63, 44);
			this->label24->TabIndex = 1;
			this->label24->Text = L"X";
			this->label24->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->BackColor = System::Drawing::Color::Transparent;
			this->label42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label42->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(94, 321);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(63, 44);
			this->label42->TabIndex = 1;
			this->label42->Text = L"X";
			this->label42->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label16->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(164, 119);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(63, 44);
			this->label16->TabIndex = 2;
			this->label16->Text = L"X";
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label15->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(94, 119);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(63, 44);
			this->label15->TabIndex = 1;
			this->label15->Text = L"X";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.BackgroundImage")));
			this->pictureBox11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox11->Location = System::Drawing::Point(57, 89);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(683, 631);
			this->pictureBox11->TabIndex = 0;
			this->pictureBox11->TabStop = false;
			// 
			// button13
			// 
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 8.139131F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->Location = System::Drawing::Point(834, 671);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(317, 44);
			this->button13->TabIndex = 4;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			this->button13->MouseEnter += gcnew System::EventHandler(this, &MyForm::button12_MouseEnter);
			this->button13->MouseLeave += gcnew System::EventHandler(this, &MyForm::button13_MouseLeave);
			// 
			// pictureBox68
			// 
			this->pictureBox68->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox68.BackgroundImage")));
			this->pictureBox68->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox68->Location = System::Drawing::Point(801, 248);
			this->pictureBox68->Name = L"pictureBox68";
			this->pictureBox68->Size = System::Drawing::Size(382, 306);
			this->pictureBox68->TabIndex = 6;
			this->pictureBox68->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(129, 547);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(131, 131);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox18->TabIndex = 5;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(331, 546);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(131, 131);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox20->TabIndex = 5;
			this->pictureBox20->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(331, 346);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(131, 131);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox17->TabIndex = 5;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(129, 346);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(131, 131);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 5;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(129, 145);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(131, 131);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 5;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(333, 145);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(131, 131);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 5;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &MyForm::pictureBox13_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(537, 145);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(131, 131);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 5;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(537, 546);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(131, 131);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox19->TabIndex = 5;
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(537, 346);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(131, 131);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox24->TabIndex = 5;
			this->pictureBox24->TabStop = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(129, 145);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(131, 131);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox21->TabIndex = 5;
			this->pictureBox21->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(129, 547);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(131, 131);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox25->TabIndex = 5;
			this->pictureBox25->TabStop = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(129, 346);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(131, 131);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox23->TabIndex = 5;
			this->pictureBox23->TabStop = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(333, 145);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(131, 131);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox26->TabIndex = 5;
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(331, 346);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(131, 131);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox28->TabIndex = 5;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(331, 547);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(131, 131);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox29->TabIndex = 5;
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(537, 145);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(131, 131);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox22->TabIndex = 5;
			this->pictureBox22->TabStop = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(537, 547);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(131, 131);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox27->TabIndex = 5;
			this->pictureBox27->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(537, 346);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(131, 131);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox16->TabIndex = 5;
			this->pictureBox16->TabStop = false;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel6->Controls->Add(this->label121);
			this->panel6->Location = System::Drawing::Point(0, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1262, 147);
			this->panel6->TabIndex = 0;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel6_Paint);
			// 
			// label121
			// 
			this->label121->AutoSize = true;
			this->label121->BackColor = System::Drawing::Color::Transparent;
			this->label121->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label121->ForeColor = System::Drawing::Color::White;
			this->label121->Location = System::Drawing::Point(487, 39);
			this->label121->Name = L"label121";
			this->label121->Size = System::Drawing::Size(335, 79);
			this->label121->TabIndex = 0;
			this->label121->Text = L"WON";
			this->label121->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel5->Controls->Add(this->pictureBox63);
			this->panel5->Controls->Add(this->pictureBox66);
			this->panel5->Controls->Add(this->pictureBox65);
			this->panel5->Controls->Add(this->pictureBox64);
			this->panel5->Controls->Add(this->label122);
			this->panel5->Controls->Add(this->label120);
			this->panel5->Controls->Add(this->label119);
			this->panel5->Controls->Add(this->label116);
			this->panel5->Controls->Add(this->label115);
			this->panel5->Controls->Add(this->label112);
			this->panel5->Controls->Add(this->label118);
			this->panel5->Controls->Add(this->label111);
			this->panel5->Controls->Add(this->label114);
			this->panel5->Controls->Add(this->label108);
			this->panel5->Controls->Add(this->label117);
			this->panel5->Controls->Add(this->label110);
			this->panel5->Controls->Add(this->label113);
			this->panel5->Controls->Add(this->label107);
			this->panel5->Controls->Add(this->label109);
			this->panel5->Controls->Add(this->label106);
			this->panel5->Controls->Add(this->label105);
			this->panel5->Controls->Add(this->label104);
			this->panel5->Controls->Add(this->button15);
			this->panel5->Controls->Add(this->button16);
			this->panel5->Controls->Add(this->pictureBox30);
			this->panel5->Controls->Add(this->label103);
			this->panel5->Controls->Add(this->pictureBox58);
			this->panel5->Controls->Add(this->pictureBox57);
			this->panel5->Controls->Add(this->pictureBox54);
			this->panel5->Controls->Add(this->pictureBox53);
			this->panel5->Controls->Add(this->pictureBox50);
			this->panel5->Controls->Add(this->pictureBox62);
			this->panel5->Controls->Add(this->pictureBox61);
			this->panel5->Controls->Add(this->pictureBox60);
			this->panel5->Controls->Add(this->pictureBox59);
			this->panel5->Controls->Add(this->pictureBox56);
			this->panel5->Controls->Add(this->pictureBox55);
			this->panel5->Controls->Add(this->pictureBox52);
			this->panel5->Controls->Add(this->pictureBox51);
			this->panel5->Controls->Add(this->pictureBox49);
			this->panel5->Controls->Add(this->pictureBox48);
			this->panel5->Controls->Add(this->pictureBox47);
			this->panel5->Controls->Add(this->pictureBox46);
			this->panel5->Controls->Add(this->pictureBox45);
			this->panel5->Controls->Add(this->pictureBox42);
			this->panel5->Controls->Add(this->pictureBox41);
			this->panel5->Controls->Add(this->pictureBox38);
			this->panel5->Controls->Add(this->pictureBox44);
			this->panel5->Controls->Add(this->pictureBox37);
			this->panel5->Controls->Add(this->pictureBox40);
			this->panel5->Controls->Add(this->pictureBox34);
			this->panel5->Controls->Add(this->pictureBox43);
			this->panel5->Controls->Add(this->pictureBox36);
			this->panel5->Controls->Add(this->pictureBox33);
			this->panel5->Controls->Add(this->pictureBox35);
			this->panel5->Controls->Add(this->pictureBox32);
			this->panel5->Controls->Add(this->pictureBox31);
			this->panel5->Controls->Add(this->pictureBox39);
			this->panel5->Controls->Add(this->panel7);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1262, 789);
			this->panel5->TabIndex = 12;
			// 
			// pictureBox63
			// 
			this->pictureBox63->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox63.BackgroundImage")));
			this->pictureBox63->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox63->Location = System::Drawing::Point(57, 221);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(200, 435);
			this->pictureBox63->TabIndex = 15;
			this->pictureBox63->TabStop = false;
			// 
			// pictureBox66
			// 
			this->pictureBox66->Location = System::Drawing::Point(985, 183);
			this->pictureBox66->Name = L"pictureBox66";
			this->pictureBox66->Size = System::Drawing::Size(250, 521);
			this->pictureBox66->TabIndex = 16;
			this->pictureBox66->TabStop = false;
			// 
			// pictureBox65
			// 
			this->pictureBox65->Location = System::Drawing::Point(29, 201);
			this->pictureBox65->Name = L"pictureBox65";
			this->pictureBox65->Size = System::Drawing::Size(250, 521);
			this->pictureBox65->TabIndex = 16;
			this->pictureBox65->TabStop = false;
			// 
			// pictureBox64
			// 
			this->pictureBox64->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox64.BackgroundImage")));
			this->pictureBox64->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox64->Location = System::Drawing::Point(1006, 221);
			this->pictureBox64->Name = L"pictureBox64";
			this->pictureBox64->Size = System::Drawing::Size(200, 435);
			this->pictureBox64->TabIndex = 15;
			this->pictureBox64->TabStop = false;
			// 
			// label122
			// 
			this->label122->AutoSize = true;
			this->label122->BackColor = System::Drawing::Color::Transparent;
			this->label122->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label122->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label122->Location = System::Drawing::Point(802, 864);
			this->label122->Name = L"label122";
			this->label122->Size = System::Drawing::Size(116, 79);
			this->label122->TabIndex = 13;
			this->label122->Text = L"O";
			// 
			// label120
			// 
			this->label120->AutoSize = true;
			this->label120->BackColor = System::Drawing::Color::Transparent;
			this->label120->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label120->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label120->Location = System::Drawing::Point(785, 636);
			this->label120->Name = L"label120";
			this->label120->Size = System::Drawing::Size(116, 79);
			this->label120->TabIndex = 13;
			this->label120->Text = L"O";
			// 
			// label119
			// 
			this->label119->AutoSize = true;
			this->label119->BackColor = System::Drawing::Color::Transparent;
			this->label119->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label119->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label119->Location = System::Drawing::Point(644, 636);
			this->label119->Name = L"label119";
			this->label119->Size = System::Drawing::Size(114, 79);
			this->label119->TabIndex = 12;
			this->label119->Text = L"X";
			// 
			// label116
			// 
			this->label116->AutoSize = true;
			this->label116->BackColor = System::Drawing::Color::Transparent;
			this->label116->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label116->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label116->Location = System::Drawing::Point(787, 495);
			this->label116->Name = L"label116";
			this->label116->Size = System::Drawing::Size(116, 79);
			this->label116->TabIndex = 13;
			this->label116->Text = L"O";
			// 
			// label115
			// 
			this->label115->AutoSize = true;
			this->label115->BackColor = System::Drawing::Color::Transparent;
			this->label115->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label115->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label115->Location = System::Drawing::Point(646, 495);
			this->label115->Name = L"label115";
			this->label115->Size = System::Drawing::Size(114, 79);
			this->label115->TabIndex = 12;
			this->label115->Text = L"X";
			// 
			// label112
			// 
			this->label112->AutoSize = true;
			this->label112->BackColor = System::Drawing::Color::Transparent;
			this->label112->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label112->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label112->Location = System::Drawing::Point(785, 355);
			this->label112->Name = L"label112";
			this->label112->Size = System::Drawing::Size(116, 79);
			this->label112->TabIndex = 13;
			this->label112->Text = L"O";
			// 
			// label118
			// 
			this->label118->AutoSize = true;
			this->label118->BackColor = System::Drawing::Color::Transparent;
			this->label118->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label118->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label118->Location = System::Drawing::Point(502, 636);
			this->label118->Name = L"label118";
			this->label118->Size = System::Drawing::Size(116, 79);
			this->label118->TabIndex = 11;
			this->label118->Text = L"O";
			// 
			// label111
			// 
			this->label111->AutoSize = true;
			this->label111->BackColor = System::Drawing::Color::Transparent;
			this->label111->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label111->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label111->Location = System::Drawing::Point(644, 355);
			this->label111->Name = L"label111";
			this->label111->Size = System::Drawing::Size(114, 79);
			this->label111->TabIndex = 12;
			this->label111->Text = L"X";
			// 
			// label114
			// 
			this->label114->AutoSize = true;
			this->label114->BackColor = System::Drawing::Color::Transparent;
			this->label114->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label114->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label114->Location = System::Drawing::Point(504, 495);
			this->label114->Name = L"label114";
			this->label114->Size = System::Drawing::Size(116, 79);
			this->label114->TabIndex = 11;
			this->label114->Text = L"O";
			// 
			// label108
			// 
			this->label108->AutoSize = true;
			this->label108->BackColor = System::Drawing::Color::Transparent;
			this->label108->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label108->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label108->Location = System::Drawing::Point(787, 221);
			this->label108->Name = L"label108";
			this->label108->Size = System::Drawing::Size(114, 79);
			this->label108->TabIndex = 13;
			this->label108->Text = L"X";
			// 
			// label117
			// 
			this->label117->AutoSize = true;
			this->label117->BackColor = System::Drawing::Color::Transparent;
			this->label117->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label117->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label117->Location = System::Drawing::Point(359, 636);
			this->label117->Name = L"label117";
			this->label117->Size = System::Drawing::Size(114, 79);
			this->label117->TabIndex = 10;
			this->label117->Text = L"X";
			// 
			// label110
			// 
			this->label110->AutoSize = true;
			this->label110->BackColor = System::Drawing::Color::Transparent;
			this->label110->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label110->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label110->Location = System::Drawing::Point(502, 355);
			this->label110->Name = L"label110";
			this->label110->Size = System::Drawing::Size(116, 79);
			this->label110->TabIndex = 11;
			this->label110->Text = L"O";
			// 
			// label113
			// 
			this->label113->AutoSize = true;
			this->label113->BackColor = System::Drawing::Color::Transparent;
			this->label113->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label113->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label113->Location = System::Drawing::Point(361, 495);
			this->label113->Name = L"label113";
			this->label113->Size = System::Drawing::Size(114, 79);
			this->label113->TabIndex = 10;
			this->label113->Text = L"X";
			// 
			// label107
			// 
			this->label107->AutoSize = true;
			this->label107->BackColor = System::Drawing::Color::Transparent;
			this->label107->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label107->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label107->Location = System::Drawing::Point(646, 221);
			this->label107->Name = L"label107";
			this->label107->Size = System::Drawing::Size(116, 79);
			this->label107->TabIndex = 12;
			this->label107->Text = L"O";
			// 
			// label109
			// 
			this->label109->AutoSize = true;
			this->label109->BackColor = System::Drawing::Color::Transparent;
			this->label109->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label109->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label109->Location = System::Drawing::Point(359, 355);
			this->label109->Name = L"label109";
			this->label109->Size = System::Drawing::Size(114, 79);
			this->label109->TabIndex = 10;
			this->label109->Text = L"X";
			// 
			// label106
			// 
			this->label106->AutoSize = true;
			this->label106->BackColor = System::Drawing::Color::Transparent;
			this->label106->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label106->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label106->Location = System::Drawing::Point(504, 221);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(114, 79);
			this->label106->TabIndex = 11;
			this->label106->Text = L"X";
			// 
			// label105
			// 
			this->label105->AutoSize = true;
			this->label105->BackColor = System::Drawing::Color::Transparent;
			this->label105->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label105->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label105->Location = System::Drawing::Point(361, 221);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(116, 79);
			this->label105->TabIndex = 10;
			this->label105->Text = L"O";
			// 
			// label104
			// 
			this->label104->AutoSize = true;
			this->label104->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label104->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->label104->Location = System::Drawing::Point(596, 75);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(106, 44);
			this->label104->TabIndex = 9;
			this->label104->Text = L"VS";
			// 
			// button15
			// 
			this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.BackgroundImage")));
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 8.139131F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button15->Location = System::Drawing::Point(975, 720);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(261, 36);
			this->button15->TabIndex = 7;
			this->button15->Text = L"END GAME";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->MouseEnter += gcnew System::EventHandler(this, &MyForm::button15_MouseEnter);
			// 
			// button16
			// 
			this->button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.BackgroundImage")));
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 8.139131F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button16->Location = System::Drawing::Point(974, 719);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(261, 36);
			this->button16->TabIndex = 8;
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			this->button16->MouseLeave += gcnew System::EventHandler(this, &MyForm::button16_MouseLeave);
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.BackgroundImage")));
			this->pictureBox30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox30->Location = System::Drawing::Point(306, 164);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(650, 591);
			this->pictureBox30->TabIndex = 6;
			this->pictureBox30->TabStop = false;
			// 
			// label103
			// 
			this->label103->AutoSize = true;
			this->label103->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label103->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label103->Location = System::Drawing::Point(42, 77);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(361, 44);
			this->label103->TabIndex = 5;
			this->label103->Text = L"PLAYERplay";
			// 
			// pictureBox58
			// 
			this->pictureBox58->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox58.BackgroundImage")));
			this->pictureBox58->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox58->Location = System::Drawing::Point(780, 483);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(129, 99);
			this->pictureBox58->TabIndex = 14;
			this->pictureBox58->TabStop = false;
			// 
			// pictureBox57
			// 
			this->pictureBox57->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox57.BackgroundImage")));
			this->pictureBox57->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox57->Location = System::Drawing::Point(636, 483);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(129, 99);
			this->pictureBox57->TabIndex = 14;
			this->pictureBox57->TabStop = false;
			// 
			// pictureBox54
			// 
			this->pictureBox54->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox54.BackgroundImage")));
			this->pictureBox54->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox54->Location = System::Drawing::Point(780, 346);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(129, 99);
			this->pictureBox54->TabIndex = 14;
			this->pictureBox54->TabStop = false;
			// 
			// pictureBox53
			// 
			this->pictureBox53->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox53.BackgroundImage")));
			this->pictureBox53->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox53->Location = System::Drawing::Point(637, 346);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(129, 99);
			this->pictureBox53->TabIndex = 14;
			this->pictureBox53->TabStop = false;
			// 
			// pictureBox50
			// 
			this->pictureBox50->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox50.BackgroundImage")));
			this->pictureBox50->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox50->Location = System::Drawing::Point(780, 201);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(129, 99);
			this->pictureBox50->TabIndex = 14;
			this->pictureBox50->TabStop = false;
			// 
			// pictureBox62
			// 
			this->pictureBox62->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox62.BackgroundImage")));
			this->pictureBox62->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox62->Location = System::Drawing::Point(780, 624);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(129, 99);
			this->pictureBox62->TabIndex = 14;
			this->pictureBox62->TabStop = false;
			// 
			// pictureBox61
			// 
			this->pictureBox61->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox61.BackgroundImage")));
			this->pictureBox61->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox61->Location = System::Drawing::Point(636, 624);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(129, 99);
			this->pictureBox61->TabIndex = 14;
			this->pictureBox61->TabStop = false;
			// 
			// pictureBox60
			// 
			this->pictureBox60->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox60.BackgroundImage")));
			this->pictureBox60->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox60->Location = System::Drawing::Point(494, 624);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(129, 99);
			this->pictureBox60->TabIndex = 14;
			this->pictureBox60->TabStop = false;
			// 
			// pictureBox59
			// 
			this->pictureBox59->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox59.BackgroundImage")));
			this->pictureBox59->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox59->Location = System::Drawing::Point(348, 624);
			this->pictureBox59->Name = L"pictureBox59";
			this->pictureBox59->Size = System::Drawing::Size(129, 99);
			this->pictureBox59->TabIndex = 14;
			this->pictureBox59->TabStop = false;
			// 
			// pictureBox56
			// 
			this->pictureBox56->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox56.BackgroundImage")));
			this->pictureBox56->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox56->Location = System::Drawing::Point(494, 483);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(129, 99);
			this->pictureBox56->TabIndex = 14;
			this->pictureBox56->TabStop = false;
			// 
			// pictureBox55
			// 
			this->pictureBox55->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox55.BackgroundImage")));
			this->pictureBox55->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox55->Location = System::Drawing::Point(347, 483);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(129, 99);
			this->pictureBox55->TabIndex = 14;
			this->pictureBox55->TabStop = false;
			// 
			// pictureBox52
			// 
			this->pictureBox52->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox52.BackgroundImage")));
			this->pictureBox52->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox52->Location = System::Drawing::Point(494, 346);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(129, 99);
			this->pictureBox52->TabIndex = 14;
			this->pictureBox52->TabStop = false;
			// 
			// pictureBox51
			// 
			this->pictureBox51->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox51.BackgroundImage")));
			this->pictureBox51->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox51->Location = System::Drawing::Point(348, 346);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(129, 99);
			this->pictureBox51->TabIndex = 14;
			this->pictureBox51->TabStop = false;
			// 
			// pictureBox49
			// 
			this->pictureBox49->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox49.BackgroundImage")));
			this->pictureBox49->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox49->Location = System::Drawing::Point(637, 201);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(129, 99);
			this->pictureBox49->TabIndex = 14;
			this->pictureBox49->TabStop = false;
			// 
			// pictureBox48
			// 
			this->pictureBox48->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox48.BackgroundImage")));
			this->pictureBox48->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox48->Location = System::Drawing::Point(495, 201);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(129, 99);
			this->pictureBox48->TabIndex = 14;
			this->pictureBox48->TabStop = false;
			// 
			// pictureBox47
			// 
			this->pictureBox47->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox47.BackgroundImage")));
			this->pictureBox47->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox47->Location = System::Drawing::Point(348, 201);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(129, 99);
			this->pictureBox47->TabIndex = 14;
			this->pictureBox47->TabStop = false;
			// 
			// pictureBox46
			// 
			this->pictureBox46->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox46.BackgroundImage")));
			this->pictureBox46->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox46->Location = System::Drawing::Point(780, 624);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(129, 99);
			this->pictureBox46->TabIndex = 14;
			this->pictureBox46->TabStop = false;
			// 
			// pictureBox45
			// 
			this->pictureBox45->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.BackgroundImage")));
			this->pictureBox45->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox45->Location = System::Drawing::Point(636, 624);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(129, 99);
			this->pictureBox45->TabIndex = 14;
			this->pictureBox45->TabStop = false;
			// 
			// pictureBox42
			// 
			this->pictureBox42->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.BackgroundImage")));
			this->pictureBox42->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox42->Location = System::Drawing::Point(780, 483);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(129, 99);
			this->pictureBox42->TabIndex = 14;
			this->pictureBox42->TabStop = false;
			// 
			// pictureBox41
			// 
			this->pictureBox41->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.BackgroundImage")));
			this->pictureBox41->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox41->Location = System::Drawing::Point(636, 483);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(129, 99);
			this->pictureBox41->TabIndex = 14;
			this->pictureBox41->TabStop = false;
			// 
			// pictureBox38
			// 
			this->pictureBox38->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.BackgroundImage")));
			this->pictureBox38->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox38->Location = System::Drawing::Point(780, 346);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(129, 99);
			this->pictureBox38->TabIndex = 14;
			this->pictureBox38->TabStop = false;
			// 
			// pictureBox44
			// 
			this->pictureBox44->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.BackgroundImage")));
			this->pictureBox44->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox44->Location = System::Drawing::Point(494, 624);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(129, 99);
			this->pictureBox44->TabIndex = 14;
			this->pictureBox44->TabStop = false;
			// 
			// pictureBox37
			// 
			this->pictureBox37->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.BackgroundImage")));
			this->pictureBox37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox37->Location = System::Drawing::Point(636, 346);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(129, 99);
			this->pictureBox37->TabIndex = 14;
			this->pictureBox37->TabStop = false;
			// 
			// pictureBox40
			// 
			this->pictureBox40->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.BackgroundImage")));
			this->pictureBox40->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox40->Location = System::Drawing::Point(494, 483);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(129, 99);
			this->pictureBox40->TabIndex = 14;
			this->pictureBox40->TabStop = false;
			// 
			// pictureBox34
			// 
			this->pictureBox34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.BackgroundImage")));
			this->pictureBox34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox34->Location = System::Drawing::Point(781, 201);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(129, 99);
			this->pictureBox34->TabIndex = 14;
			this->pictureBox34->TabStop = false;
			// 
			// pictureBox43
			// 
			this->pictureBox43->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox43.BackgroundImage")));
			this->pictureBox43->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox43->Location = System::Drawing::Point(347, 624);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(129, 99);
			this->pictureBox43->TabIndex = 14;
			this->pictureBox43->TabStop = false;
			// 
			// pictureBox36
			// 
			this->pictureBox36->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.BackgroundImage")));
			this->pictureBox36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox36->Location = System::Drawing::Point(494, 346);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(129, 99);
			this->pictureBox36->TabIndex = 14;
			this->pictureBox36->TabStop = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.BackgroundImage")));
			this->pictureBox33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox33->Location = System::Drawing::Point(637, 201);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(129, 99);
			this->pictureBox33->TabIndex = 14;
			this->pictureBox33->TabStop = false;
			// 
			// pictureBox35
			// 
			this->pictureBox35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.BackgroundImage")));
			this->pictureBox35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox35->Location = System::Drawing::Point(347, 346);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(129, 99);
			this->pictureBox35->TabIndex = 14;
			this->pictureBox35->TabStop = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.BackgroundImage")));
			this->pictureBox32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox32->Location = System::Drawing::Point(495, 201);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(129, 99);
			this->pictureBox32->TabIndex = 14;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.BackgroundImage")));
			this->pictureBox31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox31->Location = System::Drawing::Point(348, 201);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(129, 99);
			this->pictureBox31->TabIndex = 14;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox39
			// 
			this->pictureBox39->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.BackgroundImage")));
			this->pictureBox39->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox39->Location = System::Drawing::Point(347, 483);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(129, 99);
			this->pictureBox39->TabIndex = 14;
			this->pictureBox39->TabStop = false;
			this->pictureBox39->Click += gcnew System::EventHandler(this, &MyForm::pictureBox39_Click);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->label102);
			this->panel7->Location = System::Drawing::Point(830, 46);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(420, 100);
			this->panel7->TabIndex = 17;
			// 
			// label102
			// 
			this->label102->AutoSize = true;
			this->label102->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label102->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label102->Location = System::Drawing::Point(15, 31);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(361, 44);
			this->label102->TabIndex = 4;
			this->label102->Text = L"PLAYERplay";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel8->Controls->Add(this->button17);
			this->panel8->Controls->Add(this->label140);
			this->panel8->Controls->Add(this->label133);
			this->panel8->Controls->Add(this->label139);
			this->panel8->Controls->Add(this->label132);
			this->panel8->Controls->Add(this->label138);
			this->panel8->Controls->Add(this->label131);
			this->panel8->Controls->Add(this->label129);
			this->panel8->Controls->Add(this->label137);
			this->panel8->Controls->Add(this->label136);
			this->panel8->Controls->Add(this->label135);
			this->panel8->Controls->Add(this->label134);
			this->panel8->Controls->Add(this->label130);
			this->panel8->Controls->Add(this->label128);
			this->panel8->Controls->Add(this->label127);
			this->panel8->Controls->Add(this->label126);
			this->panel8->Controls->Add(this->label123);
			this->panel8->Controls->Add(this->label124);
			this->panel8->Controls->Add(this->panel9);
			this->panel8->Controls->Add(this->pictureBox72);
			this->panel8->Controls->Add(this->pictureBox73);
			this->panel8->Controls->Add(this->pictureBox70);
			this->panel8->Controls->Add(this->pictureBox71);
			this->panel8->Controls->Add(this->pictureBox69);
			this->panel8->Controls->Add(this->button18);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel8->Location = System::Drawing::Point(0, 0);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(1262, 789);
			this->panel8->TabIndex = 1;
			// 
			// button17
			// 
			this->button17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.BackgroundImage")));
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 8.139131F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button17->Location = System::Drawing::Point(497, 704);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(261, 36);
			this->button17->TabIndex = 8;
			this->button17->Text = L"END GAME";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->MouseEnter += gcnew System::EventHandler(this, &MyForm::button17_MouseEnter);
			// 
			// label140
			// 
			this->label140->AutoSize = true;
			this->label140->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label140->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label140->Location = System::Drawing::Point(831, 497);
			this->label140->Name = L"label140";
			this->label140->Size = System::Drawing::Size(114, 79);
			this->label140->TabIndex = 24;
			this->label140->Text = L"X";
			// 
			// label133
			// 
			this->label133->AutoSize = true;
			this->label133->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label133->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label133->Location = System::Drawing::Point(584, 376);
			this->label133->Name = L"label133";
			this->label133->Size = System::Drawing::Size(114, 79);
			this->label133->TabIndex = 24;
			this->label133->Text = L"X";
			// 
			// label139
			// 
			this->label139->AutoSize = true;
			this->label139->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label139->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label139->Location = System::Drawing::Point(707, 496);
			this->label139->Name = L"label139";
			this->label139->Size = System::Drawing::Size(114, 79);
			this->label139->TabIndex = 24;
			this->label139->Text = L"X";
			// 
			// label132
			// 
			this->label132->AutoSize = true;
			this->label132->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label132->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label132->Location = System::Drawing::Point(450, 374);
			this->label132->Name = L"label132";
			this->label132->Size = System::Drawing::Size(114, 79);
			this->label132->TabIndex = 24;
			this->label132->Text = L"X";
			// 
			// label138
			// 
			this->label138->AutoSize = true;
			this->label138->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label138->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label138->Location = System::Drawing::Point(582, 496);
			this->label138->Name = L"label138";
			this->label138->Size = System::Drawing::Size(114, 79);
			this->label138->TabIndex = 24;
			this->label138->Text = L"X";
			// 
			// label131
			// 
			this->label131->AutoSize = true;
			this->label131->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label131->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label131->Location = System::Drawing::Point(325, 373);
			this->label131->Name = L"label131";
			this->label131->Size = System::Drawing::Size(0, 79);
			this->label131->TabIndex = 24;
			// 
			// label129
			// 
			this->label129->AutoSize = true;
			this->label129->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label129->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label129->Location = System::Drawing::Point(702, 251);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(0, 79);
			this->label129->TabIndex = 24;
			// 
			// label137
			// 
			this->label137->AutoSize = true;
			this->label137->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label137->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label137->Location = System::Drawing::Point(457, 496);
			this->label137->Name = L"label137";
			this->label137->Size = System::Drawing::Size(114, 79);
			this->label137->TabIndex = 24;
			this->label137->Text = L"X";
			// 
			// label136
			// 
			this->label136->AutoSize = true;
			this->label136->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label136->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label136->Location = System::Drawing::Point(325, 496);
			this->label136->Name = L"label136";
			this->label136->Size = System::Drawing::Size(114, 79);
			this->label136->TabIndex = 24;
			this->label136->Text = L"X";
			// 
			// label135
			// 
			this->label135->AutoSize = true;
			this->label135->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label135->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label135->Location = System::Drawing::Point(831, 373);
			this->label135->Name = L"label135";
			this->label135->Size = System::Drawing::Size(0, 79);
			this->label135->TabIndex = 24;
			// 
			// label134
			// 
			this->label134->AutoSize = true;
			this->label134->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label134->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label134->Location = System::Drawing::Point(708, 375);
			this->label134->Name = L"label134";
			this->label134->Size = System::Drawing::Size(114, 79);
			this->label134->TabIndex = 24;
			this->label134->Text = L"X";
			// 
			// label130
			// 
			this->label130->AutoSize = true;
			this->label130->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label130->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label130->Location = System::Drawing::Point(831, 251);
			this->label130->Name = L"label130";
			this->label130->Size = System::Drawing::Size(0, 79);
			this->label130->TabIndex = 24;
			// 
			// label128
			// 
			this->label128->AutoSize = true;
			this->label128->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label128->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label128->Location = System::Drawing::Point(582, 252);
			this->label128->Name = L"label128";
			this->label128->Size = System::Drawing::Size(114, 79);
			this->label128->TabIndex = 24;
			this->label128->Text = L"X";
			// 
			// label127
			// 
			this->label127->AutoSize = true;
			this->label127->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label127->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label127->Location = System::Drawing::Point(447, 251);
			this->label127->Name = L"label127";
			this->label127->Size = System::Drawing::Size(0, 79);
			this->label127->TabIndex = 24;
			// 
			// label126
			// 
			this->label126->AutoSize = true;
			this->label126->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 36.31304F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label126->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label126->Location = System::Drawing::Point(323, 251);
			this->label126->Name = L"label126";
			this->label126->Size = System::Drawing::Size(0, 79);
			this->label126->TabIndex = 24;
			// 
			// label123
			// 
			this->label123->AutoSize = true;
			this->label123->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label123->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->label123->Location = System::Drawing::Point(592, 70);
			this->label123->Name = L"label123";
			this->label123->Size = System::Drawing::Size(106, 44);
			this->label123->TabIndex = 22;
			this->label123->Text = L"VS";
			// 
			// label124
			// 
			this->label124->AutoSize = true;
			this->label124->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label124->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label124->Location = System::Drawing::Point(31, 70);
			this->label124->Name = L"label124";
			this->label124->Size = System::Drawing::Size(361, 44);
			this->label124->TabIndex = 21;
			this->label124->Text = L"PLAYERplay";
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->label125);
			this->panel9->Location = System::Drawing::Point(819, 39);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(420, 100);
			this->panel9->TabIndex = 23;
			// 
			// label125
			// 
			this->label125->AutoSize = true;
			this->label125->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label125->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label125->Location = System::Drawing::Point(43, 31);
			this->label125->Name = L"label125";
			this->label125->Size = System::Drawing::Size(361, 44);
			this->label125->TabIndex = 4;
			this->label125->Text = L"PLAYERplay";
			// 
			// pictureBox72
			// 
			this->pictureBox72->Location = System::Drawing::Point(985, 182);
			this->pictureBox72->Name = L"pictureBox72";
			this->pictureBox72->Size = System::Drawing::Size(250, 521);
			this->pictureBox72->TabIndex = 20;
			this->pictureBox72->TabStop = false;
			// 
			// pictureBox73
			// 
			this->pictureBox73->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox73.BackgroundImage")));
			this->pictureBox73->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox73->Location = System::Drawing::Point(1006, 220);
			this->pictureBox73->Name = L"pictureBox73";
			this->pictureBox73->Size = System::Drawing::Size(200, 435);
			this->pictureBox73->TabIndex = 19;
			this->pictureBox73->TabStop = false;
			// 
			// pictureBox70
			// 
			this->pictureBox70->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox70.BackgroundImage")));
			this->pictureBox70->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox70->Location = System::Drawing::Point(50, 202);
			this->pictureBox70->Name = L"pictureBox70";
			this->pictureBox70->Size = System::Drawing::Size(200, 435);
			this->pictureBox70->TabIndex = 17;
			this->pictureBox70->TabStop = false;
			// 
			// pictureBox71
			// 
			this->pictureBox71->Location = System::Drawing::Point(22, 182);
			this->pictureBox71->Name = L"pictureBox71";
			this->pictureBox71->Size = System::Drawing::Size(250, 521);
			this->pictureBox71->TabIndex = 18;
			this->pictureBox71->TabStop = false;
			// 
			// pictureBox69
			// 
			this->pictureBox69->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox69.BackgroundImage")));
			this->pictureBox69->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox69->Location = System::Drawing::Point(305, 215);
			this->pictureBox69->Name = L"pictureBox69";
			this->pictureBox69->Size = System::Drawing::Size(664, 378);
			this->pictureBox69->TabIndex = 0;
			this->pictureBox69->TabStop = false;
			// 
			// button18
			// 
			this->button18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.BackgroundImage")));
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 8.139131F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button18->Location = System::Drawing::Point(497, 704);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(261, 36);
			this->button18->TabIndex = 8;
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			this->button18->MouseLeave += gcnew System::EventHandler(this, &MyForm::button18_MouseLeave);
			// 
			// pictureBox74
			// 
			this->pictureBox74->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox74.BackgroundImage")));
			this->pictureBox74->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox74->Location = System::Drawing::Point(331, 145);
			this->pictureBox74->Name = L"pictureBox74";
			this->pictureBox74->Size = System::Drawing::Size(625, 557);
			this->pictureBox74->TabIndex = 0;
			this->pictureBox74->TabStop = false;
			// 
			// label143
			// 
			this->label143->AutoSize = true;
			this->label143->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label143->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label143->Location = System::Drawing::Point(31, 57);
			this->label143->Name = L"label143";
			this->label143->Size = System::Drawing::Size(361, 44);
			this->label143->TabIndex = 28;
			this->label143->Text = L"PLAYERplay";
			// 
			// label142
			// 
			this->label142->AutoSize = true;
			this->label142->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label142->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->label142->Location = System::Drawing::Point(588, 57);
			this->label142->Name = L"label142";
			this->label142->Size = System::Drawing::Size(106, 44);
			this->label142->TabIndex = 29;
			this->label142->Text = L"VS";
			// 
			// pictureBox78
			// 
			this->pictureBox78->Location = System::Drawing::Point(39, 201);
			this->pictureBox78->Name = L"pictureBox78";
			this->pictureBox78->Size = System::Drawing::Size(250, 521);
			this->pictureBox78->TabIndex = 25;
			this->pictureBox78->TabStop = false;
			// 
			// pictureBox77
			// 
			this->pictureBox77->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox77.BackgroundImage")));
			this->pictureBox77->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox77->Location = System::Drawing::Point(67, 221);
			this->pictureBox77->Name = L"pictureBox77";
			this->pictureBox77->Size = System::Drawing::Size(200, 435);
			this->pictureBox77->TabIndex = 24;
			this->pictureBox77->TabStop = false;
			// 
			// pictureBox76
			// 
			this->pictureBox76->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox76.BackgroundImage")));
			this->pictureBox76->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox76->Location = System::Drawing::Point(1006, 240);
			this->pictureBox76->Name = L"pictureBox76";
			this->pictureBox76->Size = System::Drawing::Size(200, 435);
			this->pictureBox76->TabIndex = 26;
			this->pictureBox76->TabStop = false;
			// 
			// pictureBox75
			// 
			this->pictureBox75->Location = System::Drawing::Point(985, 202);
			this->pictureBox75->Name = L"pictureBox75";
			this->pictureBox75->Size = System::Drawing::Size(250, 521);
			this->pictureBox75->TabIndex = 27;
			this->pictureBox75->TabStop = false;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel10->Controls->Add(this->label152);
			this->panel10->Controls->Add(this->label149);
			this->panel10->Controls->Add(this->label151);
			this->panel10->Controls->Add(this->label146);
			this->panel10->Controls->Add(this->label150);
			this->panel10->Controls->Add(this->label148);
			this->panel10->Controls->Add(this->label147);
			this->panel10->Controls->Add(this->label145);
			this->panel10->Controls->Add(this->label144);
			this->panel10->Controls->Add(this->button19);
			this->panel10->Controls->Add(this->button20);
			this->panel10->Controls->Add(this->panel11);
			this->panel10->Controls->Add(this->pictureBox75);
			this->panel10->Controls->Add(this->pictureBox76);
			this->panel10->Controls->Add(this->pictureBox77);
			this->panel10->Controls->Add(this->pictureBox78);
			this->panel10->Controls->Add(this->label142);
			this->panel10->Controls->Add(this->label143);
			this->panel10->Controls->Add(this->pictureBox74);
			this->panel10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel10->Location = System::Drawing::Point(0, 0);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(1262, 789);
			this->panel10->TabIndex = 25;
			// 
			// label152
			// 
			this->label152->AutoSize = true;
			this->label152->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 48.20869F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label152->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label152->Location = System::Drawing::Point(759, 550);
			this->label152->Name = L"label152";
			this->label152->Size = System::Drawing::Size(151, 105);
			this->label152->TabIndex = 33;
			this->label152->Text = L"X";
			// 
			// label149
			// 
			this->label149->AutoSize = true;
			this->label149->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 48.20869F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label149->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label149->Location = System::Drawing::Point(759, 380);
			this->label149->Name = L"label149";
			this->label149->Size = System::Drawing::Size(151, 105);
			this->label149->TabIndex = 33;
			this->label149->Text = L"X";
			// 
			// label151
			// 
			this->label151->AutoSize = true;
			this->label151->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 48.20869F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label151->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label151->Location = System::Drawing::Point(567, 550);
			this->label151->Name = L"label151";
			this->label151->Size = System::Drawing::Size(151, 105);
			this->label151->TabIndex = 33;
			this->label151->Text = L"X";
			// 
			// label146
			// 
			this->label146->AutoSize = true;
			this->label146->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 48.20869F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label146->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label146->Location = System::Drawing::Point(762, 204);
			this->label146->Name = L"label146";
			this->label146->Size = System::Drawing::Size(151, 105);
			this->label146->TabIndex = 33;
			this->label146->Text = L"X";
			// 
			// label150
			// 
			this->label150->AutoSize = true;
			this->label150->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 48.20869F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label150->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label150->Location = System::Drawing::Point(377, 547);
			this->label150->Name = L"label150";
			this->label150->Size = System::Drawing::Size(151, 105);
			this->label150->TabIndex = 33;
			this->label150->Text = L"X";
			// 
			// label148
			// 
			this->label148->AutoSize = true;
			this->label148->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 48.20869F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label148->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label148->Location = System::Drawing::Point(567, 380);
			this->label148->Name = L"label148";
			this->label148->Size = System::Drawing::Size(151, 105);
			this->label148->TabIndex = 33;
			this->label148->Text = L"X";
			// 
			// label147
			// 
			this->label147->AutoSize = true;
			this->label147->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 48.20869F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label147->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label147->Location = System::Drawing::Point(377, 377);
			this->label147->Name = L"label147";
			this->label147->Size = System::Drawing::Size(151, 105);
			this->label147->TabIndex = 33;
			this->label147->Text = L"X";
			// 
			// label145
			// 
			this->label145->AutoSize = true;
			this->label145->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 48.20869F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label145->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label145->Location = System::Drawing::Point(570, 204);
			this->label145->Name = L"label145";
			this->label145->Size = System::Drawing::Size(151, 105);
			this->label145->TabIndex = 33;
			this->label145->Text = L"X";
			// 
			// label144
			// 
			this->label144->AutoSize = true;
			this->label144->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 48.20869F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label144->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label144->Location = System::Drawing::Point(380, 201);
			this->label144->Name = L"label144";
			this->label144->Size = System::Drawing::Size(151, 105);
			this->label144->TabIndex = 33;
			this->label144->Text = L"X";
			// 
			// button19
			// 
			this->button19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.BackgroundImage")));
			this->button19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 8.139131F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button19->Location = System::Drawing::Point(512, 729);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(261, 36);
			this->button19->TabIndex = 31;
			this->button19->Text = L"END GAME";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->MouseEnter += gcnew System::EventHandler(this, &MyForm::button19_MouseEnter);
			// 
			// button20
			// 
			this->button20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.BackgroundImage")));
			this->button20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 8.139131F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button20->Location = System::Drawing::Point(513, 729);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(261, 36);
			this->button20->TabIndex = 32;
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			this->button20->MouseLeave += gcnew System::EventHandler(this, &MyForm::button20_MouseLeave);
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->label141);
			this->panel11->Location = System::Drawing::Point(822, 27);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(420, 100);
			this->panel11->TabIndex = 30;
			// 
			// label141
			// 
			this->label141->AutoSize = true;
			this->label141->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label141->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label141->Location = System::Drawing::Point(43, 31);
			this->label141->Name = L"label141";
			this->label141->Size = System::Drawing::Size(361, 44);
			this->label141->TabIndex = 4;
			this->label141->Text = L"PLAYERplay";
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel12->Controls->Add(this->textBox11);
			this->panel12->Controls->Add(this->textBox10);
			this->panel12->Controls->Add(this->textBox8);
			this->panel12->Controls->Add(this->textBox7);
			this->panel12->Controls->Add(this->textBox9);
			this->panel12->Controls->Add(this->textBox5);
			this->panel12->Controls->Add(this->textBox6);
			this->panel12->Controls->Add(this->textBox4);
			this->panel12->Controls->Add(this->textBox3);
			this->panel12->Controls->Add(this->button21);
			this->panel12->Controls->Add(this->button22);
			this->panel12->Controls->Add(this->pictureBox79);
			this->panel12->Controls->Add(this->pictureBox80);
			this->panel12->Controls->Add(this->pictureBox81);
			this->panel12->Controls->Add(this->pictureBox82);
			this->panel12->Controls->Add(this->label163);
			this->panel12->Controls->Add(this->label164);
			this->panel12->Controls->Add(this->pictureBox83);
			this->panel12->Controls->Add(this->panel14);
			this->panel12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel12->Location = System::Drawing::Point(0, 0);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(1262, 789);
			this->panel12->TabIndex = 34;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 48.20869F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(755, 539);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(137, 122);
			this->textBox11->TabIndex = 34;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 48.20869F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(574, 542);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(137, 122);
			this->textBox10->TabIndex = 34;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 48.20869F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(755, 364);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(137, 122);
			this->textBox8->TabIndex = 34;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 48.20869F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(574, 367);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(137, 122);
			this->textBox7->TabIndex = 34;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 48.20869F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(386, 545);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(137, 122);
			this->textBox9->TabIndex = 34;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 48.20869F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(755, 190);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(137, 122);
			this->textBox5->TabIndex = 34;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 48.20869F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(386, 370);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(137, 122);
			this->textBox6->TabIndex = 34;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 48.20869F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(574, 193);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(137, 122);
			this->textBox4->TabIndex = 34;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 48.20869F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(386, 196);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(137, 122);
			this->textBox3->TabIndex = 34;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button21
			// 
			this->button21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.BackgroundImage")));
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 8.139131F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button21->Location = System::Drawing::Point(513, 729);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(261, 36);
			this->button21->TabIndex = 31;
			this->button21->Text = L"END GAME";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->MouseEnter += gcnew System::EventHandler(this, &MyForm::button21_MouseEnter);
			// 
			// button22
			// 
			this->button22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.BackgroundImage")));
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 8.139131F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button22->Location = System::Drawing::Point(513, 729);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(261, 36);
			this->button22->TabIndex = 32;
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			this->button22->MouseLeave += gcnew System::EventHandler(this, &MyForm::button22_MouseLeave);
			// 
			// pictureBox79
			// 
			this->pictureBox79->Location = System::Drawing::Point(985, 202);
			this->pictureBox79->Name = L"pictureBox79";
			this->pictureBox79->Size = System::Drawing::Size(250, 521);
			this->pictureBox79->TabIndex = 27;
			this->pictureBox79->TabStop = false;
			// 
			// pictureBox80
			// 
			this->pictureBox80->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox80.BackgroundImage")));
			this->pictureBox80->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox80->Location = System::Drawing::Point(1006, 240);
			this->pictureBox80->Name = L"pictureBox80";
			this->pictureBox80->Size = System::Drawing::Size(200, 435);
			this->pictureBox80->TabIndex = 26;
			this->pictureBox80->TabStop = false;
			// 
			// pictureBox81
			// 
			this->pictureBox81->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox81.BackgroundImage")));
			this->pictureBox81->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox81->Location = System::Drawing::Point(67, 221);
			this->pictureBox81->Name = L"pictureBox81";
			this->pictureBox81->Size = System::Drawing::Size(200, 435);
			this->pictureBox81->TabIndex = 24;
			this->pictureBox81->TabStop = false;
			// 
			// pictureBox82
			// 
			this->pictureBox82->Location = System::Drawing::Point(39, 201);
			this->pictureBox82->Name = L"pictureBox82";
			this->pictureBox82->Size = System::Drawing::Size(250, 521);
			this->pictureBox82->TabIndex = 25;
			this->pictureBox82->TabStop = false;
			// 
			// label163
			// 
			this->label163->AutoSize = true;
			this->label163->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label163->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->label163->Location = System::Drawing::Point(588, 57);
			this->label163->Name = L"label163";
			this->label163->Size = System::Drawing::Size(106, 44);
			this->label163->TabIndex = 29;
			this->label163->Text = L"VS";
			// 
			// label164
			// 
			this->label164->AutoSize = true;
			this->label164->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label164->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label164->Location = System::Drawing::Point(31, 57);
			this->label164->Name = L"label164";
			this->label164->Size = System::Drawing::Size(361, 44);
			this->label164->TabIndex = 28;
			this->label164->Text = L"PLAYERplay";
			// 
			// pictureBox83
			// 
			this->pictureBox83->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox83.BackgroundImage")));
			this->pictureBox83->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox83->Location = System::Drawing::Point(331, 145);
			this->pictureBox83->Name = L"pictureBox83";
			this->pictureBox83->Size = System::Drawing::Size(625, 557);
			this->pictureBox83->TabIndex = 0;
			this->pictureBox83->TabStop = false;
			// 
			// panel14
			// 
			this->panel14->Controls->Add(this->label162);
			this->panel14->Location = System::Drawing::Point(822, 27);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(420, 100);
			this->panel14->TabIndex = 30;
			// 
			// label162
			// 
			this->label162->AutoSize = true;
			this->label162->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label162->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label162->Location = System::Drawing::Point(43, 31);
			this->label162->Name = L"label162";
			this->label162->Size = System::Drawing::Size(361, 44);
			this->label162->TabIndex = 4;
			this->label162->Text = L"PLAYERplay";
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel15->Controls->Add(this->label193);
			this->panel15->Controls->Add(this->label192);
			this->panel15->Controls->Add(this->label188);
			this->panel15->Controls->Add(this->label187);
			this->panel15->Controls->Add(this->label183);
			this->panel15->Controls->Add(this->label182);
			this->panel15->Controls->Add(this->label178);
			this->panel15->Controls->Add(this->label177);
			this->panel15->Controls->Add(this->label191);
			this->panel15->Controls->Add(this->label173);
			this->panel15->Controls->Add(this->label186);
			this->panel15->Controls->Add(this->label172);
			this->panel15->Controls->Add(this->label181);
			this->panel15->Controls->Add(this->label190);
			this->panel15->Controls->Add(this->label176);
			this->panel15->Controls->Add(this->label185);
			this->panel15->Controls->Add(this->label171);
			this->panel15->Controls->Add(this->label180);
			this->panel15->Controls->Add(this->label189);
			this->panel15->Controls->Add(this->label175);
			this->panel15->Controls->Add(this->label184);
			this->panel15->Controls->Add(this->label170);
			this->panel15->Controls->Add(this->label179);
			this->panel15->Controls->Add(this->label174);
			this->panel15->Controls->Add(this->label169);
			this->panel15->Controls->Add(this->button23);
			this->panel15->Controls->Add(this->button24);
			this->panel15->Controls->Add(this->pictureBox84);
			this->panel15->Controls->Add(this->pictureBox85);
			this->panel15->Controls->Add(this->pictureBox86);
			this->panel15->Controls->Add(this->pictureBox87);
			this->panel15->Controls->Add(this->label166);
			this->panel15->Controls->Add(this->label167);
			this->panel15->Controls->Add(this->pictureBox88);
			this->panel15->Controls->Add(this->panel17);
			this->panel15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel15->Location = System::Drawing::Point(0, 0);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(1262, 789);
			this->panel15->TabIndex = 12;
			// 
			// label193
			// 
			this->label193->AutoSize = true;
			this->label193->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label193->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label193->Location = System::Drawing::Point(809, 608);
			this->label193->Name = L"label193";
			this->label193->Size = System::Drawing::Size(83, 57);
			this->label193->TabIndex = 33;
			this->label193->Text = L"X";
			// 
			// label192
			// 
			this->label192->AutoSize = true;
			this->label192->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label192->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label192->Location = System::Drawing::Point(704, 608);
			this->label192->Name = L"label192";
			this->label192->Size = System::Drawing::Size(83, 57);
			this->label192->TabIndex = 33;
			this->label192->Text = L"X";
			// 
			// label188
			// 
			this->label188->AutoSize = true;
			this->label188->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label188->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label188->Location = System::Drawing::Point(809, 504);
			this->label188->Name = L"label188";
			this->label188->Size = System::Drawing::Size(83, 57);
			this->label188->TabIndex = 33;
			this->label188->Text = L"X";
			// 
			// label187
			// 
			this->label187->AutoSize = true;
			this->label187->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label187->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label187->Location = System::Drawing::Point(704, 504);
			this->label187->Name = L"label187";
			this->label187->Size = System::Drawing::Size(83, 57);
			this->label187->TabIndex = 33;
			this->label187->Text = L"X";
			// 
			// label183
			// 
			this->label183->AutoSize = true;
			this->label183->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label183->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label183->Location = System::Drawing::Point(812, 396);
			this->label183->Name = L"label183";
			this->label183->Size = System::Drawing::Size(83, 57);
			this->label183->TabIndex = 33;
			this->label183->Text = L"X";
			// 
			// label182
			// 
			this->label182->AutoSize = true;
			this->label182->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label182->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label182->Location = System::Drawing::Point(707, 396);
			this->label182->Name = L"label182";
			this->label182->Size = System::Drawing::Size(83, 57);
			this->label182->TabIndex = 33;
			this->label182->Text = L"X";
			// 
			// label178
			// 
			this->label178->AutoSize = true;
			this->label178->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label178->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label178->Location = System::Drawing::Point(812, 295);
			this->label178->Name = L"label178";
			this->label178->Size = System::Drawing::Size(83, 57);
			this->label178->TabIndex = 33;
			this->label178->Text = L"X";
			// 
			// label177
			// 
			this->label177->AutoSize = true;
			this->label177->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label177->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label177->Location = System::Drawing::Point(707, 295);
			this->label177->Name = L"label177";
			this->label177->Size = System::Drawing::Size(83, 57);
			this->label177->TabIndex = 33;
			this->label177->Text = L"X";
			// 
			// label191
			// 
			this->label191->AutoSize = true;
			this->label191->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label191->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label191->Location = System::Drawing::Point(597, 608);
			this->label191->Name = L"label191";
			this->label191->Size = System::Drawing::Size(83, 57);
			this->label191->TabIndex = 33;
			this->label191->Text = L"X";
			// 
			// label173
			// 
			this->label173->AutoSize = true;
			this->label173->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label173->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label173->Location = System::Drawing::Point(812, 189);
			this->label173->Name = L"label173";
			this->label173->Size = System::Drawing::Size(83, 57);
			this->label173->TabIndex = 33;
			this->label173->Text = L"X";
			// 
			// label186
			// 
			this->label186->AutoSize = true;
			this->label186->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label186->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label186->Location = System::Drawing::Point(597, 504);
			this->label186->Name = L"label186";
			this->label186->Size = System::Drawing::Size(83, 57);
			this->label186->TabIndex = 33;
			this->label186->Text = L"X";
			// 
			// label172
			// 
			this->label172->AutoSize = true;
			this->label172->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label172->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label172->Location = System::Drawing::Point(707, 189);
			this->label172->Name = L"label172";
			this->label172->Size = System::Drawing::Size(83, 57);
			this->label172->TabIndex = 33;
			this->label172->Text = L"X";
			// 
			// label181
			// 
			this->label181->AutoSize = true;
			this->label181->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label181->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label181->Location = System::Drawing::Point(600, 396);
			this->label181->Name = L"label181";
			this->label181->Size = System::Drawing::Size(83, 57);
			this->label181->TabIndex = 33;
			this->label181->Text = L"X";
			// 
			// label190
			// 
			this->label190->AutoSize = true;
			this->label190->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label190->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label190->Location = System::Drawing::Point(490, 608);
			this->label190->Name = L"label190";
			this->label190->Size = System::Drawing::Size(83, 57);
			this->label190->TabIndex = 33;
			this->label190->Text = L"X";
			// 
			// label176
			// 
			this->label176->AutoSize = true;
			this->label176->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label176->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label176->Location = System::Drawing::Point(600, 295);
			this->label176->Name = L"label176";
			this->label176->Size = System::Drawing::Size(83, 57);
			this->label176->TabIndex = 33;
			this->label176->Text = L"X";
			// 
			// label185
			// 
			this->label185->AutoSize = true;
			this->label185->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label185->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label185->Location = System::Drawing::Point(490, 504);
			this->label185->Name = L"label185";
			this->label185->Size = System::Drawing::Size(83, 57);
			this->label185->TabIndex = 33;
			this->label185->Text = L"X";
			// 
			// label171
			// 
			this->label171->AutoSize = true;
			this->label171->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label171->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label171->Location = System::Drawing::Point(600, 189);
			this->label171->Name = L"label171";
			this->label171->Size = System::Drawing::Size(83, 57);
			this->label171->TabIndex = 33;
			this->label171->Text = L"X";
			// 
			// label180
			// 
			this->label180->AutoSize = true;
			this->label180->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label180->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label180->Location = System::Drawing::Point(493, 396);
			this->label180->Name = L"label180";
			this->label180->Size = System::Drawing::Size(83, 57);
			this->label180->TabIndex = 33;
			this->label180->Text = L"X";
			// 
			// label189
			// 
			this->label189->AutoSize = true;
			this->label189->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label189->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label189->Location = System::Drawing::Point(382, 608);
			this->label189->Name = L"label189";
			this->label189->Size = System::Drawing::Size(83, 57);
			this->label189->TabIndex = 33;
			this->label189->Text = L"X";
			// 
			// label175
			// 
			this->label175->AutoSize = true;
			this->label175->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label175->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label175->Location = System::Drawing::Point(493, 295);
			this->label175->Name = L"label175";
			this->label175->Size = System::Drawing::Size(83, 57);
			this->label175->TabIndex = 33;
			this->label175->Text = L"X";
			// 
			// label184
			// 
			this->label184->AutoSize = true;
			this->label184->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label184->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label184->Location = System::Drawing::Point(382, 504);
			this->label184->Name = L"label184";
			this->label184->Size = System::Drawing::Size(83, 57);
			this->label184->TabIndex = 33;
			this->label184->Text = L"X";
			// 
			// label170
			// 
			this->label170->AutoSize = true;
			this->label170->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label170->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label170->Location = System::Drawing::Point(493, 189);
			this->label170->Name = L"label170";
			this->label170->Size = System::Drawing::Size(83, 57);
			this->label170->TabIndex = 33;
			this->label170->Text = L"X";
			// 
			// label179
			// 
			this->label179->AutoSize = true;
			this->label179->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label179->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label179->Location = System::Drawing::Point(385, 396);
			this->label179->Name = L"label179";
			this->label179->Size = System::Drawing::Size(83, 57);
			this->label179->TabIndex = 33;
			this->label179->Text = L"X";
			// 
			// label174
			// 
			this->label174->AutoSize = true;
			this->label174->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label174->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label174->Location = System::Drawing::Point(385, 295);
			this->label174->Name = L"label174";
			this->label174->Size = System::Drawing::Size(83, 57);
			this->label174->TabIndex = 33;
			this->label174->Text = L"X";
			// 
			// label169
			// 
			this->label169->AutoSize = true;
			this->label169->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label169->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label169->Location = System::Drawing::Point(385, 189);
			this->label169->Name = L"label169";
			this->label169->Size = System::Drawing::Size(83, 57);
			this->label169->TabIndex = 33;
			this->label169->Text = L"X";
			// 
			// button23
			// 
			this->button23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.BackgroundImage")));
			this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 8.139131F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button23->Location = System::Drawing::Point(514, 729);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(261, 36);
			this->button23->TabIndex = 31;
			this->button23->Text = L"END GAME";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->MouseEnter += gcnew System::EventHandler(this, &MyForm::button23_MouseEnter);
			// 
			// button24
			// 
			this->button24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button24.BackgroundImage")));
			this->button24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 8.139131F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button24->Location = System::Drawing::Point(513, 729);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(261, 36);
			this->button24->TabIndex = 32;
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			this->button24->MouseLeave += gcnew System::EventHandler(this, &MyForm::button24_MouseLeave);
			// 
			// pictureBox84
			// 
			this->pictureBox84->Location = System::Drawing::Point(985, 202);
			this->pictureBox84->Name = L"pictureBox84";
			this->pictureBox84->Size = System::Drawing::Size(250, 521);
			this->pictureBox84->TabIndex = 27;
			this->pictureBox84->TabStop = false;
			// 
			// pictureBox85
			// 
			this->pictureBox85->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox85.BackgroundImage")));
			this->pictureBox85->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox85->Location = System::Drawing::Point(1006, 240);
			this->pictureBox85->Name = L"pictureBox85";
			this->pictureBox85->Size = System::Drawing::Size(200, 435);
			this->pictureBox85->TabIndex = 26;
			this->pictureBox85->TabStop = false;
			// 
			// pictureBox86
			// 
			this->pictureBox86->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox86.BackgroundImage")));
			this->pictureBox86->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox86->Location = System::Drawing::Point(67, 221);
			this->pictureBox86->Name = L"pictureBox86";
			this->pictureBox86->Size = System::Drawing::Size(200, 435);
			this->pictureBox86->TabIndex = 24;
			this->pictureBox86->TabStop = false;
			// 
			// pictureBox87
			// 
			this->pictureBox87->Location = System::Drawing::Point(39, 201);
			this->pictureBox87->Name = L"pictureBox87";
			this->pictureBox87->Size = System::Drawing::Size(250, 521);
			this->pictureBox87->TabIndex = 25;
			this->pictureBox87->TabStop = false;
			// 
			// label166
			// 
			this->label166->AutoSize = true;
			this->label166->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label166->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->label166->Location = System::Drawing::Point(588, 57);
			this->label166->Name = L"label166";
			this->label166->Size = System::Drawing::Size(106, 44);
			this->label166->TabIndex = 29;
			this->label166->Text = L"VS";
			// 
			// label167
			// 
			this->label167->AutoSize = true;
			this->label167->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label167->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label167->Location = System::Drawing::Point(31, 57);
			this->label167->Name = L"label167";
			this->label167->Size = System::Drawing::Size(361, 44);
			this->label167->TabIndex = 28;
			this->label167->Text = L"PLAYERplay";
			// 
			// pictureBox88
			// 
			this->pictureBox88->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox88.BackgroundImage")));
			this->pictureBox88->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox88->Location = System::Drawing::Point(328, 145);
			this->pictureBox88->Name = L"pictureBox88";
			this->pictureBox88->Size = System::Drawing::Size(625, 557);
			this->pictureBox88->TabIndex = 0;
			this->pictureBox88->TabStop = false;
			// 
			// panel17
			// 
			this->panel17->Controls->Add(this->label165);
			this->panel17->Location = System::Drawing::Point(822, 27);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(420, 100);
			this->panel17->TabIndex = 30;
			// 
			// label165
			// 
			this->label165->AutoSize = true;
			this->label165->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label165->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label165->Location = System::Drawing::Point(43, 31);
			this->label165->Name = L"label165";
			this->label165->Size = System::Drawing::Size(361, 44);
			this->label165->TabIndex = 4;
			this->label165->Text = L"PLAYERplay";
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel18->Controls->Add(this->label240);
			this->panel18->Controls->Add(this->label219);
			this->panel18->Controls->Add(this->label239);
			this->panel18->Controls->Add(this->label218);
			this->panel18->Controls->Add(this->label235);
			this->panel18->Controls->Add(this->label214);
			this->panel18->Controls->Add(this->label234);
			this->panel18->Controls->Add(this->label213);
			this->panel18->Controls->Add(this->label230);
			this->panel18->Controls->Add(this->label209);
			this->panel18->Controls->Add(this->label229);
			this->panel18->Controls->Add(this->label208);
			this->panel18->Controls->Add(this->label225);
			this->panel18->Controls->Add(this->label204);
			this->panel18->Controls->Add(this->label238);
			this->panel18->Controls->Add(this->label217);
			this->panel18->Controls->Add(this->label224);
			this->panel18->Controls->Add(this->label203);
			this->panel18->Controls->Add(this->label233);
			this->panel18->Controls->Add(this->label212);
			this->panel18->Controls->Add(this->label228);
			this->panel18->Controls->Add(this->label207);
			this->panel18->Controls->Add(this->label237);
			this->panel18->Controls->Add(this->label216);
			this->panel18->Controls->Add(this->label223);
			this->panel18->Controls->Add(this->label202);
			this->panel18->Controls->Add(this->label232);
			this->panel18->Controls->Add(this->label211);
			this->panel18->Controls->Add(this->label241);
			this->panel18->Controls->Add(this->label227);
			this->panel18->Controls->Add(this->label220);
			this->panel18->Controls->Add(this->label236);
			this->panel18->Controls->Add(this->label206);
			this->panel18->Controls->Add(this->label222);
			this->panel18->Controls->Add(this->label215);
			this->panel18->Controls->Add(this->label231);
			this->panel18->Controls->Add(this->label201);
			this->panel18->Controls->Add(this->label226);
			this->panel18->Controls->Add(this->label210);
			this->panel18->Controls->Add(this->label221);
			this->panel18->Controls->Add(this->label205);
			this->panel18->Controls->Add(this->label200);
			this->panel18->Controls->Add(this->button14);
			this->panel18->Controls->Add(this->button25);
			this->panel18->Controls->Add(this->pictureBox89);
			this->panel18->Controls->Add(this->pictureBox90);
			this->panel18->Controls->Add(this->pictureBox91);
			this->panel18->Controls->Add(this->pictureBox92);
			this->panel18->Controls->Add(this->label157);
			this->panel18->Controls->Add(this->label155);
			this->panel18->Controls->Add(this->pictureBox93);
			this->panel18->Controls->Add(this->panel20);
			this->panel18->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel18->Location = System::Drawing::Point(0, 0);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(1262, 789);
			this->panel18->TabIndex = 34;
			// 
			// label240
			// 
			this->label240->AutoSize = true;
			this->label240->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label240->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label240->Location = System::Drawing::Point(787, 620);
			this->label240->Name = L"label240";
			this->label240->Size = System::Drawing::Size(83, 57);
			this->label240->TabIndex = 33;
			this->label240->Text = L"X";
			// 
			// label219
			// 
			this->label219->AutoSize = true;
			this->label219->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label219->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label219->Location = System::Drawing::Point(787, 355);
			this->label219->Name = L"label219";
			this->label219->Size = System::Drawing::Size(83, 57);
			this->label219->TabIndex = 33;
			this->label219->Text = L"X";
			// 
			// label239
			// 
			this->label239->AutoSize = true;
			this->label239->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label239->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label239->Location = System::Drawing::Point(692, 620);
			this->label239->Name = L"label239";
			this->label239->Size = System::Drawing::Size(83, 57);
			this->label239->TabIndex = 33;
			this->label239->Text = L"X";
			// 
			// label218
			// 
			this->label218->AutoSize = true;
			this->label218->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label218->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label218->Location = System::Drawing::Point(692, 355);
			this->label218->Name = L"label218";
			this->label218->Size = System::Drawing::Size(83, 57);
			this->label218->TabIndex = 33;
			this->label218->Text = L"X";
			// 
			// label235
			// 
			this->label235->AutoSize = true;
			this->label235->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label235->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label235->Location = System::Drawing::Point(321, 621);
			this->label235->Name = L"label235";
			this->label235->Size = System::Drawing::Size(83, 57);
			this->label235->TabIndex = 33;
			this->label235->Text = L"X";
			// 
			// label214
			// 
			this->label214->AutoSize = true;
			this->label214->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label214->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label214->Location = System::Drawing::Point(321, 356);
			this->label214->Name = L"label214";
			this->label214->Size = System::Drawing::Size(83, 57);
			this->label214->TabIndex = 33;
			this->label214->Text = L"X";
			// 
			// label234
			// 
			this->label234->AutoSize = true;
			this->label234->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label234->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label234->Location = System::Drawing::Point(883, 531);
			this->label234->Name = L"label234";
			this->label234->Size = System::Drawing::Size(83, 57);
			this->label234->TabIndex = 33;
			this->label234->Text = L"X";
			// 
			// label213
			// 
			this->label213->AutoSize = true;
			this->label213->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label213->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label213->Location = System::Drawing::Point(883, 266);
			this->label213->Name = L"label213";
			this->label213->Size = System::Drawing::Size(83, 57);
			this->label213->TabIndex = 33;
			this->label213->Text = L"X";
			// 
			// label230
			// 
			this->label230->AutoSize = true;
			this->label230->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label230->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label230->Location = System::Drawing::Point(508, 531);
			this->label230->Name = L"label230";
			this->label230->Size = System::Drawing::Size(83, 57);
			this->label230->TabIndex = 33;
			this->label230->Text = L"X";
			// 
			// label209
			// 
			this->label209->AutoSize = true;
			this->label209->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label209->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label209->Location = System::Drawing::Point(508, 266);
			this->label209->Name = L"label209";
			this->label209->Size = System::Drawing::Size(83, 57);
			this->label209->TabIndex = 33;
			this->label209->Text = L"X";
			// 
			// label229
			// 
			this->label229->AutoSize = true;
			this->label229->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label229->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label229->Location = System::Drawing::Point(415, 532);
			this->label229->Name = L"label229";
			this->label229->Size = System::Drawing::Size(83, 57);
			this->label229->TabIndex = 33;
			this->label229->Text = L"X";
			// 
			// label208
			// 
			this->label208->AutoSize = true;
			this->label208->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label208->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label208->Location = System::Drawing::Point(415, 267);
			this->label208->Name = L"label208";
			this->label208->Size = System::Drawing::Size(83, 57);
			this->label208->TabIndex = 33;
			this->label208->Text = L"X";
			// 
			// label225
			// 
			this->label225->AutoSize = true;
			this->label225->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label225->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label225->Location = System::Drawing::Point(692, 445);
			this->label225->Name = L"label225";
			this->label225->Size = System::Drawing::Size(83, 57);
			this->label225->TabIndex = 33;
			this->label225->Text = L"X";
			// 
			// label204
			// 
			this->label204->AutoSize = true;
			this->label204->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label204->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label204->Location = System::Drawing::Point(692, 180);
			this->label204->Name = L"label204";
			this->label204->Size = System::Drawing::Size(83, 57);
			this->label204->TabIndex = 33;
			this->label204->Text = L"X";
			// 
			// label238
			// 
			this->label238->AutoSize = true;
			this->label238->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label238->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label238->Location = System::Drawing::Point(600, 620);
			this->label238->Name = L"label238";
			this->label238->Size = System::Drawing::Size(83, 57);
			this->label238->TabIndex = 33;
			this->label238->Text = L"X";
			// 
			// label217
			// 
			this->label217->AutoSize = true;
			this->label217->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label217->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label217->Location = System::Drawing::Point(600, 355);
			this->label217->Name = L"label217";
			this->label217->Size = System::Drawing::Size(83, 57);
			this->label217->TabIndex = 33;
			this->label217->Text = L"X";
			// 
			// label224
			// 
			this->label224->AutoSize = true;
			this->label224->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label224->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label224->Location = System::Drawing::Point(603, 445);
			this->label224->Name = L"label224";
			this->label224->Size = System::Drawing::Size(83, 57);
			this->label224->TabIndex = 33;
			this->label224->Text = L"X";
			// 
			// label203
			// 
			this->label203->AutoSize = true;
			this->label203->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label203->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label203->Location = System::Drawing::Point(602, 180);
			this->label203->Name = L"label203";
			this->label203->Size = System::Drawing::Size(83, 57);
			this->label203->TabIndex = 33;
			this->label203->Text = L"X";
			// 
			// label233
			// 
			this->label233->AutoSize = true;
			this->label233->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label233->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label233->Location = System::Drawing::Point(787, 531);
			this->label233->Name = L"label233";
			this->label233->Size = System::Drawing::Size(83, 57);
			this->label233->TabIndex = 33;
			this->label233->Text = L"X";
			// 
			// label212
			// 
			this->label212->AutoSize = true;
			this->label212->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label212->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label212->Location = System::Drawing::Point(787, 266);
			this->label212->Name = L"label212";
			this->label212->Size = System::Drawing::Size(83, 57);
			this->label212->TabIndex = 33;
			this->label212->Text = L"X";
			// 
			// label228
			// 
			this->label228->AutoSize = true;
			this->label228->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label228->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label228->Location = System::Drawing::Point(318, 533);
			this->label228->Name = L"label228";
			this->label228->Size = System::Drawing::Size(83, 57);
			this->label228->TabIndex = 33;
			this->label228->Text = L"X";
			// 
			// label207
			// 
			this->label207->AutoSize = true;
			this->label207->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label207->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label207->Location = System::Drawing::Point(318, 268);
			this->label207->Name = L"label207";
			this->label207->Size = System::Drawing::Size(83, 57);
			this->label207->TabIndex = 33;
			this->label207->Text = L"X";
			// 
			// label237
			// 
			this->label237->AutoSize = true;
			this->label237->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label237->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label237->Location = System::Drawing::Point(511, 620);
			this->label237->Name = L"label237";
			this->label237->Size = System::Drawing::Size(83, 57);
			this->label237->TabIndex = 33;
			this->label237->Text = L"X";
			// 
			// label216
			// 
			this->label216->AutoSize = true;
			this->label216->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label216->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label216->Location = System::Drawing::Point(511, 355);
			this->label216->Name = L"label216";
			this->label216->Size = System::Drawing::Size(83, 57);
			this->label216->TabIndex = 33;
			this->label216->Text = L"X";
			// 
			// label223
			// 
			this->label223->AutoSize = true;
			this->label223->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label223->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label223->Location = System::Drawing::Point(509, 445);
			this->label223->Name = L"label223";
			this->label223->Size = System::Drawing::Size(83, 57);
			this->label223->TabIndex = 33;
			this->label223->Text = L"X";
			// 
			// label202
			// 
			this->label202->AutoSize = true;
			this->label202->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label202->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label202->Location = System::Drawing::Point(509, 180);
			this->label202->Name = L"label202";
			this->label202->Size = System::Drawing::Size(83, 57);
			this->label202->TabIndex = 33;
			this->label202->Text = L"X";
			// 
			// label232
			// 
			this->label232->AutoSize = true;
			this->label232->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label232->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label232->Location = System::Drawing::Point(692, 532);
			this->label232->Name = L"label232";
			this->label232->Size = System::Drawing::Size(83, 57);
			this->label232->TabIndex = 33;
			this->label232->Text = L"X";
			// 
			// label211
			// 
			this->label211->AutoSize = true;
			this->label211->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label211->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label211->Location = System::Drawing::Point(692, 267);
			this->label211->Name = L"label211";
			this->label211->Size = System::Drawing::Size(83, 57);
			this->label211->TabIndex = 33;
			this->label211->Text = L"X";
			// 
			// label241
			// 
			this->label241->AutoSize = true;
			this->label241->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label241->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label241->Location = System::Drawing::Point(883, 617);
			this->label241->Name = L"label241";
			this->label241->Size = System::Drawing::Size(83, 57);
			this->label241->TabIndex = 33;
			this->label241->Text = L"X";
			// 
			// label227
			// 
			this->label227->AutoSize = true;
			this->label227->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label227->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label227->Location = System::Drawing::Point(883, 445);
			this->label227->Name = L"label227";
			this->label227->Size = System::Drawing::Size(83, 57);
			this->label227->TabIndex = 33;
			this->label227->Text = L"X";
			// 
			// label220
			// 
			this->label220->AutoSize = true;
			this->label220->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label220->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label220->Location = System::Drawing::Point(883, 354);
			this->label220->Name = L"label220";
			this->label220->Size = System::Drawing::Size(83, 57);
			this->label220->TabIndex = 33;
			this->label220->Text = L"X";
			// 
			// label236
			// 
			this->label236->AutoSize = true;
			this->label236->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label236->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label236->Location = System::Drawing::Point(415, 621);
			this->label236->Name = L"label236";
			this->label236->Size = System::Drawing::Size(83, 57);
			this->label236->TabIndex = 33;
			this->label236->Text = L"X";
			// 
			// label206
			// 
			this->label206->AutoSize = true;
			this->label206->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label206->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label206->Location = System::Drawing::Point(883, 180);
			this->label206->Name = L"label206";
			this->label206->Size = System::Drawing::Size(83, 57);
			this->label206->TabIndex = 33;
			this->label206->Text = L"X";
			// 
			// label222
			// 
			this->label222->AutoSize = true;
			this->label222->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label222->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label222->Location = System::Drawing::Point(413, 445);
			this->label222->Name = L"label222";
			this->label222->Size = System::Drawing::Size(83, 57);
			this->label222->TabIndex = 33;
			this->label222->Text = L"X";
			// 
			// label215
			// 
			this->label215->AutoSize = true;
			this->label215->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label215->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label215->Location = System::Drawing::Point(415, 356);
			this->label215->Name = L"label215";
			this->label215->Size = System::Drawing::Size(83, 57);
			this->label215->TabIndex = 33;
			this->label215->Text = L"X";
			// 
			// label231
			// 
			this->label231->AutoSize = true;
			this->label231->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label231->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label231->Location = System::Drawing::Point(600, 533);
			this->label231->Name = L"label231";
			this->label231->Size = System::Drawing::Size(83, 57);
			this->label231->TabIndex = 33;
			this->label231->Text = L"X";
			// 
			// label201
			// 
			this->label201->AutoSize = true;
			this->label201->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label201->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label201->Location = System::Drawing::Point(413, 180);
			this->label201->Name = L"label201";
			this->label201->Size = System::Drawing::Size(83, 57);
			this->label201->TabIndex = 33;
			this->label201->Text = L"X";
			// 
			// label226
			// 
			this->label226->AutoSize = true;
			this->label226->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label226->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label226->Location = System::Drawing::Point(788, 445);
			this->label226->Name = L"label226";
			this->label226->Size = System::Drawing::Size(83, 57);
			this->label226->TabIndex = 33;
			this->label226->Text = L"X";
			// 
			// label210
			// 
			this->label210->AutoSize = true;
			this->label210->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label210->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label210->Location = System::Drawing::Point(600, 268);
			this->label210->Name = L"label210";
			this->label210->Size = System::Drawing::Size(83, 57);
			this->label210->TabIndex = 33;
			this->label210->Text = L"X";
			// 
			// label221
			// 
			this->label221->AutoSize = true;
			this->label221->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label221->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label221->Location = System::Drawing::Point(321, 445);
			this->label221->Name = L"label221";
			this->label221->Size = System::Drawing::Size(83, 57);
			this->label221->TabIndex = 33;
			this->label221->Text = L"X";
			// 
			// label205
			// 
			this->label205->AutoSize = true;
			this->label205->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label205->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label205->Location = System::Drawing::Point(788, 180);
			this->label205->Name = L"label205";
			this->label205->Size = System::Drawing::Size(83, 57);
			this->label205->TabIndex = 33;
			this->label205->Text = L"X";
			// 
			// label200
			// 
			this->label200->AutoSize = true;
			this->label200->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 26.29565F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label200->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label200->Location = System::Drawing::Point(321, 180);
			this->label200->Name = L"label200";
			this->label200->Size = System::Drawing::Size(83, 57);
			this->label200->TabIndex = 33;
			this->label200->Text = L"X";
			// 
			// button14
			// 
			this->button14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.BackgroundImage")));
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 8.139131F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button14->Location = System::Drawing::Point(513, 729);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(261, 36);
			this->button14->TabIndex = 31;
			this->button14->Text = L"END GAME";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->MouseEnter += gcnew System::EventHandler(this, &MyForm::button14_MouseEnter);
			// 
			// button25
			// 
			this->button25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button25.BackgroundImage")));
			this->button25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 8.139131F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button25->Location = System::Drawing::Point(513, 729);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(261, 36);
			this->button25->TabIndex = 32;
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			this->button25->MouseLeave += gcnew System::EventHandler(this, &MyForm::button25_MouseLeave);
			// 
			// pictureBox89
			// 
			this->pictureBox89->Location = System::Drawing::Point(985, 202);
			this->pictureBox89->Name = L"pictureBox89";
			this->pictureBox89->Size = System::Drawing::Size(250, 521);
			this->pictureBox89->TabIndex = 27;
			this->pictureBox89->TabStop = false;
			// 
			// pictureBox90
			// 
			this->pictureBox90->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox90.BackgroundImage")));
			this->pictureBox90->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox90->Location = System::Drawing::Point(1006, 240);
			this->pictureBox90->Name = L"pictureBox90";
			this->pictureBox90->Size = System::Drawing::Size(200, 435);
			this->pictureBox90->TabIndex = 26;
			this->pictureBox90->TabStop = false;
			// 
			// pictureBox91
			// 
			this->pictureBox91->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox91.BackgroundImage")));
			this->pictureBox91->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox91->Location = System::Drawing::Point(67, 221);
			this->pictureBox91->Name = L"pictureBox91";
			this->pictureBox91->Size = System::Drawing::Size(200, 435);
			this->pictureBox91->TabIndex = 24;
			this->pictureBox91->TabStop = false;
			// 
			// pictureBox92
			// 
			this->pictureBox92->Location = System::Drawing::Point(39, 201);
			this->pictureBox92->Name = L"pictureBox92";
			this->pictureBox92->Size = System::Drawing::Size(250, 521);
			this->pictureBox92->TabIndex = 25;
			this->pictureBox92->TabStop = false;
			// 
			// label157
			// 
			this->label157->AutoSize = true;
			this->label157->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label157->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->label157->Location = System::Drawing::Point(588, 57);
			this->label157->Name = L"label157";
			this->label157->Size = System::Drawing::Size(106, 44);
			this->label157->TabIndex = 29;
			this->label157->Text = L"VS";
			// 
			// label155
			// 
			this->label155->AutoSize = true;
			this->label155->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label155->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label155->Location = System::Drawing::Point(31, 57);
			this->label155->Name = L"label155";
			this->label155->Size = System::Drawing::Size(361, 44);
			this->label155->TabIndex = 28;
			this->label155->Text = L"PLAYERplay";
			// 
			// pictureBox93
			// 
			this->pictureBox93->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox93.BackgroundImage")));
			this->pictureBox93->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox93->Location = System::Drawing::Point(305, 145);
			this->pictureBox93->Name = L"pictureBox93";
			this->pictureBox93->Size = System::Drawing::Size(674, 557);
			this->pictureBox93->TabIndex = 0;
			this->pictureBox93->TabStop = false;
			// 
			// panel20
			// 
			this->panel20->Controls->Add(this->label156);
			this->panel20->Location = System::Drawing::Point(822, 27);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(420, 100);
			this->panel20->TabIndex = 30;
			// 
			// label156
			// 
			this->label156->AutoSize = true;
			this->label156->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label156->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label156->Location = System::Drawing::Point(43, 31);
			this->label156->Name = L"label156";
			this->label156->Size = System::Drawing::Size(361, 44);
			this->label156->TabIndex = 4;
			this->label156->Text = L"PLAYERplay";
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel21->Controls->Add(this->label250);
			this->panel21->Controls->Add(this->label247);
			this->panel21->Controls->Add(this->label244);
			this->panel21->Controls->Add(this->label249);
			this->panel21->Controls->Add(this->label248);
			this->panel21->Controls->Add(this->label246);
			this->panel21->Controls->Add(this->label245);
			this->panel21->Controls->Add(this->label243);
			this->panel21->Controls->Add(this->label242);
			this->panel21->Controls->Add(this->button26);
			this->panel21->Controls->Add(this->button27);
			this->panel21->Controls->Add(this->label272);
			this->panel21->Controls->Add(this->label273);
			this->panel21->Controls->Add(this->pictureBox98);
			this->panel21->Controls->Add(this->panel23);
			this->panel21->Controls->Add(this->pictureBox94);
			this->panel21->Controls->Add(this->pictureBox96);
			this->panel21->Controls->Add(this->pictureBox97);
			this->panel21->Controls->Add(this->panel22);
			this->panel21->Controls->Add(this->panel24);
			this->panel21->Controls->Add(this->pictureBox95);
			this->panel21->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel21->Location = System::Drawing::Point(0, 0);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(1262, 789);
			this->panel21->TabIndex = 34;
			// 
			// label250
			// 
			this->label250->AutoSize = true;
			this->label250->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 50.08695F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label250->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label250->Location = System::Drawing::Point(748, 545);
			this->label250->Name = L"label250";
			this->label250->Size = System::Drawing::Size(157, 109);
			this->label250->TabIndex = 34;
			this->label250->Text = L"X";
			// 
			// label247
			// 
			this->label247->AutoSize = true;
			this->label247->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 50.08695F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label247->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label247->Location = System::Drawing::Point(744, 377);
			this->label247->Name = L"label247";
			this->label247->Size = System::Drawing::Size(157, 109);
			this->label247->TabIndex = 34;
			this->label247->Text = L"X";
			// 
			// label244
			// 
			this->label244->AutoSize = true;
			this->label244->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 50.08695F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label244->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label244->Location = System::Drawing::Point(744, 201);
			this->label244->Name = L"label244";
			this->label244->Size = System::Drawing::Size(157, 109);
			this->label244->TabIndex = 34;
			this->label244->Text = L"X";
			// 
			// label249
			// 
			this->label249->AutoSize = true;
			this->label249->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 50.08695F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label249->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label249->Location = System::Drawing::Point(586, 546);
			this->label249->Name = L"label249";
			this->label249->Size = System::Drawing::Size(119, 109);
			this->label249->TabIndex = 34;
			this->label249->Text = L"2";
			// 
			// label248
			// 
			this->label248->AutoSize = true;
			this->label248->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 50.08695F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label248->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label248->Location = System::Drawing::Point(380, 547);
			this->label248->Name = L"label248";
			this->label248->Size = System::Drawing::Size(157, 109);
			this->label248->TabIndex = 34;
			this->label248->Text = L"X";
			// 
			// label246
			// 
			this->label246->AutoSize = true;
			this->label246->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 50.08695F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label246->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label246->Location = System::Drawing::Point(582, 379);
			this->label246->Name = L"label246";
			this->label246->Size = System::Drawing::Size(119, 109);
			this->label246->TabIndex = 34;
			this->label246->Text = L"2";
			// 
			// label245
			// 
			this->label245->AutoSize = true;
			this->label245->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 50.08695F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label245->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label245->Location = System::Drawing::Point(376, 380);
			this->label245->Name = L"label245";
			this->label245->Size = System::Drawing::Size(157, 109);
			this->label245->TabIndex = 34;
			this->label245->Text = L"X";
			// 
			// label243
			// 
			this->label243->AutoSize = true;
			this->label243->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 50.08695F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label243->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label243->Location = System::Drawing::Point(582, 203);
			this->label243->Name = L"label243";
			this->label243->Size = System::Drawing::Size(119, 109);
			this->label243->TabIndex = 34;
			this->label243->Text = L"2";
			// 
			// label242
			// 
			this->label242->AutoSize = true;
			this->label242->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 50.08695F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label242->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label242->Location = System::Drawing::Point(418, 207);
			this->label242->Name = L"label242";
			this->label242->Size = System::Drawing::Size(80, 109);
			this->label242->TabIndex = 34;
			this->label242->Text = L"1";
			// 
			// button26
			// 
			this->button26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button26.BackgroundImage")));
			this->button26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 8.139131F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button26->Location = System::Drawing::Point(514, 729);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(261, 36);
			this->button26->TabIndex = 31;
			this->button26->Text = L"END GAME";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->MouseEnter += gcnew System::EventHandler(this, &MyForm::button26_MouseEnter);
			// 
			// button27
			// 
			this->button27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button27.BackgroundImage")));
			this->button27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 8.139131F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button27->Location = System::Drawing::Point(513, 729);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(261, 36);
			this->button27->TabIndex = 32;
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			this->button27->MouseLeave += gcnew System::EventHandler(this, &MyForm::button27_MouseLeave);
			// 
			// label272
			// 
			this->label272->AutoSize = true;
			this->label272->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label272->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->label272->Location = System::Drawing::Point(588, 57);
			this->label272->Name = L"label272";
			this->label272->Size = System::Drawing::Size(106, 44);
			this->label272->TabIndex = 29;
			this->label272->Text = L"VS";
			// 
			// label273
			// 
			this->label273->AutoSize = true;
			this->label273->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label273->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label273->Location = System::Drawing::Point(31, 57);
			this->label273->Name = L"label273";
			this->label273->Size = System::Drawing::Size(361, 44);
			this->label273->TabIndex = 28;
			this->label273->Text = L"PLAYERplay";
			// 
			// pictureBox98
			// 
			this->pictureBox98->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox98.BackgroundImage")));
			this->pictureBox98->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox98->Location = System::Drawing::Point(328, 150);
			this->pictureBox98->Name = L"pictureBox98";
			this->pictureBox98->Size = System::Drawing::Size(623, 557);
			this->pictureBox98->TabIndex = 0;
			this->pictureBox98->TabStop = false;
			// 
			// panel23
			// 
			this->panel23->Controls->Add(this->label271);
			this->panel23->Location = System::Drawing::Point(822, 27);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(420, 100);
			this->panel23->TabIndex = 30;
			// 
			// label271
			// 
			this->label271->AutoSize = true;
			this->label271->Font = (gcnew System::Drawing::Font(L"KEANON ExtBd Demo Version", 20.03478F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label271->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label271->Location = System::Drawing::Point(35, 31);
			this->label271->Name = L"label271";
			this->label271->Size = System::Drawing::Size(361, 44);
			this->label271->TabIndex = 4;
			this->label271->Text = L"PLAYERplay";
			// 
			// pictureBox94
			// 
			this->pictureBox94->Location = System::Drawing::Point(966, 150);
			this->pictureBox94->Name = L"pictureBox94";
			this->pictureBox94->Size = System::Drawing::Size(273, 578);
			this->pictureBox94->TabIndex = 27;
			this->pictureBox94->TabStop = false;
			// 
			// pictureBox96
			// 
			this->pictureBox96->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox96.BackgroundImage")));
			this->pictureBox96->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox96->Location = System::Drawing::Point(67, 221);
			this->pictureBox96->Name = L"pictureBox96";
			this->pictureBox96->Size = System::Drawing::Size(200, 435);
			this->pictureBox96->TabIndex = 24;
			this->pictureBox96->TabStop = false;
			// 
			// pictureBox97
			// 
			this->pictureBox97->Location = System::Drawing::Point(22, 136);
			this->pictureBox97->Name = L"pictureBox97";
			this->pictureBox97->Size = System::Drawing::Size(281, 602);
			this->pictureBox97->TabIndex = 25;
			this->pictureBox97->TabStop = false;
			// 
			// panel22
			// 
			this->panel22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel22->Controls->Add(this->button41);
			this->panel22->Controls->Add(this->button38);
			this->panel22->Controls->Add(this->button40);
			this->panel22->Controls->Add(this->button39);
			this->panel22->Controls->Add(this->button43);
			this->panel22->Controls->Add(this->button44);
			this->panel22->Controls->Add(this->button46);
			this->panel22->Controls->Add(this->button47);
			this->panel22->Location = System::Drawing::Point(41, 155);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(249, 552);
			this->panel22->TabIndex = 33;
			// 
			// button41
			// 
			this->button41->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button41.BackgroundImage")));
			this->button41->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button41->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button41->Location = System::Drawing::Point(140, 263);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(98, 91);
			this->button41->TabIndex = 0;
			this->button41->UseVisualStyleBackColor = true;
			// 
			// button38
			// 
			this->button38->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button38.BackgroundImage")));
			this->button38->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button38->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button38->Location = System::Drawing::Point(17, 150);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(98, 91);
			this->button38->TabIndex = 0;
			this->button38->UseVisualStyleBackColor = true;
			// 
			// button40
			// 
			this->button40->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button40.BackgroundImage")));
			this->button40->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button40->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button40->Location = System::Drawing::Point(17, 263);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(98, 91);
			this->button40->TabIndex = 0;
			this->button40->UseVisualStyleBackColor = true;
			// 
			// button39
			// 
			this->button39->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button39.BackgroundImage")));
			this->button39->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button39->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button39->Location = System::Drawing::Point(144, 152);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(98, 91);
			this->button39->TabIndex = 0;
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button43
			// 
			this->button43->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button43.BackgroundImage")));
			this->button43->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button43->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button43->Location = System::Drawing::Point(140, 263);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(98, 91);
			this->button43->TabIndex = 0;
			this->button43->UseVisualStyleBackColor = true;
			// 
			// button44
			// 
			this->button44->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button44.BackgroundImage")));
			this->button44->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button44->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button44->Location = System::Drawing::Point(140, 150);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(98, 91);
			this->button44->TabIndex = 0;
			this->button44->UseVisualStyleBackColor = true;
			// 
			// button46
			// 
			this->button46->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button46.BackgroundImage")));
			this->button46->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button46->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button46->Location = System::Drawing::Point(17, 263);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(98, 91);
			this->button46->TabIndex = 0;
			this->button46->UseVisualStyleBackColor = true;
			// 
			// button47
			// 
			this->button47->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button47.BackgroundImage")));
			this->button47->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button47->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button47->Location = System::Drawing::Point(17, 150);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(98, 91);
			this->button47->TabIndex = 0;
			this->button47->UseVisualStyleBackColor = true;
			// 
			// panel24
			// 
			this->panel24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel24->Controls->Add(this->button31);
			this->panel24->Controls->Add(this->button29);
			this->panel24->Controls->Add(this->button32);
			this->panel24->Controls->Add(this->button30);
			this->panel24->Controls->Add(this->button28);
			this->panel24->Controls->Add(this->button36);
			this->panel24->Controls->Add(this->button34);
			this->panel24->Controls->Add(this->button37);
			this->panel24->Controls->Add(this->button35);
			this->panel24->Controls->Add(this->button33);
			this->panel24->Location = System::Drawing::Point(975, 155);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(249, 552);
			this->panel24->TabIndex = 33;
			// 
			// button31
			// 
			this->button31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button31.BackgroundImage")));
			this->button31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button31->Location = System::Drawing::Point(140, 227);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(98, 91);
			this->button31->TabIndex = 0;
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button29.BackgroundImage")));
			this->button29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button29->Location = System::Drawing::Point(140, 114);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(98, 91);
			this->button29->TabIndex = 0;
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button32.BackgroundImage")));
			this->button32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button32->Location = System::Drawing::Point(81, 338);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(98, 91);
			this->button32->TabIndex = 0;
			this->button32->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button30.BackgroundImage")));
			this->button30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button30->Location = System::Drawing::Point(17, 227);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(98, 91);
			this->button30->TabIndex = 0;
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button28
			// 
			this->button28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button28.BackgroundImage")));
			this->button28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button28->Location = System::Drawing::Point(17, 114);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(98, 91);
			this->button28->TabIndex = 0;
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button36
			// 
			this->button36->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button36.BackgroundImage")));
			this->button36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button36->Location = System::Drawing::Point(140, 227);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(98, 91);
			this->button36->TabIndex = 0;
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button34
			// 
			this->button34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button34.BackgroundImage")));
			this->button34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button34->Location = System::Drawing::Point(140, 114);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(98, 91);
			this->button34->TabIndex = 0;
			this->button34->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button37.BackgroundImage")));
			this->button37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button37->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button37->Location = System::Drawing::Point(81, 338);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(98, 91);
			this->button37->TabIndex = 0;
			this->button37->UseVisualStyleBackColor = true;
			// 
			// button35
			// 
			this->button35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button35.BackgroundImage")));
			this->button35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button35->Location = System::Drawing::Point(17, 227);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(98, 91);
			this->button35->TabIndex = 0;
			this->button35->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button33.BackgroundImage")));
			this->button33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button33->Location = System::Drawing::Point(17, 114);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(98, 91);
			this->button33->TabIndex = 0;
			this->button33->UseVisualStyleBackColor = true;
			// 
			// pictureBox95
			// 
			this->pictureBox95->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox95.BackgroundImage")));
			this->pictureBox95->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox95->Location = System::Drawing::Point(1001, 219);
			this->pictureBox95->Name = L"pictureBox95";
			this->pictureBox95->Size = System::Drawing::Size(200, 435);
			this->pictureBox95->TabIndex = 26;
			this->pictureBox95->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1262, 789);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel15);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel21);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel18);
			this->Controls->Add(this->panel12);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel8);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"TIC-TAC-TOE";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox100))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox99))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox73))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox78))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox77))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->EndInit();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox79))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox80))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox81))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox82))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox83))->EndInit();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox84))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox85))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox86))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox87))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox88))->EndInit();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox89))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox90))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox91))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox92))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox93))->EndInit();
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox98))->EndInit();
			this->panel23->ResumeLayout(false);
			this->panel23->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox94))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox96))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox97))->EndInit();
			this->panel22->ResumeLayout(false);
			this->panel24->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox95))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion
		bool checkn = false;
		bool turn = true;
		bool checkpress_label = false;
		int count = 0;
		int count2 = 0;
		int count3 = 0;
		int count4 = 0;
		int countturn = 0;
		
	private:

		void UpdateLabelText(std::string labelName, std::string newText,std::string ss)
		{
			// Convert std::string to System::String
			String^ labelNameManaged = gcnew String(labelName.c_str());
			String^ newTextManaged = gcnew String(newText.c_str());

			// Find panel5 (or any other control) where the label might be
			for each (Control ^ control in this->Controls)
			{
				// Check if the control is the panel you are interested in
				if (control->Name == "panel5")
				{
					// Now search inside the panel for the label by name
					for each (Control ^ childControl in control->Controls)
					{
						if (childControl->Name == labelNameManaged)
						{
							// If the child control is a Label, update its text
							Label^ label = dynamic_cast<Label^>(childControl);
							if (label != nullptr)
							{
								if (ss == "X")
									label->ForeColor = System::Drawing::Color::FromArgb(254, 90, 0);
								else if(ss=="O")
									label->ForeColor = System::Drawing::Color::FromArgb(2, 109, 194);
								label->Text = newTextManaged; // Update the label text
								
								return;
							}
							else
							{
								// Handle the case where the control is not a label
								MessageBox::Show("Control found is not a label: " + labelNameManaged);
								return;
							}
						}
					}
				}
			}

			// Handle the case where the label is not found
			MessageBox::Show("Label not found: " + labelNameManaged);
		}
		void UpdateLabelText2(std::string labelName, std::string newText, std::string ss)
		{
			// Convert std::string to System::String
			String^ labelNameManaged = gcnew String(labelName.c_str());
			String^ newTextManaged = gcnew String(newText.c_str());

			// Find panel5 (or any other control) where the label might be
			for each (Control ^ control in this->Controls)
			{
				// Check if the control is the panel you are interested in
				if (control->Name == "panel21")
				{
					// Now search inside the panel for the label by name
					for each (Control ^ childControl in control->Controls)
					{
						if (childControl->Name == labelNameManaged)
						{
							// If the child control is a Label, update its text
							Label^ label = dynamic_cast<Label^>(childControl);
							if (label != nullptr)
							{
								if (ss == "X")
									label->ForeColor = System::Drawing::Color::FromArgb(254, 90, 0);
								else if (ss == "O")
									label->ForeColor = System::Drawing::Color::FromArgb(2, 109, 194);
								label->Text = newTextManaged; // Update the label text

								return;
							}
							else
							{
								// Handle the case where the control is not a label
								MessageBox::Show("Control found is not a label: " + labelNameManaged);
								return;
							}
						}
					}
				}
			}

			// Handle the case where the label is not found
			MessageBox::Show("Label not found: " + labelNameManaged);
		}
		void UpdateLabelText3(std::string panelName, std::string labelName, std::string newText, std::string ss)
		{
			// Convert std::string to System::String
			String^ panelNameManaged = gcnew String(panelName.c_str());
			String^ labelNameManaged = gcnew String(labelName.c_str());
			String^ newTextManaged = gcnew String(newText.c_str());

			// Find the specified panel
			for each (Control ^ control in this->Controls)
			{
				// Check if the control is the panel you are interested in
				if (control->Name == panelNameManaged)
				{
					// Now search inside the panel for the label by name
					for each (Control ^ childControl in control->Controls)
					{
						if (childControl->Name == labelNameManaged)
						{
							// If the child control is a Label, update its text
							Label^ label = dynamic_cast<Label^>(childControl);
							if (label != nullptr)
							{
								if (ss == "X")
									label->ForeColor = System::Drawing::Color::FromArgb(254, 90, 0);
								else if (ss == "O")
									label->ForeColor = System::Drawing::Color::FromArgb(2, 109, 194);
								label->Text = newTextManaged; // Update the label text

								return;
							}
							else
							{
								// Handle the case where the control is not a label
								MessageBox::Show("Control found is not a label: " + labelNameManaged);
								return;
							}
						}
					}
				}
			}

			// Handle the case where the panel or label is not found
			MessageBox::Show("Panel or Label not found: " + panelNameManaged + " / " + labelNameManaged);
		}
		void UpdateTextBoxText(std::string panelName, std::string textBoxName, std::string newText,std::string ss)
		{
			// Convert std::string to System::String
			String^ panelNameManaged = gcnew String(panelName.c_str());
			String^ textBoxNameManaged = gcnew String(textBoxName.c_str());
			String^ newTextManaged = gcnew String(newText.c_str());

			// Find the specified panel
			for each (Control ^ control in this->Controls)
			{
				// Check if the control is the panel you are interested in
				if (control->Name == panelNameManaged)
				{
					// Now search inside the panel for the TextBox by name
					for each (Control ^ childControl in control->Controls)
					{
						if (childControl->Name == textBoxNameManaged)
						{
							// If the child control is a TextBox, update its text
							TextBox^ textBox = dynamic_cast<TextBox^>(childControl);
							if (textBox != nullptr)
							{
								if (ss == "X")
									textBox->ForeColor = System::Drawing::Color::FromArgb(254, 90, 0);
								else if (ss == "O")
									textBox->ForeColor = System::Drawing::Color::FromArgb(2, 109, 194);
								textBox->Text = newTextManaged; // Update the TextBox text
								return;
							}
							else
							{
								// Handle the case where the control is not a TextBox
								MessageBox::Show("Control found is not a TextBox: " + textBoxNameManaged);
								return;
							}
						}
					}
				}
			}

			// Handle the case where the panel or TextBox is not found
			MessageBox::Show("Panel or TextBox not found: " + panelNameManaged + " / " + textBoxNameManaged);
		}

		void AssignLabelHandlers(Control::ControlCollection^ controls, int start, int end, System::EventHandler^ handler) {
			for (int i = start; i <= end; ++i) {
			// Find the label by name
				Label^ label = safe_cast<Label^>(controls->Find("label" + i, true)[0]);

			// Assign the click event handler
				label->Click += handler;

		}
	}
		void AssignLabelHandlerspicture(Control::ControlCollection^ controls, int start, int end, System::EventHandler^ handler) {
			for (int i = start; i <= end; ++i) {
				// Find the label by name
				PictureBox^ pic = safe_cast<PictureBox^>(controls->Find("pictureBox" + i, true)[0]);

				// Assign the click event handler
				pic->Click += handler;

			}
		}
		void AssignLabelHandlerstextbox(Control::ControlCollection^ controls, int start, int end, System::EventHandler^ handler) {
			for (int i = start; i <= end; ++i) {
				// Find the label by name
				TextBox^ tex = safe_cast<TextBox^>(controls->Find("textBox" + i, true)[0]);

				// Assign the click event handler
				tex->Click += handler;

			}
		}
        void AssignLabelHandlerstextbox_keypress(Control::ControlCollection^ controls, int start, int end, System::Windows::Forms::KeyPressEventHandler^ handler) {
			for (int i = start; i <= end; ++i) {
				// Find the label by name
			TextBox^ tex = safe_cast<TextBox^>(controls->Find("textBox" + i, true)[0]);
				// Assign the KeyPress event handler
				tex->KeyPress += handler;
			}
        }
        void AssignLabelHandlersbutton(Control::ControlCollection^ controls, int start, int end, System::EventHandler^ handler) {
				for (int i = start; i <= end; ++i) {
					// Find the button by name
					Button^ buttonclick = safe_cast<Button^>(controls->Find("button" + i, true)[0]);

					// Assign the click event handler
					buttonclick->Click += handler;
				}
        }
		void update_board_X() {
			if (RMo) {
				if (gamenum == 1) {
					if (!boardgm1.is_draw() && !boardgm1.is_win()) {
						player1.getmove(countj, counti);
						boardgm1.update_board(countj, counti, 'X');
						std::string cll = FindKeyByPair(labelIndexMap1, std::make_pair(countj, counti));
						UpdateLabelText3("panel8", "label" + cll, "X", "X");
						if (boardgm1.is_win())
						{
							panel6->BackColor = System::Drawing::Color::FromArgb(254, 90, 0);
							panel6->BringToFront();
							label121->Text = "WON";
							//label101->Text = label98->Text;
						}
						turn = !turn;
						pictureBox73->BringToFront();
						pictureBox70->SendToBack();
						if (RMb && !boardgm1.is_win())
							update_board_O();
					}
				}
				else if (gamenum == 6) {
					if (!boardgm6.is_draw() && !boardgm6.is_win()) {
						player6.getmove(countj, counti);
						if (boardgm6.update_board(countj, counti, 'X')) {
							std::string cll = FindKeyByPair(labelIndexMap6, std::make_pair(countj, counti));
							UpdateLabelText3("panel10", "label" + cll, "X", "X");
							if (boardgm6.is_win())
							{
								panel6->BackColor = System::Drawing::Color::FromArgb(2, 109, 194);
								panel6->BringToFront();
								label121->Text = "WON";
								//label101->Text = label98->Text;
							}
							if (boardgm6.is_draw())
							{
								panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
								panel6->BringToFront();
								//label101->Text = "DRAW";
								label121->Text = "DRAW";
							}
							turn = !turn;
							if (RMb && !boardgm6.is_win())
								update_board_O();
						}
						else
							update_board_X();
					}

				}
				else if (gamenum == 4) {
					player4.getmove(countj, counti);
					if (boardgm4.update_board(countj, counti, player4.get_symbol()[0])) {
						std::string cll = FindKeyByPair(labelIndexMap4, std::make_pair(countj, counti));
						UpdateTextBoxText("panel12", "textBox" + cll, player4.get_symbol(), "X");
						if (boardgm4.is_win())
						{
							
							panel6->BackColor = System::Drawing::Color::FromArgb(254, 90, 0);
							panel6->BringToFront();
							label121->Text = "WON";
							//label101->Text = label98->Text;
							return;
						}
						if (boardgm4.is_draw())
						{
							panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
							panel6->BringToFront();
							//label101->Text = "DRAW";
							label121->Text = "DRAW";
							return;
						}
						turn = !turn;
						if (RMb && !boardgm4.is_win())
							update_board_O();
					}
					else
						update_board_X();


				}
				else if (gamenum == 5) {
					if (!boardgm5.is_draw() && !boardgm5.is_win()) {
						player5.getmove(countj, counti);
						if (boardgm5.update_board(countj, counti, player5.selectedNumber)) {
							player5.del_vec(player5.numberIndex);
							player5.valid = false;
							std::string cll = FindKeyByPair(labelIndexMap5, std::make_pair(countj, counti));
							UpdateLabelText3("panel21", "label" + cll, to_string(player5.selectedNumber), "X");
							if (boardgm5.is_win())
							{
								panel6->BackColor = System::Drawing::Color::FromArgb(254, 90, 0);
								panel6->BringToFront();
								label121->Text = "WON";
								//label101->Text = label98->Text;
							}
							if (boardgm5.is_draw())
							{
								panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
								panel6->BringToFront();
								//label101->Text = "DRAW";
								label121->Text = "DRAW";
							}
							turn = !turn;
							if (RMb && !boardgm5.is_win())
								update_board_O();
						}
						else
							update_board_X();

					}
				}
				else if (gamenum == 2) {
					if (!boardgm2.is_win() && !boardgm2.is_draw()) {

						player2.getmove(countj, counti);
						if (boardgm2.update_board(countj, counti, 'X')) {
							std::string cll = FindKeyByPair(labelIndexMap2, std::make_pair(countj, counti));
							UpdateLabelText3("panel18", "label" + cll, "X", "X");
							if (boardgm2.is_win())
							{

								panel6->BackColor = System::Drawing::Color::FromArgb(254, 90, 0);
								panel6->BringToFront();
								label121->Text = "WON";
								//label101->Text = label98->Text;
								return;
							}
							if (boardgm2.is_draw())
							{
								panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
								panel6->BringToFront();
								//label101->Text = "DRAW";
								label121->Text = "DRAW";
								return;
							}
							turn = !turn;
							if (RMb && !boardgm2.is_win())
								update_board_O();
						}
						else
							update_board_X();

					}
				}
				else if (gamenum == 3) {
					if (!boardgm3.is_draw() && !boardgm3.is_win()) {
						player3.getmove(countj, counti);
						if (boardgm3.update_board(countj, counti, 'X')) {
							std::string cll = FindKeyByPair(labelIndexMap3, std::make_pair(countj, counti));
							UpdateLabelText3("panel15", "label" + cll, "X", "X");
							if (boardgm3.is_win())
							{
								panel6->BackColor = System::Drawing::Color::FromArgb(2, 109, 194);
								panel6->BringToFront();
								label121->Text = "WON";
								//label101->Text = label98->Text;
							}
							if (boardgm3.is_draw())
							{
								panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
								panel6->BringToFront();
								//label101->Text = "DRAW";
								label121->Text = "DRAW";
							}
							countturn++;
							turn = !turn;
							if (RMb && !boardgm3.is_win())
								update_board_O();
						}
						else
							update_board_X();
					}

					}
				else if (gamenum == 8) {
					if (!boardgm8.is_draw() && !boardgm8.is_win()) {
						player8.getmove(countj, counti);
						if (boardgm8.update_board(countj, counti, 'X')) {

							std::string cll = FindKeyByPair(labelIndexMap, std::make_pair(countj, counti));
							UpdateLabelText3("panel4", "label" + cll, "X", "X");
							boardgm8.win();
							mm = boardgm8.showpanel(countj, counti);
							if (mm == 'X') {
								if ((countj == 3 || countj == 4 || countj == 5) && (counti == 3 || counti == 4 || counti == 5)) {
									pictureBox17->BringToFront();
								}
								else if ((countj == 3 || countj == 4 || countj == 5) && (counti == 0 || counti == 1 || counti == 2)) {

									pictureBox15->BringToFront();
								}
								else if ((countj == 3 || countj == 4 || countj == 5) && (counti == 6 || counti == 7 || counti == 8)) {

									pictureBox16->BringToFront();
								}
								else if ((countj == 0 || countj == 1 || countj == 2) && (counti == 3 || counti == 4 || counti == 5)) {
									pictureBox13->BringToFront();
								}
								else if ((countj == 6 || countj == 7 || countj == 8) && (counti == 3 || counti == 4 || counti == 5)) {

									pictureBox20->BringToFront();
								}
								else if ((countj == 0 || countj == 1 || countj == 2) && (counti == 0 || counti == 1 || counti == 2)) {

									pictureBox12->BringToFront();
								}
								else if ((countj == 0 || countj == 1 || countj == 2) && (counti == 6 || counti == 7 || counti == 8)) {
									pictureBox14->BringToFront();
								}
								else if ((countj == 6 || countj == 7 || countj == 8) && (counti == 0 || counti == 1 || counti == 2)) {
									pictureBox18->BringToFront();
								}
								else if ((countj == 6 || countj == 7 || countj == 8) && (counti == 6 || counti == 7 || counti == 8)) {
									pictureBox19->BringToFront();
								}
							}
							if (boardgm8.is_win())
							{
								panel6->BackColor = System::Drawing::Color::FromArgb(254, 90, 0);
								panel6->BringToFront();
								label121->Text = "WON";
								//label101->Text = label98->Text;
								return;
							}
							if (boardgm8.is_draw())
							{
								panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
								panel6->BringToFront();
								//label101->Text = "DRAW";
								label121->Text = "DRAW";
								return;
							}
							turn = !turn;
							if (RMb && !boardgm6.is_win())
								update_board_O();
						}
						else
							update_board_X();
					}

					}
			}
			else if (AIo) {
				if (gamenum == 1) {
					if (!boardgm1.is_draw() && !boardgm1.is_win()) {
						playerAI1.set_board(boardgm1.get_board());
						playerAI1.set_Symbol('X');
						playerAI1.getmove(countj, counti);
						boardgm1.update_board(countj, counti, 'X');
						if (RMb) {
							boardgm1.del_vec(countj, counti, player1.vec);
						}
						std::string cll = FindKeyByPair(labelIndexMap1, std::make_pair(countj, counti));
						UpdateLabelText3("panel8", "label" + cll, "X", "X");
						if (boardgm1.is_win())
						{
							panel6->BackColor = System::Drawing::Color::FromArgb(254, 90, 0);
							panel6->BringToFront();
							label121->Text = "WON";
							//label101->Text = label98->Text;
							return;
						}
						if (boardgm1.is_draw())
						{
							panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
							panel6->BringToFront();
							//label101->Text = "DRAW";
							label121->Text = "DRAW";
							return;
						}
						turn = !turn;
						pictureBox70->BringToFront();
						pictureBox73->SendToBack();
						if (RMb && !boardgm1.is_win()) {
							update_board_O();
						}
						if (AIb && !boardgm1.is_win())
							update_board_O();
					}
				}
				if (gamenum == 6) {
					if (!boardgm6.is_draw() && !boardgm6.is_win()) {

						playerAI6.set_board(boardgm6.get_board());
						playerAI6.set_Symbol('X');
						playerAI6.getmove(countj, counti);
						boardgm6.update_board(countj, counti, 'X');
						std::string cll = FindKeyByPair(labelIndexMap6, std::make_pair(countj, counti));
						UpdateLabelText3("panel10", "label" + cll, "X", "X");
						if (boardgm6.is_win())
						{
							panel6->BackColor = System::Drawing::Color::FromArgb(2, 109, 194);
							panel6->BringToFront();
							label121->Text = "WON";
							//label101->Text = label98->Text;
							return;
						}
						if (boardgm6.is_draw())
						{
							panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
							panel6->BringToFront();
							//label101->Text = "DRAW";
							label121->Text = "DRAW";
							return;
						}
						turn = !turn;
						if (AIb && !boardgm6.is_win())
							update_board_O();
					}
				}
				}

		}
		void update_board_O(){
			if (RMb) {
				if (gamenum == 1) {
					if (!boardgm1.is_draw() && !boardgm1.is_win()) {
						player1.getmove(countj, counti);
						boardgm1.update_board(countj, counti, 'O');
						std::string cll = FindKeyByPair(labelIndexMap1, std::make_pair(countj, counti));

						UpdateLabelText3("panel8", "label" + cll, "O", "O");
						if (boardgm1.is_win())
						{
							panel6->BackColor = System::Drawing::Color::FromArgb(2, 109, 194);
							panel6->BringToFront();
							label121->Text = "WON";
							//label101->Text = label98->Text;
						}
						turn = !turn;
						pictureBox70->BringToFront();
						pictureBox73->SendToBack();
						if (RMo && !boardgm1.is_win())
							update_board_X();
					}
				}
				else if (gamenum == 6) {
					if (!boardgm6.is_draw() && !boardgm6.is_win()) {
						player6.getmove(countj, counti);
						if (boardgm6.update_board(countj, counti, 'O')) {
							std::string cll = FindKeyByPair(labelIndexMap6, std::make_pair(countj, counti));
							UpdateLabelText3("panel10", "label" + cll, "O", "O");
							if (boardgm6.is_win())
							{
								panel6->BackColor = System::Drawing::Color::FromArgb(254, 90, 0);
								panel6->BringToFront();
								label121->Text = "WON";
								//label101->Text = label98->Text;
							}
							if (boardgm6.is_draw())
							{
								panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
								panel6->BringToFront();
								//label101->Text = "DRAW";
								label121->Text = "DRAW";
							}
							turn = !turn;
							if (RMo && !boardgm6.is_win())
								update_board_X();
						}
						else
							update_board_O();
					}

				}
				else if (gamenum == 4) {
					player4.getmove(countj, counti);
					if (boardgm4.update_board(countj, counti, player4.get_symbol()[0])) {
						std::string cll = FindKeyByPair(labelIndexMap4, std::make_pair(countj, counti));
						UpdateTextBoxText("panel12", "textBox" + cll, player4.get_symbol(), "O");
						if (boardgm4.is_win())
						{

							panel6->BackColor = System::Drawing::Color::FromArgb(2, 109, 194);
							panel6->BringToFront();
							label121->Text = "WON";
							//label101->Text = label98->Text;
							return;
						}
						if (boardgm4.is_draw())
						{
							panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
							panel6->BringToFront();
							//label101->Text = "DRAW";
							label121->Text = "DRAW";
							return;
						}
						turn = !turn;
						if (RMo && !boardgm4.is_win())
							update_board_X();

					}
					else
						update_board_O();


				}
				else if (gamenum == 5) {
					if (!boardgm5.is_draw() && !boardgm5.is_win()) {

						player5.getmove(countj, counti);
						if (boardgm5.update_board(countj, counti, player5.selectedNumber)) {
							player5.del_vec(player5.numberIndex);
							player5.valid = true;
							std::string cll = FindKeyByPair(labelIndexMap5, std::make_pair(countj, counti));
							UpdateLabelText3("panel21", "label" + cll, to_string(player5.selectedNumber), "O");
							if (boardgm5.is_win())
							{
								panel6->BackColor = System::Drawing::Color::FromArgb(254, 90, 0);
								panel6->BringToFront();
								label121->Text = "WON";
								//label101->Text = label98->Text;
							}
							if (boardgm5.is_draw())
							{
								panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
								panel6->BringToFront();
								//label101->Text = "DRAW";
								label121->Text = "DRAW";
							}
							turn = !turn;
							if (RMo && !boardgm5.is_win())
								update_board_X();
						}
						else
							update_board_O();

					}
				}
				else if (gamenum == 2) {
					if (!boardgm2.is_win() && !boardgm2.is_draw()) {

						player2.getmove(countj, counti);
						if (boardgm2.update_board(countj, counti, 'O')) {
							std::string cll = FindKeyByPair(labelIndexMap2, std::make_pair(countj, counti));
							UpdateLabelText3("panel18", "label" + cll, "O", "O");
							if (boardgm2.is_win())
							{

								panel6->BackColor = System::Drawing::Color::FromArgb(2, 109, 194);
								panel6->BringToFront();
								label121->Text = "WON";
								//label101->Text = label98->Text;
								return;
							}
							if (boardgm2.is_draw())
							{
								panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
								panel6->BringToFront();
								//label101->Text = "DRAW";
								label121->Text = "DRAW";
								return;
							}
							turn = !turn;
							if (RMo && !boardgm2.is_win())
								update_board_X();
							if (AIo && !boardgm2.is_win())
								update_board_X();
						}
						else
							update_board_O();

					}
				}
				else if (gamenum == 3) {
					if (!boardgm3.is_draw() && !boardgm3.is_win()) {
						player3.getmove(countj, counti);
						if (boardgm3.update_board(countj, counti, 'O')) {
							std::string cll = FindKeyByPair(labelIndexMap3, std::make_pair(countj, counti));
							UpdateLabelText3("panel15", "label" + cll, "O", "O");
							if (boardgm3.is_win())
							{
								panel6->BackColor = System::Drawing::Color::FromArgb(2, 109, 194);
								panel6->BringToFront();
								label121->Text = "WON";
								//label101->Text = label98->Text;
							}
							if (boardgm3.is_draw())
							{
								panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
								panel6->BringToFront();
								//label101->Text = "DRAW";
								label121->Text = "DRAW";
							}
							countturn++;
							turn = !turn;
							if (RMo && !boardgm3.is_win())
								update_board_X();
						}
						else
							update_board_O();
					}

					}
				else if (gamenum == 8) {
					if (!boardgm8.is_draw() && !boardgm8.is_win()) {
						player8.getmove(countj, counti);
						if (boardgm8.update_board(countj, counti, 'O')) {

							std::string cll = FindKeyByPair(labelIndexMap, std::make_pair(countj, counti));
							UpdateLabelText3("panel4", "label" + cll, "O", "O");
							boardgm8.win();
							mm2 = boardgm8.showpanel(countj, counti);
							if (mm2 == 'O') {
								if ((countj == 3 || countj == 4 || countj == 5) && (counti == 3 || counti == 4 || counti == 5)) {
									pictureBox28->BringToFront();
								}
								else if ((countj == 3 || countj == 4 || countj == 5) && (counti == 0 || counti == 1 || counti == 2)) {

									pictureBox23->BringToFront();
								}
								else if ((countj == 3 || countj == 4 || countj == 5) && (counti == 6 || counti == 7 || counti == 8)) {

									pictureBox24->BringToFront();
								}
								else if ((countj == 0 || countj == 1 || countj == 2) && (counti == 3 || counti == 4 || counti == 5)) {
									pictureBox26->BringToFront();
								}
								else if ((countj == 6 || countj == 7 || countj == 8) && (counti == 3 || counti == 4 || counti == 5)) {

									pictureBox29->BringToFront();
								}
								else if ((countj == 0 || countj == 1 || countj == 2) && (counti == 0 || counti == 1 || counti == 2)) {

									pictureBox21->BringToFront();
								}
								else if ((countj == 0 || countj == 1 || countj == 2) && (counti == 6 || counti == 7 || counti == 8)) {
									pictureBox22->BringToFront();
								}
								else if ((countj == 6 || countj == 7 || countj == 8) && (counti == 0 || counti == 1 || counti == 2)) {
									pictureBox25->BringToFront();
								}
								else if ((countj == 6 || countj == 7 || countj == 8) && (counti == 6 || counti == 7 || counti == 8)) {
									pictureBox27->BringToFront();
								}
							}
							if (boardgm8.is_win())
							{
								panel6->BackColor = System::Drawing::Color::FromArgb(2, 109, 194);
								panel6->BringToFront();
								label121->Text = "WON";
								return;
								//label101->Text = label98->Text;
							}
							if (boardgm8.is_draw())
							{
								panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
								panel6->BringToFront();
								//label101->Text = "DRAW";
								label121->Text = "DRAW";
								return;
							}
							turn = !turn;
							if (RMo && !boardgm6.is_win())
								update_board_X();
						}
						else
							update_board_O();
					}

					}
				else if (gamenum == 7) {
					if (!boardgm7.is_win()) {
						player7.getmove(countj, counti);
						if (boardgm7.update_board(countj, counti, 'O')) {
							std::string cll = FindKeyByPair(labelIndexMap3, std::make_pair(countj, counti));
							UpdateLabelText3("panel5", "label" + cll, "O", "O");
							if (boardgm7.is_win())
							{
								panel6->BackColor = System::Drawing::Color::FromArgb(2, 109, 194);
								panel6->BringToFront();
								label121->Text = "WON";
								//label101->Text = label98->Text;
							}
							
							turn = !turn;
							if (RMo && !boardgm7.is_win())
								update_board_X();
						}
						else
							update_board_O();
					}

					}

			}
			else if (AIb) {
				if (gamenum == 1) {
					if (!boardgm1.is_draw() && !boardgm1.is_win()) {
						playerAI1.set_board(boardgm1.get_board());
						playerAI1.set_Symbol('O');
						playerAI1.getmove(countj, counti);
						boardgm1.update_board(countj, counti, 'O');
						if (RMo) {
							boardgm1.del_vec(countj, counti, player1.vec);
						}
						std::string cll = FindKeyByPair(labelIndexMap1, std::make_pair(countj, counti));

						UpdateLabelText3("panel8", "label" + cll, "O", "O");
						if (boardgm1.is_win())
						{
							panel6->BackColor = System::Drawing::Color::FromArgb(2, 109, 194);
							panel6->BringToFront();
							label121->Text = "WON";
							//label101->Text = label98->Text;
							return;
						}
						if (boardgm1.is_draw())
						{
							panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
							panel6->BringToFront();
							//label101->Text = "DRAW";
							label121->Text = "DRAW";
							return;
						}
						turn = !turn;
						if (RMo && !boardgm1.is_win()) {
							update_board_X();
						}
						else if (AIo && !boardgm1.is_win())
							update_board_X();
					}
				}
				else if (gamenum == 6) {
					if (!boardgm6.is_draw() && !boardgm6.is_win()) {
						playerAI6.set_board(boardgm6.get_board());
						playerAI6.set_Symbol('O');
						playerAI6.getmove(countj, counti);
						boardgm6.update_board(countj, counti, 'O');
						std::string cll = FindKeyByPair(labelIndexMap6, std::make_pair(countj, counti));

						UpdateLabelText3("panel10", "label" + cll, "O", "O");
						if (boardgm6.is_win())
						{
							panel6->BackColor = System::Drawing::Color::FromArgb(254, 90, 0);
							panel6->BringToFront();
							label121->Text = "WON";
							return;
						}
						if (boardgm6.is_draw())
						{
							panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
							panel6->BringToFront();
							//label101->Text = "DRAW";
							label121->Text = "DRAW";
							return;
						}
						turn = !turn;
						if (AIo && !boardgm6.is_win())
							update_board_X();
					}
				}
			}
		}
	
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//panel21->Enabled = false;
		label2->Parent = pictureBox99;
		label3->Parent = pictureBox99;

		label10->Hide();
		label11->Hide();
		textBox1->Hide();
		label12->Hide();
		label13->Hide();
		textBox2->Hide();
		label14->Hide();
		button9->Hide();
		label96->Hide();
		label97->Hide();	
		////game8
		//set labels as empty
		for (int i = 15; i <= 95; ++i)
		{
			Label^ label = safe_cast<Label^>(this->Controls->Find("label" + i, true)[0]);
			label->Text="  ";
		}
		//make event click label
		AssignLabelHandlers(this->Controls, 15, 95, gcnew System::EventHandler(this, &MyForm::label_Click));
		//store in map
		for (int i = 15; i <= 95; ++i) {

			labelIndexMap[i] = std::make_pair(counti2, countj2);
			if ((countj2 + 1) % 9 == 0) {
				counti2++;
				countj2 = 0;
			}
			else {
				countj2++;
			}

		}
		
		////game7
		//set labels as empty
		for (int i = 109; i <= 116; ++i)
		{
			Label^ label = safe_cast<Label^>(this->Controls->Find("label" + i, true)[0]);
			label->Text = "  ";
		}
		//make event click label
		AssignLabelHandlers(this->Controls, 105, 120, gcnew System::EventHandler(this, &MyForm::label_Click));
		//store in map
		for (int i = 105; i <= 120; ++i) {
			labelIndexMap7[i] = std::make_pair(counti3, countj3);
            labelIndexMap7inverse[std::make_pair(counti3, countj3)] = i;

			if ((countj3 + 1) % 4 == 0) {
				counti3++;
				countj3 = 0;
			}
			else {
				countj3++;
			}

		}
		//make event click picture box
		AssignLabelHandlerspicture(this->Controls, 31, 62, gcnew System::EventHandler(this, &MyForm::pictureBox_Click));
		// x
		for (int i = 31; i <= 46; ++i) {

			picturebox7_X[i] = std::make_pair(counti3_px, countj3_px);
			if ((countj3_px + 1) % 4 == 0) {
				counti3_px++;
				countj3_px = 0;
			}
			else {
				countj3_px++;
			}

		}
		// o
		for (int i = 47; i <= 62; ++i) {

			picturebox7_O[i] = std::make_pair(counti3_po, countj3_po);
			if ((countj3_po + 1) % 4 == 0) {
				counti3_po++;
				countj3_po = 0;
			}
			else {
				countj3_po++;
			}

		}
		
		////game1
		//make event click label
		AssignLabelHandlers(this->Controls, 126, 140, gcnew System::EventHandler(this, &MyForm::label_Click));

		//set labels as empty
		for (int i = 126; i <= 140; ++i)
		{
			Label^ label = safe_cast<Label^>(this->Controls->Find("label" + i, true)[0]);
			label->Text = "  ";
		}
		label126->Text = "";
		label127->Text = "";
		label129->Text = "";
		label130->Text = "";
		label131->Text = "";
		label135->Text = "";
		//store in map
		for (int i = 126; i <= 140; ++i) {
			labelIndexMap1[i] = std::make_pair(counti1, countj1);
			if ((countj1 + 1) % 5 == 0) {
				counti1++;
				countj1 = 0;
			}
			else {
				countj1++;
			}

		}
		
		///game6
		//make event click label
		AssignLabelHandlers(this->Controls, 144, 152, gcnew System::EventHandler(this, &MyForm::label_Click));
		//set labels as empty
		for (int i = 144; i <= 152; ++i)
		{
			Label^ label = safe_cast<Label^>(this->Controls->Find("label" + i, true)[0]);
			label->Text = "  ";
		}
		//store in map
		for (int i = 144; i <= 152; ++i) {
			labelIndexMap6[i] = std::make_pair(counti6, countj6);
			if ((countj6 + 1) % 3 == 0) {
				counti6++;
				countj6 = 0;
			}
			else {
				countj6++;
			}

		}

		////game4
		AssignLabelHandlerstextbox(this->Controls, 3, 11, gcnew System::EventHandler(this, &MyForm::textBox_Click));
		AssignLabelHandlerstextbox_keypress(this->Controls, 3, 11, gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_KeyPress));

		////game3
		//make event click label
		AssignLabelHandlers(this->Controls, 169, 193, gcnew System::EventHandler(this, &MyForm::label_Click));
		//set labels as empty
		for (int i = 169; i <= 193; ++i)
		{
			Label^ label = safe_cast<Label^>(this->Controls->Find("label" + i, true)[0]);
			label->Text = "  ";
		}
		//store in map
		for (int i = 169; i <= 193; ++i) {
			labelIndexMap3[i] = std::make_pair(counti4, countj4);
			if ((countj4 + 1) % 5 == 0) {
				counti4++;
				countj4 = 0;
			}
			else {
				countj4++;
			}

		}
		////game4
		//store in map
		for (int i = 3; i <= 11; ++i) {
			labelIndexMap4[i] = std::make_pair(counti7, countj7);
			if ((countj7 + 1) % 3 == 0) {
				counti7++;
				countj7 = 0;
			}
			else {
				countj7++;
			}

		}
		//make event click label
		AssignLabelHandlers(this->Controls, 200, 241, gcnew System::EventHandler(this, &MyForm::label_Click));
		//set labels as empty
		for (int i = 200; i <= 241; ++i)
		{
			Label^ label = safe_cast<Label^>(this->Controls->Find("label" + i, true)[0]);
			label->Text = "  ";
		}
		//store in map
		for (int i = 200; i <= 241; ++i) {
			labelIndexMap2[i] = std::make_pair(counti5, countj5);
			if ((countj5 + 1) % 7 == 0) {
				counti5++;
				countj5 = 0;
			}
			else {
				countj5++;
			}

		}
		////game5
		//make event click label
		AssignLabelHandlers(this->Controls, 242, 250, gcnew System::EventHandler(this, &MyForm::label_Click));
		//make event click button
		AssignLabelHandlersbutton(this->Controls, 28, 32, gcnew System::EventHandler(this, &MyForm::button_Click));
		AssignLabelHandlersbutton(this->Controls, 38, 41, gcnew System::EventHandler(this, &MyForm::button_Click));

		//set labels as empty
		for (int i = 242; i <= 250; ++i)
		{
			Label^ label = safe_cast<Label^>(this->Controls->Find("label" + i, true)[0]);
			label->Text = "  ";
		}
		//store in map
		for (int i = 242; i <= 250; ++i) {
			labelIndexMap5[i] = std::make_pair(counti55, countj55);
			if ((countj55 + 1) % 3 == 0) {
				counti55++;
				countj55 = 0;
			}
			else {
				countj55++;
			}

		}
	}
	private: System::Void label_Click(System::Object^ sender, System::EventArgs^ e) {
		Label^ clickedLabel1 = safe_cast<Label^>(sender);
		Label^ clickedLabel6 = safe_cast<Label^>(sender);
		Label^ clickedLabel3 = safe_cast<Label^>(sender);
		Label^ clickedLabel2 = safe_cast<Label^>(sender);
		Label^ clickedLabel5 = safe_cast<Label^>(sender);

		if (gamenum == 8) {
			Label^ clickedLabel = safe_cast<Label^>(sender);
			// Handle the click event here
			String^ labelName = clickedLabel->Name;
			String^ labelNumberStr = labelName->Substring(5);
			int ln = Int32::Parse(labelNumberStr);

			searchInMap(ln, labelIndexMap);

			if (turn) {
				if (boardgm8.update_board(countj, counti, 'X') && !RMo) {
					if (clickedLabel->Text == "  ") {
						pictureBox68->BringToFront();
						pictureBox67->SendToBack();
						
						clickedLabel->Text = "X";
						turn = !turn;
						clickedLabel->Show();
						clickedLabel->ForeColor = System::Drawing::Color::FromArgb(254, 90, 0);
						boardgm8.win();
						mm = boardgm8.showpanel(countj, counti);
						if (mm == 'X') {
							if ((countj == 3 || countj == 4 || countj == 5) && (counti == 3 || counti == 4 || counti == 5)) {
								pictureBox17->BringToFront();
							}
							else if ((countj == 3 || countj == 4 || countj == 5) && (counti == 0 || counti == 1 || counti == 2)) {

								pictureBox15->BringToFront();
							}
							else if ((countj == 3 || countj == 4 || countj == 5) && (counti == 6 || counti == 7 || counti == 8)) {

								pictureBox16->BringToFront();
							}
							else if ((countj == 0 || countj == 1 || countj == 2) && (counti == 3 || counti == 4 || counti == 5)) {
								pictureBox13->BringToFront();
							}
							else if ((countj == 6 || countj == 7 || countj == 8) && (counti == 3 || counti == 4 || counti == 5)) {

								pictureBox20->BringToFront();
							}
							else if ((countj == 0 || countj == 1 || countj == 2) && (counti == 0 || counti == 1 || counti == 2)) {

								pictureBox12->BringToFront();
							}
							else if ((countj == 0 || countj == 1 || countj == 2) && (counti == 6 || counti == 7 || counti == 8)) {
								pictureBox14->BringToFront();
							}
							else if ((countj == 6 || countj == 7 || countj == 8) && (counti == 0 || counti == 1 || counti == 2)) {
								pictureBox18->BringToFront();
							}
							else if ((countj == 6 || countj == 7 || countj == 8) && (counti == 6 || counti == 7 || counti == 8)) {
								pictureBox19->BringToFront();
							}
						}
						if (boardgm8.is_win()) {
							panel6->BackColor = System::Drawing::Color::FromArgb(254, 90, 0);
							panel6->BringToFront();
							label121->Text = "WON";
							//label101->Text = label98->Text;
						}
						if (boardgm8.is_draw())
						{
							panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
							panel6->BringToFront();
							label121->Text = "DRAW";
						}
						if (RMb || AIb && !boardgm8.is_win())
							update_board_O();
					}
				}
				else
				{
					MessageBox::Show("Invalid move. Try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			

			}
			else
			{
					if (boardgm8.update_board(countj, counti, 'O')) {
						if (clickedLabel->Text == "  ") {
							pictureBox67->BringToFront();
							pictureBox68->SendToBack();
							turn = !turn;
							clickedLabel->Text = "O";
							clickedLabel->ForeColor = System::Drawing::Color::FromArgb(2, 109, 194);
							clickedLabel->Show();
							boardgm8.win();
							mm2 = boardgm8.showpanel(countj, counti);
							if (mm2 == 'O') {
								if ((countj == 3 || countj == 4 || countj == 5) && (counti == 3 || counti == 4 || counti == 5)) {
									pictureBox28->BringToFront();
								}
								else if ((countj == 3 || countj == 4 || countj == 5) && (counti == 0 || counti == 1 || counti == 2)) {

									pictureBox23->BringToFront();
								}
								else if ((countj == 3 || countj == 4 || countj == 5) && (counti == 6 || counti == 7 || counti == 8)) {

									pictureBox24->BringToFront();
								}
								else if ((countj == 0 || countj == 1 || countj == 2) && (counti == 3 || counti == 4 || counti == 5)) {
									pictureBox26->BringToFront();
								}
								else if ((countj == 6 || countj == 7 || countj == 8) && (counti == 3 || counti == 4 || counti == 5)) {

									pictureBox29->BringToFront();
								}
								else if ((countj == 0 || countj == 1 || countj == 2) && (counti == 0 || counti == 1 || counti == 2)) {

									pictureBox21->BringToFront();
								}
								else if ((countj == 0 || countj == 1 || countj == 2) && (counti == 6 || counti == 7 || counti == 8)) {
									pictureBox22->BringToFront();
								}
								else if ((countj == 6 || countj == 7 || countj == 8) && (counti == 0 || counti == 1 || counti == 2)) {
									pictureBox25->BringToFront();
								}
								else if ((countj == 6 || countj == 7 || countj == 8) && (counti == 6 || counti == 7 || counti == 8)) {
									pictureBox27->BringToFront();
								}
							}
							if (boardgm8.is_win()) {
								panel6->BackColor = System::Drawing::Color::FromArgb(2, 109, 194);
								panel6->BringToFront();
								label121->Text = "WON";
								//label101->Text = label99->Text;

							}
							if (boardgm8.is_draw())
							{
								panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
								panel6->BringToFront();
								label121->Text = "DRAW";
							}
							if (RMo || AIo && !boardgm8.is_win())
								update_board_X();
						}

					}
					else
					{
						MessageBox::Show("Invalid move. Try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				
			}
		}
		else if (gamenum == 7) {
			if (!boardgm7.is_win()) {
				Label^ clickedLabel7 = safe_cast<Label^>(sender);

				if (turn) {
					if (clickedLabel7->Text == "X") {
						// Handle the click event here

						String^ labelName2 = clickedLabel7->Name;
						String^ labelNumberStr2 = labelName2->Substring(5);
						int ln2 = Int32::Parse(labelNumberStr2);
						searchInMap(ln2, labelIndexMap7);
						boardgm7.currentX = countj;
						boardgm7.currentY = counti;
						std::string available = boardgm7.display_the_availableGame(countj, counti);
						for (int i = 31; i <= 62; ++i)
						{
							PictureBox^ pictureBox = safe_cast<PictureBox^>(this->Controls->Find("pictureBox" + i, true)[0]);
							pictureBox->SendToBack();
						}

						for (size_t i = 0; i < available.size(); i += 2)
						{//114422
							int num = available[i] - '0';
							int num2 = available[i + 1] - '0';

							if (num == 0 && num2 == 0) {
								pictureBox31->BringToFront();

							}
							if (num == 0 && num2 == 1) {
								pictureBox32->BringToFront();
							}
							if (num == 0 && num2 == 2) {
								pictureBox33->BringToFront();
							}
							if (num == 0 && num2 == 3) {
								pictureBox34->BringToFront();
							}
							if (num == 1 && num2 == 0) {
								pictureBox35->BringToFront();
							}
							if (num == 1 && num2 == 1) {
								pictureBox36->BringToFront();
							}
							if (num == 1 && num2 == 2) {
								pictureBox37->BringToFront();
							}
							if (num == 1 && num2 == 3) {
								pictureBox38->BringToFront();
							}
							if (num == 2 && num2 == 0) {
								pictureBox39->BringToFront();
							}
							if (num == 2 && num2 == 1) {
								pictureBox40->BringToFront();
							}
							if (num == 2 && num2 == 2) {
								pictureBox41->BringToFront();
							}
							if (num == 2 && num2 == 3) {
								pictureBox42->BringToFront();
							}
							if (num == 3 && num2 == 0) {
								pictureBox43->BringToFront();
							}
							if (num == 3 && num2 == 1) {
								pictureBox44->BringToFront();
							}
							if (num == 3 && num2 == 2) {
								pictureBox45->BringToFront();
							}
							if (num == 3 && num2 == 3) {
								pictureBox46->BringToFront();
							}

						}
					}
				}
				else {
					if (clickedLabel7->Text == "O") {

						// Handle the click event here
						String^ labelName2 = clickedLabel7->Name;
						String^ labelNumberStr2 = labelName2->Substring(5);
						int ln2 = Int32::Parse(labelNumberStr2);
						searchInMap(ln2, labelIndexMap7);
						boardgm7.currentX = countj;
						boardgm7.currentY = counti;
						std::string available = boardgm7.display_the_availableGame(countj, counti);
						for (int i = 31; i <= 62; ++i)
						{
							PictureBox^ pictureBox = safe_cast<PictureBox^>(this->Controls->Find("pictureBox" + i, true)[0]);
							pictureBox->SendToBack();
						}

						for (size_t i = 0; i < available.size(); i += 2)
						{//114422
							int num = available[i] - '0';
							int num2 = available[i + 1] - '0';

							if (num == 0 && num2 == 0) {
								pictureBox47->BringToFront();

							}
							if (num == 0 && num2 == 1) {
								pictureBox48->BringToFront();
							}
							if (num == 0 && num2 == 2) {
								pictureBox49->BringToFront();
							}
							if (num == 0 && num2 == 3) {
								pictureBox50->BringToFront();
							}
							if (num == 1 && num2 == 0) {
								pictureBox51->BringToFront();
							}
							if (num == 1 && num2 == 1) {
								pictureBox52->BringToFront();
							}
							if (num == 1 && num2 == 2) {
								pictureBox53->BringToFront();
							}
							if (num == 1 && num2 == 3) {
								pictureBox54->BringToFront();
							}
							if (num == 2 && num2 == 0) {
								pictureBox55->BringToFront();
							}
							if (num == 2 && num2 == 1) {
								pictureBox56->BringToFront();
							}
							if (num == 2 && num2 == 2) {
								pictureBox57->BringToFront();
							}
							if (num == 2 && num2 == 3) {
								pictureBox58->BringToFront();
							}
							if (num == 3 && num2 == 0) {
								pictureBox59->BringToFront();
							}
							if (num == 3 && num2 == 1) {
								pictureBox60->BringToFront();
							}
							if (num == 3 && num2 == 2) {
								pictureBox61->BringToFront();
							}
							if (num == 3 && num2 == 3) {
								pictureBox62->BringToFront();
							}

						}
					}
				}
			}

		}
		else if (gamenum == 1) {
			if (!boardgm1.is_win() && !boardgm1.is_draw()) {
				String^ labelName = clickedLabel1->Name;
				String^ labelNumberStr = labelName->Substring(5);
				int ln = Int32::Parse(labelNumberStr);
				searchInMap(ln, labelIndexMap1);
				if (turn) {

					if (clickedLabel1->Text == "  ") {
						// Handle the click event here

						clickedLabel1->Text = "X";
						clickedLabel1->ForeColor = System::Drawing::Color::FromArgb(254, 90, 0);
						turn = !turn;
						pictureBox73->BringToFront();
						pictureBox70->SendToBack();
						boardgm1.update_board(countj, counti, 'X');
						boardgm1.del_vec(countj, counti, player1.vec);
						if (boardgm1.is_win())
						{
							panel6->BackColor = System::Drawing::Color::FromArgb(254, 90, 0);
							panel6->BringToFront();
							label121->Text = "WON";
							//label101->Text = label98->Text;
						}
						if (boardgm1.is_draw()) {
							panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
							panel6->BringToFront();
							label121->Text = "DRAW";
						}
						if (RMb ||AIb && !boardgm1.is_win())
							update_board_O();
					}
					else
					{
						MessageBox::Show("Invalid move. Try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}

				}
				else {
					if (clickedLabel1->Text == "  ") {
						clickedLabel1->Text = "O";
						clickedLabel1->ForeColor = System::Drawing::Color::FromArgb(2, 109, 194);
						turn = !turn;
						pictureBox70->BringToFront();
						pictureBox73->SendToBack();
						boardgm1.update_board(countj, counti, 'O');
						boardgm1.del_vec(countj, counti, player1.vec);

						if (boardgm1.is_win())
						{
							panel6->BackColor = System::Drawing::Color::FromArgb(2, 109, 194);
							panel6->BringToFront();
							label121->Text = "WON";
							//label101->Text = label99->Text;
						}
						if (boardgm1.is_draw()) {
							panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
							panel6->BringToFront();
							label121->Text = "DRAW";
						}
						if (RMo || AIo && !boardgm1.is_win())
							update_board_X();

					}
					else
					{
						MessageBox::Show("Invalid move. Try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
			}
		}
		else if (gamenum == 6) {
			if (!boardgm6.is_win() && !boardgm6.is_draw())
			{
				String^ labelName = clickedLabel6->Name;
				String^ labelNumberStr = labelName->Substring(5);
				int ln = Int32::Parse(labelNumberStr);
				searchInMap(ln, labelIndexMap6);
				if (turn) {
					if (clickedLabel6->Text == "  ") {
						// Handle the click event here

						clickedLabel6->Text = "X";
						clickedLabel6->ForeColor = System::Drawing::Color::FromArgb(254, 90, 0);
						boardgm6.update_board(countj, counti, 'X');

						if (boardgm6.is_win())
						{
							panel6->BackColor = System::Drawing::Color::FromArgb(2, 109, 194);
							panel6->BringToFront();
							label121->Text = "WON";
							//label101->Text = textBox2->Text + "\nis WON";
						}
						if (boardgm6.is_draw())
						{
							panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
							panel6->BringToFront();
							//label101->Text = "DRAW";
							label121->Text = "DRAW";
						}
						turn = !turn;
						pictureBox76->BringToFront();
						pictureBox77->SendToBack();
						if (RMb||AIb && !boardgm6.is_win())
							update_board_O();

					}
					else
					{
						MessageBox::Show("Invalid move. Try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else {
					if (clickedLabel6->Text == "  ") {
						clickedLabel6->Text = "O";
						clickedLabel6->ForeColor = System::Drawing::Color::FromArgb(2, 109, 194);
						boardgm6.update_board(countj, counti, 'O');

						if (boardgm6.is_win())
						{
							panel6->BackColor = System::Drawing::Color::FromArgb(254, 90, 0);
							panel6->BringToFront();
							label121->Text = "WON";
							//label101->Text = textBox1->Text + "\nis WON";
						}
						if (boardgm6.is_draw())
						{
							panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
							panel6->BringToFront();
							//label101->Text = "DRAW";
							label121->Text = "DRAW";

						}

						turn = !turn;
						pictureBox77->BringToFront();
						pictureBox76->SendToBack();
						if (RMo||AIo && !boardgm6.is_win())
							update_board_X();
					}
					else
					{
						MessageBox::Show("Invalid move. Try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
			}

		}
		else if (gamenum == 3) {
			if (countturn!=24) {
				String^ labelName = clickedLabel3->Name;
				String^ labelNumberStr = labelName->Substring(5);
				int ln = Int32::Parse(labelNumberStr);
				searchInMap(ln, labelIndexMap3);
				if (turn && countturn != 24) {
					if (clickedLabel3->Text == "  ") {
						// Handle the click event here

						clickedLabel3->Text = "X";
						clickedLabel3->ForeColor = System::Drawing::Color::FromArgb(254, 90, 0);
						boardgm3.update_board(countj, counti, 'X');

						turn = !turn;
						pictureBox85->BringToFront();
						pictureBox86->SendToBack();
						countturn++;
						if (RMb || AIb && !boardgm3.is_win())
							update_board_O();
					}
					else
					{
						MessageBox::Show("Invalid move. Try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else if (!turn && countturn != 24) {
					if (clickedLabel3->Text == "  ") {
						clickedLabel3->Text = "O";
						clickedLabel3->ForeColor = System::Drawing::Color::FromArgb(2, 109, 194);
						boardgm3.update_board(countj, counti, 'O');

						turn = !turn;
						pictureBox86->BringToFront();
						pictureBox85->SendToBack();
						countturn++;
						if (RMo || AIo && !boardgm3.is_win())
							update_board_X();
					}
					else
					{
						MessageBox::Show("Invalid move. Try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				if (countturn == 24) {
					if (boardgm3.is_win()) {
						panel6->BackColor = System::Drawing::Color::FromArgb(254, 90, 0);
						panel6->BringToFront();
						label121->Text = "WON";
					}
					else if (boardgm3.is_draw()) {
						
						panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
						panel6->BringToFront();
						label121->Text = "DRAW";
					}
					else {
						panel6->BackColor = System::Drawing::Color::FromArgb(2, 109, 194);
						panel6->BringToFront();
						//label101->Text = textBox2->Text + "\nis WON";
					}
				}
			}
		}
		else if (gamenum == 2) {
			if (!boardgm2.is_win() && !boardgm2.is_draw()) {
				String^ labelName = clickedLabel2->Name;
				String^ labelNumberStr = labelName->Substring(5);
				int ln = Int32::Parse(labelNumberStr);
				searchInMap(ln, labelIndexMap2);
				if (turn) {
					if (clickedLabel2->Text == "  ") {
						// Handle the click event here
						if (boardgm2.update_board(countj, counti, 'X')) {
							clickedLabel2->Text = "X";
							clickedLabel2->ForeColor = System::Drawing::Color::FromArgb(254, 90, 0);


							if (boardgm2.is_win())
							{
								panel6->BackColor = System::Drawing::Color::FromArgb(254, 90, 0);
								panel6->BringToFront();
								label121->Text = "WON";
								//label101->Text = textBox1->Text + "\nis WON";
							}
							if (boardgm2.is_draw())
							{
								panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
								panel6->BringToFront();
								//label101->Text = "DRAW";
								label121->Text = "DRAW";

							}


							turn = !turn;
							pictureBox90->BringToFront();
							pictureBox91->SendToBack();
							if (RMb || AIb && !boardgm6.is_win())
								update_board_O();

						}
						else
						{
							MessageBox::Show("Invalid move. Try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						}




					}
					else
					{
						MessageBox::Show("Invalid movessdsdsd. Try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}



				}
				else {
					if (clickedLabel2->Text == "  ") {
						if (boardgm2.update_board(countj, counti, 'O')) {
							clickedLabel2->Text = "O";
							clickedLabel2->ForeColor = System::Drawing::Color::FromArgb(2, 109, 194);

							if (boardgm2.is_win())
							{
								panel6->BackColor = System::Drawing::Color::FromArgb(2, 109, 194);
								panel6->BringToFront();
								label121->Text = "WON";
								//label101->Text = textBox1->Text + "\nis WON";
							}
							if (boardgm2.is_draw())
							{
								panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
								panel6->BringToFront();
								//label101->Text = "DRAW";
								label121->Text = "DRAW";

							}

							turn = !turn;
							pictureBox91->BringToFront();
							pictureBox90->SendToBack();
							if (RMo || AIo && !boardgm6.is_win())
								update_board_X();
						}
						else
						{
							MessageBox::Show("Invalid move. Try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
					}
					else
					{
						MessageBox::Show("Invalid movesadsa. Try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
			}
		}
		else if (gamenum == 5) {
			if (!boardgm5.is_win() && !boardgm5.is_draw()) {

				String^ labelName = clickedLabel5->Name;
				String^ labelNumberStr = labelName->Substring(5);
				int ln = Int32::Parse(labelNumberStr);
				searchInMap(ln, labelIndexMap5);
				if (turn) {

					checkpress_label = true;
					panel24->BringToFront();

				}
				else {

					panel22->BringToFront();

					checkpress_label = true;

				}
			}
		}
	}
	private: System::Void pictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
		if (gamenum == 7) {
			if (turn) {
				PictureBox^ pic7 = safe_cast<PictureBox^>(sender);
				String^ picname = pic7->Name;
				String^ picStr2 = picname->Substring(10);
				int ln3 = Int32::Parse(picStr2);
				std::pair<int, int> pairToSearch(countj,counti);
				std::string current_label = FindKeyByPair(labelIndexMap7, pairToSearch);
				UpdateLabelText("label" + current_label, "","");
				searchInMap(ln3, picturebox7_X);
				boardgm7.update_board(countj, counti, 'X');
				searchInMapinvers(countj, counti);
				std::string cs = "label" + labelName77;
				UpdateLabelText(cs,"X","X");
				pic7->SendToBack();
				pictureBox64->BringToFront();
				pictureBox63->SendToBack();
				turn = !turn;
				for (int i = 31; i <= 62; ++i)
				{
					PictureBox^ pictureBox = safe_cast<PictureBox^>(this->Controls->Find("pictureBox" + i, true)[0]);
					pictureBox->SendToBack();
				}
				if (boardgm7.is_win())
				{
					panel6->BackColor = System::Drawing::Color::FromArgb(254, 90, 0);
					panel6->BringToFront();
					label121->Text = "WON";
					//label101->Text = label98->Text;
					
				}
				if (RMb || AIb && !boardgm7.is_win())
					update_board_O();
			}
			else {
				PictureBox^ pic7 = safe_cast<PictureBox^>(sender);
				String^ picname = pic7->Name;
				String^ picStr2 = picname->Substring(10);
				int ln3 = Int32::Parse(picStr2);
				std::pair<int, int> pairToSearch(countj, counti);
				std::string current_label = FindKeyByPair(labelIndexMap7, pairToSearch);
				UpdateLabelText("label" + current_label, "","");
				searchInMap(ln3, picturebox7_O);
				boardgm7.update_board(countj, counti, 'O');
				searchInMapinvers(countj, counti);
				std::string cs = "label" + labelName77;
				UpdateLabelText(cs, "O","O");
				pic7->SendToBack();
				pictureBox63->BringToFront();
				pictureBox64->SendToBack();
				turn = !turn;
				for (int i = 31; i <= 62; ++i)
				{
					PictureBox^ pictureBox = safe_cast<PictureBox^>(this->Controls->Find("pictureBox" + i, true)[0]);
					pictureBox->SendToBack();
				}
				if (boardgm7.is_win())
				{
					panel6->BackColor = System::Drawing::Color::FromArgb(2, 109, 194);
					panel6->BringToFront();
					label121->Text = "WON";
					//label101->Text = label99->Text ;
					
				}

			}
		}
	}
	private: System::Void HandleButtonClick(Button^ clickedButton) {
		if (turn) {
			std::string cl = FindKeyByPair(labelIndexMap5, std::make_pair(countj, counti));
			if (clickedButton->Name == "button28") {
				UpdateLabelText2("label" + cl, "1", "X");
				boardgm5.update_board(countj, counti, 1);
				player5.del_vec(0);
				button28->SendToBack();
				turn = !turn;

			}
			else if (clickedButton->Name == "button29") {
				UpdateLabelText2("label" + cl, "3", "X");
				boardgm5.update_board(countj, counti, 3);
				player5.del_vec(2);
				button29->SendToBack();
				turn = !turn;

			}
			else if (clickedButton->Name == "button30") {
				UpdateLabelText2("label" + cl, "5", "X");
				boardgm5.update_board(countj, counti, 5);
				player5.del_vec(4);
				button30->SendToBack();
				turn = !turn;

			}
			else if (clickedButton->Name == "button31") {
				UpdateLabelText2("label" + cl, "7", "X");
				boardgm5.update_board(countj, counti, 7);
				player5.del_vec(6);
				button31->SendToBack();
				turn = !turn;

			}
			else if (clickedButton->Name == "button32") {
				UpdateLabelText2("label" + cl, "9", "X");
				boardgm5.update_board(countj, counti, 9);
				player5.del_vec(8);
				button32->SendToBack();
				turn = !turn;

			}
			player5.valid = false;
			pictureBox95->BringToFront();
			pictureBox96->SendToBack();
			checkpress_label = false;
			panel24->SendToBack();
			if (boardgm5.is_win()) {
				panel6->BackColor = System::Drawing::Color::FromArgb(254, 90, 0);
				panel6->BringToFront();
				label121->Text = "WON";
			}
			else if (boardgm5.is_draw()) {
				panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
				panel6->BringToFront();
				label121->Text = "DRAW";
			}
			if (RMb || AIb && !boardgm5.is_win()) {
				update_board_O();
			}
		}
		else {
			std::string cl = FindKeyByPair(labelIndexMap5, std::make_pair(countj, counti));
			if (clickedButton->Name == "button38") {
				UpdateLabelText2("label" + cl, "2", "O");
				boardgm5.update_board(countj, counti, 2);
				player5.del_vec(1);
				button38->SendToBack();
				turn = !turn;

			}
			else if (clickedButton->Name == "button39") {
				UpdateLabelText2("label" + cl, "4", "O");
				boardgm5.update_board(countj, counti, 4);
				player5.del_vec(3);
				button39->SendToBack();
				turn = !turn;

			}
			else if (clickedButton->Name == "button40") {
				UpdateLabelText2("label" + cl, "6", "O");
				boardgm5.update_board(countj, counti, 6);
				player5.del_vec(5);
				button40->SendToBack();
				turn = !turn;

			}
			else if (clickedButton->Name == "button41") {
				UpdateLabelText2("label" + cl, "8", "O");
				boardgm5.update_board(countj, counti, 8);
				player5.del_vec(7);
				button41->SendToBack();
				turn = !turn;

			}
			player5.valid = true;
			pictureBox96->BringToFront();
			pictureBox95->SendToBack();
			panel22->SendToBack();
			checkpress_label = false;
			if (boardgm5.is_win()) {
				panel6->BackColor = System::Drawing::Color::FromArgb(2, 109, 194);
				panel6->BringToFront();
				label121->Text = "WON";
			}
			else if (boardgm5.is_draw()) {
				panel6->BackColor = System::Drawing::Color::FromArgb(43, 43, 43);
				panel6->BringToFront();
				label121->Text = "DRAW";
			}
			if (RMo || AIo && !boardgm5.is_win())
				update_board_X();
		}
		
	}
	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checkpress_label) {
			Button^ clickedButton = safe_cast<Button^>(sender);
			HandleButtonClick(clickedButton);
			
		}
		else {
			MessageBox::Show("Please choose the palace first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}
	private: System::Void textBox_Click(System::Object^ sender, System::EventArgs^ e) {
		//TextBox^ clickedTextBox = safe_cast<TextBox^>(sender);
		//if (gamenum == 4) {
		//	if (turn) {
		//		if (clickedTextBox->Text == "") {
		//			clickedTextBox->MaxLength = 1;
		//			clickedTextBox->ForeColor = System::Drawing::Color::FromArgb(254, 90, 0);
		//			turn = !turn;
		//			/*if (boardgm4.is_win())
		//			{
		//				panel6->BackColor = System::Drawing::Color::FromArgb(254, 90, 0);
		//				panel6->BringToFront();
		//				label101->Text = textBox1->Text + "\nis WON";
		//			}*/
		//		}
		//		else
		//		{
		//			MessageBox::Show("Invalid move. Try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		//		}
		//	}
		//	else {
		//		if (clickedTextBox->Text == "") {
		//			
		//			clickedTextBox->MaxLength = 1;
		//			clickedTextBox->ForeColor = System::Drawing::Color::FromArgb(2,109,194);
		//			turn = !turn;
		//			
		//			/*if (boardgm4.is_win())
		//			{
		//				panel6->BackColor = System::Drawing::Color::FromArgb(2, 109, 194);
		//				panel6->BringToFront();
		//				label101->Text = textBox2->Text + "\nis WON";
		//			}*/
		//		}
		//		else
		//		{
		//			MessageBox::Show("Invalid move. Try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		//		}
		//	}
		//}

	
	}
	private: System::Void textBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	TextBox^ clickedTextBox = safe_cast<TextBox^>(sender);
	if (gamenum == 4) {
		
		if (clickedTextBox->Text->Length >= 1 && e->KeyChar != (char)Keys::Back) {
			// Prevent entering more than one character
			e->Handled = true;
			return;
		}

		if (turn) {
			if (clickedTextBox->Text == "") {
				
				// Handle the click event here
				String^ labelName = clickedTextBox->Name;
				String^ labelNumberStr = labelName->Substring(7);
				int ln = Int32::Parse(labelNumberStr);

				searchInMap(ln, labelIndexMap4);
				// Check if the entered character is a letter (a-z or A-Z)
				if (!Char::IsLetter(e->KeyChar) && e->KeyChar != (char)Keys::Back) {
					// If not, handle the event to prevent the character from being entered
					e->Handled = true;
				}
				else {
					// Convert the character to uppercase
					if (e->KeyChar == 'w' || e->KeyChar == 'W')
						e->KeyChar = Char::ToLower(e->KeyChar);
					else
						e->KeyChar = Char::ToUpper(e->KeyChar);
					clickedTextBox->ForeColor = System::Drawing::Color::FromArgb(254, 90, 0);
                    char txx = e->KeyChar;
                    boardgm4.update_board(countj, counti, txx);
                    // Disable the TextBox and toggle the turn
					//clickedTextBox->Enabled = false;
					turn = !turn;
					pictureBox80->BringToFront();
					pictureBox81->SendToBack();
					if (boardgm4.is_win())
					{
						panel6->BackColor = System::Drawing::Color::FromArgb(254, 90, 0);
						panel6->BringToFront();
						label121->Text = "WON";
						
					}
					if (RMb && !boardgm4.is_win())
						update_board_O();
				}
			}
		}
		else {
			if (clickedTextBox->Text == "") {
				// Handle the click event here
				String^ labelName = clickedTextBox->Name;
				String^ labelNumberStr = labelName->Substring(7);
				int ln = Int32::Parse(labelNumberStr);

				searchInMap(ln, labelIndexMap4);
				// Check if the entered character is a letter (a-z or A-Z)
				if (!Char::IsLetter(e->KeyChar) && e->KeyChar != (char)Keys::Back) {
					// If not, handle the event to prevent the character from being entered
					e->Handled = true;
				}
				else {
					// Convert the character to uppercase
					if (e->KeyChar == 'w' || e->KeyChar == 'W')
						e->KeyChar = Char::ToLower(e->KeyChar);
					else
						e->KeyChar = Char::ToUpper(e->KeyChar);
					clickedTextBox->ForeColor = System::Drawing::Color::FromArgb(2, 109, 194);
					char txx2 = e->KeyChar;

					boardgm4.update_board(countj, counti, txx2);
					// Disable the TextBox and toggle the turn
					//clickedTextBox->Enabled = false;
					turn = !turn;
					pictureBox81->BringToFront();
					pictureBox80->SendToBack();
					if (boardgm4.is_win())
					{
						panel6->BackColor = System::Drawing::Color::FromArgb(2, 109, 194);
						panel6->BringToFront();
						label121->Text = "WON";
					}
					if (RMo && !boardgm4.is_win())
						update_board_X();
				}
			}
		}
	}
}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		gamenum = 8;
		gm8 = true;
		check();
		label14->Show();
		label14->Text = "\"Ultimate Tic-Tac-Toe\"";
		label14->Location = System::Drawing::Point(450, 140);
		button9->Show();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		gm3 = true;
		gamenum = 2;
		check();
		label14->Show();
		label14->Text = "\"Four-in-a-row\"";
		label14->Location = System::Drawing::Point(500, 140);
		button9->Show();

	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		gamenum = 3;
		gm5 = true;
		check();
		label14->Show();
		label14->Text = "\"5 x 5 Tic-Tac-Toe\"";
		label14->Location = System::Drawing::Point(480, 140);
		button9->Show();


	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		gm6 = true;
		gamenum = 4;
		check();
		label14->Show();
		label14->Text = "\"Word Tic-Tac-Toe\"";
		label14->Location = System::Drawing::Point(460, 140);
		button9->Show();

	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		// Get the Graphics object
		Graphics^ g = e->Graphics;
		g->SmoothingMode = Drawing2D::SmoothingMode::AntiAlias;

		// Create a Pen object for the line
		Pen^ pen = gcnew Pen(Color::White, 5); // Blue color, 3-pixel thickness

		// Calculate the middle of the panel
		int middleX = this->panel1->Width / 2;

		// Draw a line in the middle of the panel
		g->DrawLine(pen, middleX, 700, middleX, 250);

		// Dispose the Pen object
		delete pen;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		gamenum = 7;
		gm7 = true;
		check();
		label14->Show();
		label14->Text = "\"4 x 4 Tic-Tac-Toe\"";
		label14->Location = System::Drawing::Point(480, 140);
		button9->Show();

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		gm4 = true;
		gamenum = 6;
		check();
		label14->Show();
		label14->Text = "\"Misere Tic-Tac-Toe\"";
		label14->Location = System::Drawing::Point(455, 140);
		button9->Show();

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		gm1 = true;
		gamenum = 1;
		check();
		label14->Show();
		label14->Text = "\"Pyramic Tic-Tac-Toe\"";
		label14->Location = System::Drawing::Point(430, 140);
		button9->Show();

	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		panel1->BringToFront();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		panel2->BringToFront();
		button9->Hide();
		gm1 = gm1 = gm3 = gm4 = gm5 = gm6 = gm7 = gm8 = false;
		label14->Hide();
	}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	panel3->BringToFront();
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	// Get the Graphics object
	Graphics^ g2 = e->Graphics;
	g2->SmoothingMode = Drawing2D::SmoothingMode::AntiAlias;

	// Create a Pen object for the line
	Pen^ pen = gcnew Pen(Color::White, 4); // Blue color, 3-pixel thickness

	// Calculate the middle of the panel
	int middleX = this->panel1->Width / 2;

	// Draw a line in the middle of the panel
	g2->DrawLine(pen, middleX-50, 550, middleX+80, 250);

	// Dispose the Pen object
	delete pen;
}
private: System::Void pictureBox99_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	// Get the Graphics object
	Graphics^ g2 = e->Graphics;
	g2->SmoothingMode = Drawing2D::SmoothingMode::AntiAlias;

	// Create a Pen object for the line
	Pen^ pen = gcnew Pen(Color::White, 4); // Blue color, 3-pixel thickness

	// Calculate the middle of the panel
	int middleX = this->panel1->Width / 2;

	// Draw a line in the middle of the panel
	g2->DrawLine(pen, middleX - 50, 550, middleX + 80, 250);

	// Dispose the Pen object
	delete pen;
}

private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) { 
	//HU SHOW
	if (count == 0)
	{
		HUo = true;
		AIo = false;
		checkplayerO();
		label7->Hide();
		label96->Hide();
		label4->Hide();
		label6->Show();
		label12->Show();
		label13->Show();
		textBox2->Show();
		pictureBox4->BringToFront();
		
	
	}
	//RM SHOW
	else
	{
		RMo = true;
		HUo = false;
		checkplayerO();
		count2++;
		label4->Hide();
		label6->Hide();
		label12->Hide();
		label13->Hide();
		textBox2->Hide();
		label7->Show();
		label96->Show();
		pictureBox5->BringToFront();
	}
	
	count++;
}

private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	//AI SHOW
	if (count2 == 0)
	{
		AIo = true;
		checkplayerO();
		label4->Show();
		label7->Hide();
		label6->Hide();
		label12->Hide();
		label13->Hide();
		textBox2->Hide();
		label96->Hide();
		pictureBox4->SendToBack();
		count = 0;

	}
	//HU SHOW
	else
	{
		HUo = true;
		AIo = false;
		checkplayerO();
		label4->Hide();
		label7->Hide();
		label96->Hide();
		label6->Show();
		label12->Show();
		label13->Show();
		textBox2->Show();
		pictureBox3->BringToFront();
		count2 = 0;
	}

	
}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
	//HU SHOW
	if (count3 == 0)
	{
		HUb = true;
		AIb = false;
		checkplayerB();
		label9->Hide();
		label5->Hide();
		label97->Hide();
		label8->Show();
		label10->Show();
		label11->Show();
		textBox1->Show();
		pictureBox10->BringToFront();


	}
	//RM SHOW
	else
	{
		RMb = true;
		HUb = false;
		checkplayerB();
		count4++;
		label5->Hide();
		label8->Hide();
		label10->Hide();
		label11->Hide();
		textBox1->Hide();
		label9->Show();
		label97->Show();

		pictureBox9->BringToFront();
	}

	count3++;

}
private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e) {
	//AI SHOW
	if (count4 == 0)
	{
		AIb = true;
		checkplayerB();
		label9->Hide();
		label8->Hide();
		label10->Hide();
		label11->Hide();
		textBox1->Hide();
		label96->Hide();
		label97->Hide();
		label5->Show();
		pictureBox10->SendToBack();
		count3 = 0;

	}
	//HU SHOW
	else
	{
		HUb = true;
		AIb = false;
		checkplayerB();
		label5->Hide();
		label9->Hide();
		label97->Hide();
		label8->Show();
		label10->Show();
		label11->Show();
		textBox1->Show();
		pictureBox8->BringToFront();
		count4 = 0;
	}
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->BringToFront();
	pictureBox3->BringToFront();
	pictureBox8->BringToFront();
	
	//default counter
	count = 0;
	count2 = 0;	
	count3 = 0;
	count4 = 0;
	//default settings
	label10->Hide();
	label11->Hide();
	textBox1->Hide();
	label12->Hide();
	label13->Hide();
	textBox2->Hide();
	label96->Hide();
	label97->Hide();
	//AI return for blue 
	label5->Show();
	label9->Hide();
	label8->Hide();
	label10->Hide();
	label11->Hide();
	textBox1->Hide();
	pictureBox10->SendToBack();
	//AI return for orange
	label4->Show();
	label7->Hide();
	label6->Hide();
	label12->Hide();
	label13->Hide();
	textBox2->Hide();
	pictureBox4->SendToBack();
	//clear textboxs
	textBox2->Text="PLAYER1";
	textBox1->Text="PLAYER2";
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox1->MaxLength = 10;
	textBox1->Multiline = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	gm2 = true;
	gamenum = 5;
	check();
	label14->Show();
	label14->Text = "\"Numerical Tic-Tac-Toe\"";
	label14->Location = System::Drawing::Point(424, 140);
	button9->Show();

}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (AIo) {
		label98->Text = "AI-PLAYER (X)";
	}
	else if (HUo)
		{
			label98->Text = textBox2->Text + " (X)";
		}
	else if (RMo)
		{
			label98->Text = label96->Text + " (X)";
		}
	if (AIb)
		{
			label99->Text = "AI-PLAYER (O)";
		}
	else if (HUb)
		{
			label99->Text = textBox1->Text + " (O)";
		}
	else if (RMb) {
			label99->Text = label97->Text + " (O)";
		}
	
	if (gamenum==1) {
		panel8->BringToFront();
		if(RMo||AIo)
			update_board_X();

	}
	else if (gamenum==5) {
		panel21->BringToFront();
		if (RMo || AIo)
			update_board_X();
	}
	else if (gamenum == 2) {
		panel18->BringToFront();
		if (RMo || AIo)
			update_board_X();
	}
	else if (gamenum==6) {
		panel10->BringToFront();
		if (RMo||AIo)
			update_board_X();
	}
	else if (gamenum==3) {
		panel15->BringToFront();
		if (RMo || AIo)
			update_board_X();
	}
	else if (gamenum==4) {
		panel12->BringToFront();
		if (RMo)
			update_board_X();
	}
	else if (gamenum==7) {
		panel5->BringToFront();
	}
	else if (gamenum==8) {
		panel4->BringToFront();
		if (RMo || AIo)
			update_board_X();

	}
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result =
		MessageBox::Show("DO YOU WANT TO END GAME?",
			"Confirmation",
			MessageBoxButtons::OKCancel,
			MessageBoxIcon::Warning);

	// Check which button was pressed
	if (result == System::Windows::Forms::DialogResult::OK)
	{
		
		pictureBox67->BringToFront();
		pictureBox68->SendToBack();
		//send to back pictruebox
		pictureBox12->SendToBack();
		pictureBox13->SendToBack();
		pictureBox14->SendToBack();
		pictureBox15->SendToBack();
		pictureBox16->SendToBack();
		pictureBox17->SendToBack();
		pictureBox18->SendToBack();
		pictureBox19->SendToBack();
		pictureBox20->SendToBack();
		pictureBox21->SendToBack();
		pictureBox22->SendToBack();
		pictureBox23->SendToBack();
		pictureBox24->SendToBack();
		pictureBox25->SendToBack();
		pictureBox26->SendToBack();
		pictureBox27->SendToBack();
		pictureBox28->SendToBack();
		pictureBox29->SendToBack();

		panel1->BringToFront();
		turn = true;
		for (int i = 15; i <= 95; ++i)
		{
			Label^ label = safe_cast<Label^>(this->Controls->Find("label" + i, true)[0]);
			label->Text = "  ";
		}
		boardgm8.reset_board();
		pictureBox2_Click(sender, e);
		set_deafult();
	}
	
}
private: System::Void button12_MouseEnter(System::Object^ sender, System::EventArgs^ e) {

	button13->BringToFront();
}
private: System::Void button13_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button12->BringToFront();
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->BringToFront();
}
private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
}
private: System::Void button15_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	button16->BringToFront();
}
private: System::Void button16_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button15->BringToFront();
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result =
		MessageBox::Show("DO YOU WANT TO END GAME?",
			"Confirmation",
			MessageBoxButtons::OKCancel,
			MessageBoxIcon::Warning);

	// Check which button was pressed
	if (result == System::Windows::Forms::DialogResult::OK)
	{
		pictureBox64->BringToFront();
		pictureBox63->SendToBack();
		turn = true;
		panel1->BringToFront();
		gamenum = 0;
		for (int i = 109; i <= 116; ++i)
		{
			Label^ label = safe_cast<Label^>(this->Controls->Find("label" + i, true)[0]);
			label->Text = "  ";
		}
		label105->Text = "O";
		label105->ForeColor = System::Drawing::Color::FromArgb(2, 109, 194);
		label106->Text = "X";
		label106->ForeColor = System::Drawing::Color::FromArgb(254, 90, 0);
		label107->Text = "O";
		label107->ForeColor = System::Drawing::Color::FromArgb(2, 109, 194);
		label108->Text = "X";
		label108->ForeColor = System::Drawing::Color::FromArgb(254, 90, 0);
		label117->Text = "X";
		label117->ForeColor = System::Drawing::Color::FromArgb(254, 90, 0);
		label118->Text = "O";
		label108->ForeColor = System::Drawing::Color::FromArgb(2, 109, 194);
		label119->Text = "X";
		label119->ForeColor = System::Drawing::Color::FromArgb(254, 90, 0);
		label120->Text = "O";
		label120->ForeColor = System::Drawing::Color::FromArgb(2, 109, 194);

		for (int i = 31; i <= 62; ++i) {
			
			PictureBox^ pictt = safe_cast<PictureBox^>(this->Controls->Find("pictureBox" + i, true)[0]);
			pictt->SendToBack();

		}
		boardgm7.reset_board();
		pictureBox2_Click(sender, e);
		set_deafult();
	}
}
private: System::Void pictureBox39_Click(System::Object^ sender, System::EventArgs^ e) {
	label114->BringToFront();
}
private: System::Void label98_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (gamenum == 7) {
		this->label103->Text = this->label98->Text;
	}
	else if (gamenum == 1)
	{
		this->label124->Text = this->label98->Text;
	}
	else if (gamenum == 3)
	{
		this->label167->Text = this->label98->Text;
	}
	else if (gamenum == 2)
	{
		this->label155->Text = this->label98->Text;
	}
	else if (gamenum == 5)
	{
		this->label273->Text = this->label98->Text;
	}
}
private: System::Void label99_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (gamenum == 7) {
		this->label102->Text = this->label99->Text;
		int newXPosition = (panel7->Width - label102->Width) / 2;

		// Set the new location of the label
		label102->Location = System::Drawing::Point(newXPosition, 31);
	}
	else if (gamenum == 1)
	{
		this->label125->Text = this->label99->Text;
	}
	else if (gamenum == 3)
	{
		this->label165->Text = this->label99->Text;
	}
	else if (gamenum == 2)
	{
		this->label156->Text = this->label99->Text;
	}
	else if (gamenum == 5)
	{
		this->label271->Text = this->label99->Text;
	}
}
private: System::Void button17_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	button18->BringToFront();
}
private: System::Void button18_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button17->BringToFront();
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result =
		MessageBox::Show("DO YOU WANT TO END GAME?",
			"Confirmation",
			MessageBoxButtons::OKCancel,
			MessageBoxIcon::Warning);

	// Check which button was pressed
	if (result == System::Windows::Forms::DialogResult::OK)
	{
		panel1->BringToFront();
		pictureBox70->BringToFront();
		pictureBox73->SendToBack();

		turn = true;
		for (int i = 126; i <= 140; ++i)
		{
			Label^ label = safe_cast<Label^>(this->Controls->Find("label" + i, true)[0]);
			label->Text = "  ";
		}
		boardgm1.reset_board();
		player1.reset_vec();
		pictureBox2_Click(sender, e);
		set_deafult();
		playerAI1.reset();
	}
}
private: System::Void button19_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	button20->BringToFront();
}
private: System::Void button20_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button19->BringToFront();
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result =
		MessageBox::Show("DO YOU WANT TO END GAME?",
			"Confirmation",
			MessageBoxButtons::OKCancel,
			MessageBoxIcon::Warning);

	// Check which button was pressed
	if (result == System::Windows::Forms::DialogResult::OK)
	{
		panel1->BringToFront();
		pictureBox77->BringToFront();
		pictureBox76->SendToBack();
		turn = true;
		for (int i = 144; i <= 152; ++i)
		{
			Label^ label = safe_cast<Label^>(this->Controls->Find("label" + i, true)[0]);
			label->Text = "  ";
		}
		boardgm6.reset_board();
		playerAI6.reset();
		pictureBox2_Click(sender, e);
		set_deafult();
	}
}

private: System::Void button23_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	button24->BringToFront();
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result =
		MessageBox::Show("DO YOU WANT TO END GAME?",
			"Confirmation",
			MessageBoxButtons::OKCancel,
			MessageBoxIcon::Warning);

	// Check which button was pressed
	if (result == System::Windows::Forms::DialogResult::OK)
	{
		panel1->BringToFront();
		pictureBox86->BringToFront();
		pictureBox85->SendToBack();
		turn = true;
		for (int i = 169; i <= 193; ++i)
		{
			Label^ label = safe_cast<Label^>(this->Controls->Find("label" + i, true)[0]);
			label->Text = "  ";
		}
		countturn = 0;
		boardgm3.reset_board();
		pictureBox2_Click(sender, e);
		set_deafult();
	}
}
private: System::Void button24_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button23->BringToFront();
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result =
		MessageBox::Show("DO YOU WANT TO END GAME?",
			"Confirmation",
			MessageBoxButtons::OKCancel,
			MessageBoxIcon::Warning);

	// Check which button was pressed
	if (result == System::Windows::Forms::DialogResult::OK)
	{
		panel1->BringToFront();
		pictureBox90->BringToFront();
		pictureBox91->SendToBack();
		turn = true;
		for (int i = 200; i <= 241; ++i)
		{
			Label^ label = safe_cast<Label^>(this->Controls->Find("label" + i, true)[0]);
			label->Text = "  ";
		}
		boardgm2.reset_board();
		pictureBox2_Click(sender, e);
		set_deafult();
	}

}
private: System::Void button14_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	button25->BringToFront();
}
private: System::Void button25_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button14->BringToFront();
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button26_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	button27->BringToFront();
}
private: System::Void button27_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button26->BringToFront();
}
	  
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result =
		MessageBox::Show("DO YOU WANT TO END GAME?",
			"Confirmation",
			MessageBoxButtons::OKCancel,
			MessageBoxIcon::Warning);

	// Check which button was pressed
	if (result == System::Windows::Forms::DialogResult::OK)
	{
		panel1->BringToFront();
		pictureBox96->BringToFront();
		pictureBox95->SendToBack();
		turn = true;
		for (int i = 242; i <= 250; ++i)
		{
			Label^ label = safe_cast<Label^>(this->Controls->Find("label" + i, true)[0]);
			label->Text = "  ";
		}
		panel24->SendToBack();
		panel22->SendToBack();
		button28->BringToFront();
		button29->BringToFront();
		button30->BringToFront();
		button31->BringToFront();
		button32->BringToFront();
		button38->BringToFront();
		button39->BringToFront();
		button40->BringToFront();
		button41->BringToFront();

		checkpress_label = false;
		boardgm5.reset_board();
		player5.reset_vec();
		player5.valid = true;
		pictureBox2_Click(sender, e);
		set_deafult();
	}

}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result =
		MessageBox::Show("DO YOU WANT TO END GAME?",
			"Confirmation",
			MessageBoxButtons::OKCancel,
			MessageBoxIcon::Warning);

	// Check which button was pressed
	if (result == System::Windows::Forms::DialogResult::OK)
	{
		panel1->BringToFront();
		pictureBox81->BringToFront();
		pictureBox80->SendToBack();
		turn = true;
		for (int i = 3; i <= 11; ++i)
		{
			TextBox^ tx = safe_cast<TextBox^>(this->Controls->Find("TextBox" + i, true)[0]);
			tx->Text = "";
		}
		boardgm4.reset_board();
		pictureBox2_Click(sender, e);
		set_deafult();
	}

}
private: System::Void button21_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	button22->BringToFront();
}
private: System::Void button22_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button21->BringToFront();
}
private: System::Void pictureBox13_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
};
