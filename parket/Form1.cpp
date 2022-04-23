#include "Form1.h"
#include <Windows.h>
#include <iostream>
#include <string>
#include "..\parket\func.cpp"


using namespace std;
using namespace System;
using namespace Microsoft::Win32;
using namespace CppCLRWinformsProjekt;
using namespace System::Security::Cryptography;
using namespace std;


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	FILE* fp;

	freopen_s(&fp, "CONIN$", "r", stdin);
	freopen_s(&fp, "CONOUT$", "w", stdout);
	freopen_s(&fp, "CONOUT$", "w", stderr);
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Form1);
	return 0;
}

int write(int length, int width, int boardLength, int boardWidth)
{

	RegistryKey^ rk;
	rk = Registry::CurrentUser->OpenSubKey("Software", true);
	if (!rk)
	{
		OutputDebugStringW(L"Failed to open CurrentUser/Software key");
		return -1;
	}

	RegistryKey^ nk = rk->CreateSubKey("NewRegKey");
	if (!nk)
	{
		OutputDebugStringW(L"Failed to create 'NewRegKey'");
		return -1;
	}
	try
	{
		nk->SetValue("NewKey1", width);
		nk->SetValue("NewKey2", length);
		nk->SetValue("NewKey3", boardLength);
		nk->SetValue("NewKey4", boardWidth);

	}
	catch (Exception^)
	{
		OutputDebugStringW(L"Failed to set new values in 'NewRegKey'");
		return -1;
	}

	OutputDebugStringW(L"New key created.");
	OutputDebugStringW(L"Use REGEDIT.EXE to verify ");
	OutputDebugStringW(L"'CURRENTUSER/Software/NewRegKey'\n");
	return 0;
}

System::Void Form1::rbt1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	int length = (int)numericUpDown1->Value;
	int width = (int)numericUpDown2->Value;
	pic1->Visible = true;
	pic2->Visible = false;
	label8->Visible = true;
	label10->Visible = false;
	int boardLength = (int)nudHP->Value;
	int boardWidth = (int)nudWP->Value;
	resultValue res = returnValueG(length, width, boardLength, boardWidth);
	double quantityByLength = res.quantityByLength;
	double quantityByWidth = res.quantityByWidth;
	double restLength = res.restLength;
	double restWidth = res.restWidth;
	double total = res.total;
	label8->Text = "По длине " + quantityByLength.ToString() + " штуки.\r\n По ширине " + quantityByWidth.ToString() + " \r\n Итого " + total.ToString() + "\r\n В остатке по длине " + restLength.ToString() + "\r\n В остатке по ширине " + restWidth.ToString() + "\n" + "\n";

}

System::Void Form1::rbt2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	int length = (int)numericUpDown1->Value;
	int width = (int)numericUpDown2->Value;
	pic1->Visible = false;
	pic2->Visible = true;
	label8->Visible = false;
	label10->Visible = true;
	int boardLength = (int)nudHP->Value;
	int boardWidth = (int)nudWP->Value;
	resultValue res = returnValueW(length, width, boardLength, boardWidth);
	double quantityByLength = res.quantityByLength;
	double quantityByWidth = res.quantityByWidth;
	double restLength = res.restLength;
	double restWidth = res.restWidth;
	double total = res.total;
	label10->Text = "По длине " + quantityByLength.ToString() + " штуки.\r\n По ширине " + quantityByWidth.ToString() + " \r\n Итого " + total.ToString() + "\r\n В остатке по длине " + restLength.ToString() + "\r\n В остатке по ширине " + restWidth.ToString() + "\n" + "\n";

}
System::Void Form1::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	int length = (int)numericUpDown1->Value;
	int width = (int)numericUpDown2->Value;
	int boardLength = (int)nudHP->Value;
	int boardWidth = (int)nudWP->Value;
	write(length, width, boardLength, boardWidth);
}
System::Void Form1::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	cli::array<String^>^ key = Registry::CurrentUser->GetSubKeyNames();
	RegistryKey^ rk = nullptr;
	rk = Registry::CurrentUser->OpenSubKey("Software", true);
	RegistryKey^ nk = rk->OpenSubKey("NewRegKey", true);
	cli::array<String^>^ name = nk->GetValueNames();

	String^ lengthw = nk->GetValue(name[1])->ToString();
	String^ widthw = nk->GetValue(name[2])->ToString();
	String^ boardLengthw = nk->GetValue(name[3])->ToString();
	String^ boardWidthw = nk->GetValue(name[4])->ToString();

	numericUpDown1->Value = Convert::ToInt32(lengthw);
	numericUpDown2->Value = Convert::ToInt32(widthw);
	nudHP->Value = Convert::ToInt32(boardLengthw);
	nudWP->Value = Convert::ToInt32(boardWidthw);

}
