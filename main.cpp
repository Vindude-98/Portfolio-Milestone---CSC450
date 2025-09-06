/*
 * main.cpp
 *
 *  Created on: Sep 6, 2025
 *      Author: Gavin LaMontagne
 */



#include <iostream>
#include <thread>

using namespace std;

void countUp(){
	for(int i = 0; i <= 20; i++){
		cout << i << " ";
	}
	cout << endl;
}

void countDown(){
	for(int i = 20; i >= 0; i--){
		cout << i << " ";
	}
	cout << endl;
}

int main(){
	thread t1(countUp);
	t1.join();

	thread t2(countDown);
	t2.join();

	return 0;
}

/*
 * Detailed Analysis:
 *
 * A performance issue that can take place with concurrency programming is the program will take
 * longer to execute, as we are needing to wait for each thread to finish executing before proceeding
 * onto the next. However, the program is less likely to crash from multiple functions trying to
 * execute at the same time, additionally the main function will not terminate until all threads are done
 * running.
 *
 */
