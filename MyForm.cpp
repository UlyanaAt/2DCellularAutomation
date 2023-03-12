#include "MyForm.h"
#include <ctime>
#include <iostream>
using namespace std;

using namespace My2DCellularAutomation;
using namespace System::Windows::Forms;

// Application entry point
[STAThreadAttribute]
void main(cli::array<String^>^ args) {
	// Initial Application Parameters:
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	My2DCellularAutomation::MyForm form;
	Application::Run(% form);

	
}

bool ValArray[height][width];
bool interimValArray[height][width];
ArrayType* pointerTrans;
ArrayType* pointerVA = ValArray;
ArrayType* pointerIntVA = interimValArray;

Void My2DCellularAutomation::MyForm::Cleaner()
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			dataGridView1->Rows[i]->Cells[j]->Style->BackColor = BackColor.White;
		}
	}

	for (int i = 0; i < 61; i++)
	{
		for (int j = 0; j < 32; j++)
		{
			ValArray[j][i] = 0;
			interimValArray[j][i] = 0;
		}

	}
}

bool My2DCellularAutomation::MyForm::isAlive(ArrayType* pointer, int y, int x)
{
	int neighborsAlive = 0;

	if (y > 0 && pointer[y - 1][x] == 1) { neighborsAlive += 1; }
	if (y < width && pointer[y + 1][x] == 1) { neighborsAlive += 1; }
	if (x > 0 && pointer[y][x - 1] == 1) { neighborsAlive += 1; }
	if (x < height && pointer[y][x + 1] == 1) { neighborsAlive += 1; }

	if (y > 0 && x > 0 && pointer[y - 1][x - 1] == 1) { neighborsAlive += 1; }
	if (y < height && x > 0 && pointer[y + 1][x - 1] == 1) { neighborsAlive += 1; }
	if (y > 0 && x < width && pointer[y - 1][x + 1] == 1) { neighborsAlive += 1; }
	if (y < height && x < width && pointer[y + 1][x + 1] == 1) { neighborsAlive += 1; }

	//Any live cell with fewer than two live neighbours dies.
	//Any live cell with two or three live neighbours lives on.
	//Any live cell with more than three live neighbours dies.
	//Any dead cell with exactly three live neighbours becomes a live cell.

	if (pointer[y][x] == 1 && neighborsAlive < 2) { return false; }
	if (pointer[y][x] == 1 && (neighborsAlive == 2 || neighborsAlive == 3)) { return true; }
	if (pointer[y][x] == 1 && neighborsAlive > 3) { return false; }
	if (pointer[y][x] == 0 && neighborsAlive == 3) { return true; }

	return false;
}

Void My2DCellularAutomation::MyForm::Draw(ArrayType* pointer, ArrayType* pointerT)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (isAlive(pointerVA, i, j) == 1)
			{
				pointerIntVA[i][j] = 1;
			}
			else
			{
				pointerIntVA[i][j] = 0;
			}
		}
	}

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (pointerIntVA[i][j] == 1)
			{
				dataGridView1->Rows[i]->Cells[j]->Style->BackColor = BackColor.Black;
			}
			else
			{
				dataGridView1->Rows[i]->Cells[j]->Style->BackColor = BackColor.White;
			}

		}
	}
}

System::Void My2DCellularAutomation::MyForm::buttonSS_Click(System::Object^ sender, System::EventArgs^ e)
{
	BCount += 1;

	if (BCount % 2 != 0)
	{
		timer1->Start();
	}
	else
	{
		timer1->Stop();
		Cleaner();
	}
		
}

System::Void My2DCellularAutomation::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	for (int i = 0; i < 32; i++)
	{
		dataGridView1->Rows->Add();
	}
}

System::Void My2DCellularAutomation::MyForm::dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Style->BackColor = BackColor.Black;
	ValArray[e->RowIndex][e->ColumnIndex] = 1;

}

System::Void My2DCellularAutomation::MyForm::buttonRF_Click(System::Object^ sender, System::EventArgs^ e)
{
	Cleaner();
	srand(time(0));
	for (int i = 0; i < 61; i++)
	{
		for (int j = 0; j < 32; j++)
		{
			if (rand() % 2 == 1)
			{
				dataGridView1->Rows[j]->Cells[i]->Style->BackColor = BackColor.Black;
				ValArray[j][i] = 1;
			}
			
		}
	}
}

System::Void My2DCellularAutomation::MyForm::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	Draw(pointerVA, pointerIntVA);

	pointerTrans = pointerVA;
	pointerVA = pointerIntVA;
	pointerIntVA = pointerTrans;
}






