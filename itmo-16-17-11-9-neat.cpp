#include<vector>
#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;

int getTime(int n){
	int time = -20;
	int timeForLine = 1;
	int curLines = 0;
	for (int i = 0; i < 500; i++){

		if (i % n == 0){
			curLines = 0;
			time += 20;
			timeForLine = 1;
		}
		
		time += timeForLine;
		curLines++;
		if (curLines == 15){
			curLines = 0;
			timeForLine++;
		}

		

		cout << i << " " << time << endl;
	}

	return time;
}


int main(){
	
	for (int i = 30; i <= 30; i++){
		cout << i << "->"<<  getTime(i) << endl;
	}

  return 0;
}