#include <iostream>
#include <vector>
#include <string>
using namespace std;


void options() {
	cout <<endl<< "������� 1 ��� �������� ������������" << endl;
	cout << "������� 2 ��� ��������� ������������" << endl;
	cout << "������� 3 ��� �������� ������������" << endl;
	cout << "������� 4 ��� ��������� �������������" << endl;
	cout << "������� 5 ��� ������" << endl << endl;
}


vector<string> addUs(vector<string>vec) {
	string temp;
	cout << "������� ���: ";
	cin >> temp;
	vec.push_back(temp);
	cout <<endl<< "������� �������: ";
	cin >> temp;
	vec.push_back(temp);
	cout <<endl<< "������� �����: ";
	cin >> temp;
	vec.push_back(temp);
	cout << endl;

	return vec;
}



vector<string> showUs(vector<string>vec) {
	
	if (vec.size() == 1) {
		cout << "������������� �� ����������";
		return vec;
	}
	cout << "1: ";
	for (int i = 1; i < vec.size(); i++) {
		cout << vec[i] << "\n";
		if (i % 3 == 0 && i + 1 != vec.size()) {
			cout << endl << i / 3 + 1 << ": ";
		}

	}
	return vec;

}

vector<string> renameUs(vector<string>vec) {

	string temp;

	if (vec.size() == 1) {
		cout << "������������� �� ����������";
		return vec;
	}

	showUs(vec);

	cout << "������� ����� ������������: ";
	int choice;
	cin >> choice;
	cout << endl;
	if (choice * 3 >=vec.size()) {
		cout << "������������ �� ����������";
		cout << endl;
		return vec;
	}
	cout << "1)���(name)"<<endl;
	cout << "1)�������(num)" << endl;
	cout << "3)�����(city)" << endl;
	cout << "4)� ���� �������� ���(all)" << endl;
	cout << "������� ��� �� ������ ��������: ";

	string choice2;
	cin >> choice2;
	cout << endl;

	

	if (choice2 == "4" || choice2 == "all") {
			cout << "������� ����� ���: ";
			cin >> temp;
			vec[choice * 3-2] = temp;
			cout << "������� ����� �������: ";
			cin >> temp;
			vec[choice * 3-1] = temp;
			cout << "������� ����� �����: ";
			cin >> temp;
			vec[choice * 3] = temp;
			return vec;
		}
	else if (choice2 == "1" || choice2 == "name") {
			cout << "������� ����� ���: ";
			cin >> temp;
			vec[choice * 3-2] = temp;
			return vec;
		}
	else if (choice2 == "2" || choice2 == "num") {
			cout << "������� ����� �������: ";
			cin >> temp;
			vec[choice * 3-1] = temp;
			return vec;
		}
		else if(choice2 == "4" || choice2 == "city"){
			cout << "������� ����� �����: ";
			cin >> temp;
			vec[choice * 3 ] = temp;
			return vec;

		}else{
			cout << "����� �� ����������";
			cout << endl;
			return vec;
		}
	}




vector<string> deleteUs(vector<string>vec) {

	if (vec.size() == 1) {
		cout << "������������� �� ����������";
		return vec;
	}

	showUs(vec);

	cout << "������� ����� ������������ �������� ������ �������: ";
	int choice;
	cin >> choice;
	cout << endl;
	if (choice * 3 >= vec.size()) {
		cout << "������������ �� ����������";
		cout << endl;
		return vec;
	}
	

	auto it = vec.begin() + (choice * 3 - 1);
	vec.erase(it);
	it = vec.begin() + (choice * 3 - 1);
	vec.erase(it);
	auto ti = vec.begin() + (choice * 3 - 2);
	vec.erase(ti);
	return vec;


}







