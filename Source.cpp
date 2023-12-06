#include <iostream>
#include <vector>
#include <string>
using namespace std;


void options() {
	cout <<endl<< "Введите 1 для создания пользователя" << endl;
	cout << "Введите 2 для изменения пользователя" << endl;
	cout << "Введите 3 для удаления пользователя" << endl;
	cout << "Введите 4 для просмотра пользователей" << endl;
	cout << "Введите 5 для выхода" << endl << endl;
}


vector<string> addUs(vector<string>vec) {
	string temp;
	cout << "Введите имя: ";
	cin >> temp;
	vec.push_back(temp);
	cout <<endl<< "Введите возраст: ";
	cin >> temp;
	vec.push_back(temp);
	cout <<endl<< "Введите город: ";
	cin >> temp;
	vec.push_back(temp);
	cout << endl;

	return vec;
}



vector<string> showUs(vector<string>vec) {
	
	if (vec.size() == 1) {
		cout << "Пользователей не обнаружено";
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
		cout << "Пользователей не обнаружено";
		return vec;
	}

	showUs(vec);

	cout << "Введите номер пользователя: ";
	int choice;
	cin >> choice;
	cout << endl;
	if (choice * 3 >=vec.size()) {
		cout << "Пользователя не обнаружено";
		cout << endl;
		return vec;
	}
	cout << "1)Имя(name)"<<endl;
	cout << "1)Возраст(num)" << endl;
	cout << "3)Город(city)" << endl;
	cout << "4)Я хочу изменить все(all)" << endl;
	cout << "Введите что вы хотите изменить: ";

	string choice2;
	cin >> choice2;
	cout << endl;

	

	if (choice2 == "4" || choice2 == "all") {
			cout << "Введите новое имя: ";
			cin >> temp;
			vec[choice * 3-2] = temp;
			cout << "Введите новый возраст: ";
			cin >> temp;
			vec[choice * 3-1] = temp;
			cout << "Введите новый город: ";
			cin >> temp;
			vec[choice * 3] = temp;
			return vec;
		}
	else if (choice2 == "1" || choice2 == "name") {
			cout << "Введите новое имя: ";
			cin >> temp;
			vec[choice * 3-2] = temp;
			return vec;
		}
	else if (choice2 == "2" || choice2 == "num") {
			cout << "Введите новый возраст: ";
			cin >> temp;
			vec[choice * 3-1] = temp;
			return vec;
		}
		else if(choice2 == "4" || choice2 == "city"){
			cout << "Введите новый город: ";
			cin >> temp;
			vec[choice * 3 ] = temp;
			return vec;

		}else{
			cout << "Опцию не обнаружено";
			cout << endl;
			return vec;
		}
	}




vector<string> deleteUs(vector<string>vec) {

	if (vec.size() == 1) {
		cout << "Пользователей не обнаружено";
		return vec;
	}

	showUs(vec);

	cout << "Введите номер пользователя которого хотите удалить: ";
	int choice;
	cin >> choice;
	cout << endl;
	if (choice * 3 >= vec.size()) {
		cout << "Пользователя не обнаружено";
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







