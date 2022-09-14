#include <iostream>
#include <random>
using namespace std;

int main() {
	std::random_device rd;
	std::mt19937 a(rd());
	std::mt19937 b(rd());
	std::uniform_int_distribution <> num(1, 9);

	cout << "��� ������ �ڵ����� �����մϴ�." << "\n";
	cout << num(a) << " " << num(b);

	char c;
	cout << "\n" << "������ �Է��ϱ�(+, -, *, /)" << "\n";
	cin >> c;

	int answer;
	cout << "��� �Է��ϱ�" << "\n";
	cin >> answer;

	if (c == '+') {
		if (answer == num(a) + num(b)) {
			cout << "�¾ҽ��ϴ�";
		}
		else
			cout << "Ʋ�Ƚ��ϴ�";
	}

	else if (c == '-') {
		if (answer == num(a) - num(b)) {
			cout << "�¾ҽ��ϴ�";
		}
		else
			cout << "Ʋ�Ƚ��ϴ�";
	}

	else if (c == '*') {
		if (answer == num(a) * num(b)) {
			cout << "�¾ҽ��ϴ�";
		}
		else
			cout << "Ʋ�Ƚ��ϴ�";
	}

	else {
		if (answer == num(a) / num(b)) {
			cout << "�¾ҽ��ϴ�";
		}
		else
			cout << "Ʋ�Ƚ��ϴ�";
	}

	return 0;
}