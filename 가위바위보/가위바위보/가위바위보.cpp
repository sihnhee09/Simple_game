#include <windows.h>
#include <iostream>
#include <string>
#include <random>

using namespace std;

int main()
{
	int choice = 0;
	int computer = 0;
	int counta = 0;
	int countb = 0;
	int countc = 0;
	int score = 0;
	int game_main = 0;
	while (true)
	{
		cout << "���������� ����" << endl << endl;
		cout << "[1] ���ӽ���" << endl;
		cout << "[2] ���а��" << endl;
		cout << "[3] ��������" << endl << endl;
		
		cout << "=>";
		cin >> choice;
		if (choice == 1)
		{
			for (score = 0; score <= 3; score++)
			{
				random_device rd;
				mt19937 gen(rd());
				uniform_int_distribution<int> dis(1, 3);
				cout << "[1] ����" << endl;
				cout << "[2] ����" << endl;
				cout << "[3] ��" << endl << endl;
				cout << "=>";
				cin >> game_main;
				if (dis(gen) == 1)
				{
					cout << "��ǻ�� : ����" << endl;
					if (game_main == 2)
					{
						cout << "���� : Player" << endl << endl;
						counta = counta + 1;
					}
					if (game_main == 1)
					{
						cout << "���� : ���º�" << endl << endl;
						countc = countc + 1;
					}
					if (game_main == 3)
					{
						cout << "���� : ��ǻ��" << endl << endl;
						countb = countb + 1;
					}
				}
				if (dis(gen) == 2)
				{
					cout << "��ǻ�� : ����" << endl;
					if (game_main == 2)
					{
						cout << "���� : ���º�" << endl << endl;
						countc = countc + 1;
					}
					if (game_main == 1)
					{
						cout << "���� : ��ǻ��" << endl << endl;
						countb = countb + 1;
					}
					if (game_main == 3)
					{
						cout << "���� : Player" << endl << endl;
						counta = counta + 1;
					}
				}
				if (dis(gen) == 3)
				{
					cout << "��ǻ�� : ��" << endl;
					if (game_main == 2)
					{
						cout << "���� : ��ǻ��" << endl << endl;
						countb = countb + 1;
					}
					if (game_main == 1)
					{
						cout << "���� : Player" << endl << endl;
						counta = counta + 1;
					}
					if (game_main == 3)
					{
						cout << "���� : ���º�" << endl << endl;
						countc = countc + 1;
					}
					if (score == 3)
					{
						break;
					}
				}
			}
		}
		if (choice == 2)
		{
			cout << "���а��" << endl;
			cout << "�� : " << counta << endl;
			cout << "�� : " << countb << endl;
			cout << "�� : " << countc << endl;
			cout << "*��������� ��, �� ����� �ʱ�ȭ�˴ϴ�*";
		}
		if (choice == 3)
		{
			break;
		}
	}
}