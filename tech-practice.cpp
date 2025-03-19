#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct Abiturient {
	string name;
	string birth;
	int score_first;
	int score_second;
	int score_third;
	int	sum_score;
};
int fill_arrray(Abiturient* arr) {
	ifstream in;
	in.open("in.txt");
	string part_name;
	string birth;

	Abiturient ab;
	int index = 0;
	while (in >> part_name) {
		ab.name = part_name;
		in >> part_name;
		ab.name += " " + part_name;
		in >> part_name;
		ab.name += " " + part_name;
		in >> ab.birth;
		in >> ab.score_first;
		in >> ab.score_second;
		in >> ab.score_third;
		ab.sum_score = ab.score_third + ab.score_first + ab.score_second;
		arr[index] = ab;
		index++;

	}
	in.close();
	return index;
}
void sort_abiturients(Abiturient* arr, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			if (arr[j].sum_score < arr[j + 1].sum_score) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}
void print_scores(Abiturient* arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i].sum_score << endl;
	}
}

void output_students(Abiturient* arr) {
	int count;
	ofstream out;
	out.open("out.txt");
	cout << "Enter count: ";
	cin >> count;
	int last_score;
	int index = 0;
	while (index < count) {
		out << arr[index].name + " " + arr[index].birth + " " << arr[index].sum_score << endl;
		index++;
	}
	last_score = arr[index - 1].sum_score;
	out.close();
	if (last_score == arr[index].sum_score) {
		cout << "extra list is created" << endl;
		ofstream extraout;
		extraout.open("extra.txt");
		while (last_score == arr[index].sum_score) {
			extraout << arr[index].name + " " + arr[index].birth + " " << arr[index].sum_score << endl;
			index++;
		}
		extraout.close();
	}
	
}
int main()
{
	int n;
	Abiturient arr[100];
	n = fill_arrray(arr);
	sort_abiturients(arr, n);
	output_students(arr);
}
