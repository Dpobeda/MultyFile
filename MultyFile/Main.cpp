#include <iostream>
#include "Functions.h"
#include "Structures.h"
#include "Data.h"

int main(){
	setlocale(LC_ALL, "Russian");
	int n, m;

	// ���������� � ���������.
	/*std::cout << "������� ��� ����� -> ";
	std::cin >> n >> m;
	std::cout << n << " + " << m << " = " << sum(n, m) << std::endl;

	hi();

	const int size = 5;
	int arr[size]{ 10 , 20, 300 ,40 ,24 };
	print_arr(arr, size);

	// ������ ���������� ������������� �������� :
	/*

	1. �������� ���� �� ������ ����� ��� �������� ������ � ���;
	2. �������� ����������� ��������� ��� ������������� �� � ������ ��������;
	3. ��������� ������ �������.

	*/

	// ���������� �� ���������� � ��������� ��� ������ � ���.
	/*person p1{
		"Denis Pobedinsky",
		18,
		"Programer",
		2000000
	};
	
	print_person(p1);
	

	std::cout << "=========================\n";
	person p2 = input_person();
	std::cout << "=========================\n";
	print_person(p2);
	*/

	_A = 15;
	std::cout << "A = " << _A << std::endl;
	std::cout << "Pi = " << _PI << std::endl;
	std::cout << "E = " << _E << std::endl;
	print_arr(_ARR, _ARR_SIZE);
	show_pi();


	return 0;
}