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
		cout << "가위바위보 게임" << endl << endl;
		cout << "[1] 게임시작" << endl;
		cout << "[2] 승패결과" << endl;
		cout << "[3] 게임종료" << endl << endl;
		
		cout << "=>";
		cin >> choice;
		if (choice == 1)
		{
			for (score = 0; score <= 3; score++)
			{
				random_device rd;
				mt19937 gen(rd());
				uniform_int_distribution<int> dis(1, 3);
				cout << "[1] 가위" << endl;
				cout << "[2] 바위" << endl;
				cout << "[3] 보" << endl << endl;
				cout << "=>";
				cin >> game_main;
				if (dis(gen) == 1)
				{
					cout << "컴퓨터 : 가위" << endl;
					if (game_main == 2)
					{
						cout << "승자 : Player" << endl << endl;
						counta = counta + 1;
					}
					if (game_main == 1)
					{
						cout << "승자 : 무승부" << endl << endl;
						countc = countc + 1;
					}
					if (game_main == 3)
					{
						cout << "승자 : 컴퓨터" << endl << endl;
						countb = countb + 1;
					}
				}
				if (dis(gen) == 2)
				{
					cout << "컴퓨터 : 바위" << endl;
					if (game_main == 2)
					{
						cout << "승자 : 무승부" << endl << endl;
						countc = countc + 1;
					}
					if (game_main == 1)
					{
						cout << "승자 : 컴퓨터" << endl << endl;
						countb = countb + 1;
					}
					if (game_main == 3)
					{
						cout << "승자 : Player" << endl << endl;
						counta = counta + 1;
					}
				}
				if (dis(gen) == 3)
				{
					cout << "컴퓨터 : 보" << endl;
					if (game_main == 2)
					{
						cout << "승자 : 컴퓨터" << endl << endl;
						countb = countb + 1;
					}
					if (game_main == 1)
					{
						cout << "승자 : Player" << endl << endl;
						counta = counta + 1;
					}
					if (game_main == 3)
					{
						cout << "승자 : 무승부" << endl << endl;
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
			cout << "승패결과" << endl;
			cout << "승 : " << counta << endl;
			cout << "패 : " << countb << endl;
			cout << "무 : " << countc << endl;
			cout << "*게임종료시 승, 패 결과는 초기화됩니다*";
		}
		if (choice == 3)
		{
			break;
		}
	}
}