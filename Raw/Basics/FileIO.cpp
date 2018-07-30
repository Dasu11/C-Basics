#include <iostream>
#include <Windows.h>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int mainlgklg() 
{
	//char data[100];
	//char fileName[] = "file.das";
	//ofstream outFile;
	//outFile.open(fileName, ios::out);
	//cout << "write to file" << endl;
	//cout << "Enter your name : ";
	//cin.getline(data, 100);

	//outFile << data << endl;
	//cout << "Enter details : ";
	//cin.getline(data, 100);
	//outFile << data << endl;
	//outFile.close();
	//cout << endl;
	//ifstream inFile;
	//inFile.open(fileName, ios::in);
	//while (!inFile.eof())
	//{
	//	inFile >> data;
	//	cout << data << endl;
	//}
	//inFile.close();


	char fileName[] = "HIGHSCORE";
	char scores[20];
	int i = 0;
	//ofstream outFile;
	//outFile.open(fileName, ios::out);
	//while (i != 20)
	//{
	//	cout << "Enter score : ";
	//	cin >> scores[i];
	//	outFile << scores[i] << endl;
	//	i++;
	//}
	//outFile.close();

	vector<int> score;
	ifstream inFile;
	inFile.open(fileName, ios::in);
	int x = 0;
	while (!inFile.eof())
	{
		inFile >> scores;
		int temp = atoi(scores);
		score.push_back(temp);
		//cout << temp << endl;
	}
	inFile.close();
	sort(score.begin(), score.end());

	for (auto a : score)
		cout << a << endl;

	system("pause");
	return 0;
}