#include <iostream>
#include <list>
#include <chrono>

int main() {
	using namespace std;

	list<int> LinkedList;

	auto start_resize = chrono::high_resolution_clock::now();

	for (int i = 0; i < 100000; i++) {
		LinkedList.push_back(0);
	}

	auto end_resize = chrono::high_resolution_clock::now();

	chrono::duration<float> duration_resize = end_resize - start_resize;

	cout << "The time to resize = " << duration_resize.count() << " second" << endl;//// 


	/////// push_front 

	auto start_push_front = chrono::high_resolution_clock::now();

	for (int index = 1; index < 1000; index++) {
		LinkedList.push_front(1);
	}

	auto end_push_front = chrono::high_resolution_clock::now();

	chrono::duration<float> duration_push_front = end_push_front - start_push_front;

	cout << "The time to push_front = " << duration_push_front.count() << " second" << endl;

	////////// push_back

	auto start_push_back = chrono::high_resolution_clock::now();

	for (int index = 1; index < 1000; index++) {
		LinkedList.push_back(1);
	}

	auto end_push_back = chrono::high_resolution_clock::now();

	chrono::duration<float> duration_push_back = end_push_back - start_push_back;

	cout << "The time to push_back = " << duration_push_back.count() << " second" << endl;


	////////// insert 

	auto start_insert = chrono::high_resolution_clock::now();

	for (int index = 1; index < 1000; index++) {
		auto it = std::next(LinkedList.begin(), LinkedList.size() / 2);
		LinkedList.insert(it, 1);
	}

	auto end_insert = chrono::high_resolution_clock::now();

	chrono::duration<float> duration_insert = end_insert - start_insert;

	cout << "The time to insert = " << duration_insert.count() << " second" << endl;
}
