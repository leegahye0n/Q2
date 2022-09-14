#include <iostream>
#include <random>
using namespace std;

int main() {
	std::random_device rd;
	std::mt19937 a(rd());
	std::mt19937 b(rd());
	std::uniform_int_distribution <> num(1, 9);

	cout << "산수 문제를 자동으로 출제합니다." << "\n";
	cout << num(a) << " " << num(b);

	char c;
	cout << "\n" << "연산자 입력하기(+, -, *, /)" << "\n";
	cin >> c;

	int answer;
	cout << "결과 입력하기" << "\n";
	cin >> answer;

	if (c == '+') {
		if (answer == num(a) + num(b)) {
			cout << "맞았습니다";
		}
		else
			cout << "틀렸습니다";
	}

	else if (c == '-') {
		if (answer == num(a) - num(b)) {
			cout << "맞았습니다";
		}
		else
			cout << "틀렸습니다";
	}

	else if (c == '*') {
		if (answer == num(a) * num(b)) {
			cout << "맞았습니다";
		}
		else
			cout << "틀렸습니다";
	}

	else {
		if (answer == num(a) / num(b)) {
			cout << "맞았습니다";
		}
		else
			cout << "틀렸습니다";
	}

	return 0;
}