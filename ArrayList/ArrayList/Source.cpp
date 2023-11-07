#include <iostream>
#include <vector>
#include <chrono>

int main() {
	using namespace std;

	vector<int> ArrayList;

	auto start_resize = chrono::high_resolution_clock::now();

	ArrayList.resize(100000);

	auto end_resize = chrono::high_resolution_clock::now();

	chrono::duration<float> duration_resize = end_resize - start_resize;

	cout << "The time to resize = " << duration_resize.count() << " second" << endl;//// 


	////////// push_front

	auto start_push_front = chrono::high_resolution_clock::now();

	for (int index = 1; index < 1000; index++) {
		ArrayList.insert(ArrayList.begin(), 1);
	}

	auto end_push_front = chrono::high_resolution_clock::now();

	chrono::duration<float> duration_push_front = end_push_front - start_push_front;

	cout << "The time to push_front = " << duration_push_front.count() << " second" << endl;


	////////// push_back

	auto start_push_back = chrono::high_resolution_clock::now();

	for (int index = 1; index < 1000; index++) {
		ArrayList.push_back(1);
	}

	auto end_push_back = chrono::high_resolution_clock::now();

	chrono::duration<float> duration_push_back = end_push_back - start_push_back;

	cout << "The time to push_back = " << duration_push_back.count() << " second" << endl;


	////////// insert 

	auto start_insert = chrono::high_resolution_clock::now();

	for (int index = 1; index < 1000; index++) {
		vector<int>::iterator it = ArrayList.begin() + ArrayList.size() / 2;
		ArrayList.insert(it,1);
	}

	auto end_insert = chrono::high_resolution_clock::now();

	chrono::duration<float> duration_insert = end_insert - start_insert;

	cout << "The time to insert = " << duration_insert.count() << " second" << endl;
}