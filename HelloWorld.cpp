// HelloWorld.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"
// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using namespace std;

void degree(float num, float degr) {
std:cout << "input your degree: ";
	std::cout << "your number in your degree is: " << pow(num, degr) << std::endl;
}
void root(float num) {
	std::cout << "root of your number is: " << pow(num, 0.5);
}
//int main(){	const int a = 1; const int b = 2; int cmn; cmn = a + b;	std::cout << "numb = "<< cmn<<"'a' and 'b' is "<< a<< b;	return 0; }
//int main() {	int r, a, b; a = 2, b = 5;	r = ~(a + b);	std::cout << "r =" << r;	return 0;}
//int main() {	int code = 'g';	char letter = 103;	std::cout << letter << " in ASCII is " << code << "\n";	return 0;}
//int main() {	bool c = 5;	std::cout << c << "\n";	return 0;}// = True
//int main() {	int a = 5; int b = a++;	std::cout << a << "<-a  " << b << "<-b" << "\n";	return 0;}
//int main() {	int a = 10; int b = 7;	bool c = a > b;	std::cout << c <<"\n";	return 0;}
//int main() {	bool a = 2 > 5;	bool b = a || 1;	bool c = 5 >= 4;	std::cout << a <<" - "<< 2 << "\n";	std::cout << b <<" - "<< a << "\n";	std::cout << c <<" - "<< 5 << "\n";	return 0;}
//int main() {	int a = 3 << 2; int b = 50 >> 1;	std::cout << a << "\n";	std::cout << b << "\n";	return 0;}
/*int main() {
	int age;
	double weight;
	cout << "input Age -> ";
	cin >> age;
	cout << "input weight -> ";
	cin >> weight;
	cout << "Name is jopa. " << "Age is " << age << " <---> Weight is  " << weight << "\n";
	return 0;}*/
/*int main() {
	int a; int b;
	std::cout << "Input first -> ";
	std::cin >> a;
	if (a > 17) {
		std::cout << "That's good" << "\n";
	}
	if (a < 17) {
		std::cout << "Sum is too min, input second" << "\n";
		std::cin >> b;
		}
		if (a + b < 17) {
			std::cout << "you're wrong";
		}
		if ( a+b > 17) {
			std::cout << "That's good" << "\n";
		}
	return 0;
}*/
/*int main() {
	int x;
	std::cin >> x;
	switch (x) {
		case 1:
			std::cout << "x = 1" << "\n"; break;
		case 2:
			std::cout << "x = 2" << "\n"; break;
		case 3:
			std::cout << "x=3" << "\n"; break;
		default:
			std::cout << "x is unreachable" << "\n"; break;
	}
	return 0;
}*/
/*int main() {
	int x;
	std::cout << " input number ->  ";
	std::cin >> x;
	int y = x;
	while (x < 1000000000) {
		x *= y;
		std::cout << "x is -> " << x << "\n";
	}
	return 0;
}*/
/*int main() {
	for (int x = 1; x < 100; x += 1)// or 'x++'
	{
		for (int y = 1; y < 100; y += 1)
		{
			std::cout << "-> " << x * y << "\t";
		}
		std::cout << std::endl;
	}
	return 0;
}*/
/*int main() {
	int i; std::cin >> i;
	do {
		std::cout << i << " -> " << i * i << "\t\n"; i--;
	} 
	while (i < 0);
	return 0;
}*/
/*int main() {
	int list[] = { 1,2,3,4,5,6,7,8,9,10 };
	int first = list[0];
	int second = list[6];
	std::cout << first << " - " << second << "\n";
	return 0;
}*/
/*int main() {
	int list[] = { 1,2,3,4,5,6,7,8,9,10};
	int size = sizeof(list) / sizeof(list[1]);
	for (int x : list)
		std::cout << list[x] << '\n';
	return 0;
}*/
///////////
/*void main() {
	std::cout << "Input number ->  ";
	int x; std::cin >> x;
	if (x % 2 == 0)
	{
		std::cout << "Not bad, not bad -> " << x << "\n";
	}
	else if (x % 2 != 0)
	{
		std::cout << "Poshel nahui " << "\n";
		std::cout << "Please, repeat " << "\n" << "Input second number -> " << "\t";
		int y; std::cin >> y;
		if ((x + y) % 2 != 0) 		{
			std::cout << "Puck you " << "\n";		}
		else {
			std::cout << "Good -> " << x + y << "\n";		}
	}
}*/
///////////
/*int main() {
	const int n = 10; int numb[n];
	int size = sizeof(numb)/sizeof(numb[0]);
	for (int x = 0; x < size;x++)
		std::cout << "size is " << size << ": x is " << x << "\n";
	return 0;
}*/
/*int main() {
	const int n = 10; int numb[n];
	for (int x : numb)
		std:cout << "x -> " << x << std::endl;
	return 0; //???
}*/
/*int main() {
	const int n = 10; int numb[n];
	std::cout << "Input your word -> ";
	std::string wrd; std::cin >> wrd;
	if ((size(wrd) > n) & (size(wrd) < n * 1.5)) {
		std::cout << "That's enough." << endl; return 0;
	}
	else if ((size(wrd) < n) or (size(wrd) > n * 1.5)) {
		for (int x : numb)
		{
			std::cout << "Puck You" << "\n";
			std::cout << "Please, input anothet word -> " << endl;
			std::string h; std::cin >> h;
			if ((size(h) > n) & (size(h) < n * 1.5))
			{
				std::cout << "U are good" << endl;	return 0;
			}
			else if (size(h) < 5)
			{
				std::cout << "Wrong choice" << endl;
			}
		}
	}
	return 0;
}*/
/*void exchange(float, float);

int main()
{
	float ration = 58;
	float sum = 5000;
	exchange(ration, sum);
	exchange(60, 5000);
	return 0;
}

void exchange(float currate, float sum)
{
	float result = sum / currate;
	std::cout << "Rate: " << currate << "\tSum: " << sum
		<< "\tResult: " << result << std::endl;
}*/
///////////
/*void umnozhenie(int first, int second) {
	int result = first * second;
	std::cout << "first: " << first << "  -  " << "second: " << second << endl;
	std::cout << "res -> " << result << endl;
}
int main() {
	std::cout << "Input number -> " << "\t	";
	int numb; std::cin >> numb;
	std::cout << "Input second ->"<< "\t";
	int numb2; std::cin >> numb2;
	umnozhenie(numb, numb2);
	return 0;
}*/
/*int main() {
	float num; float degr;
	signed char word; std::cout << "input type of operation(degree / root) (d / r): " << "\ ";
	std::cin >> word;
	std::cout << "input number of work: " << "\ "; std::cin >> num;
	if (word == 'r') {
		root(num);
		return 0;
	}
	else if (word == 'd') {
		std::cout << "input the degree: " << "\ ";
		std::cin >> degr;
		degree(num, degr);
		return 0;
	}
	else {
	std:cout << "broken code";
		return 0;
	}
}*/

void factorial(int n) {{
	if (n > 1) 
		return n * factorial(n - 1);
		return 1;
	}
}
int main() {
	int n; std::cout << "Please, input number: "; std::cin >> n;
	int result = factorial(n);
	std::cout << "factorial of " << n << " is: " << result;
	return 0;
}