#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <set>
#include <math.h>
#include <map>
#include <limits.h>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <unordered_set>
#include <sstream>
#include <deque>
#include <time.h>
#include <list>
#include <iomanip>
#include <queue>
#include <cctype>
#include <stdlib.h>
using namespace std;
typedef long long ll;
#define inf 2000000001
#define infD 200000000001
#define infL 2000000000000001
#define module 1000000007


int main(){
  int todo = 5;
  int count_read = 0;
  int count_write = 0;
  int task_type = 0;//1 чтение, 2 запись
  int task_time = 0;
	int time;
  for (time = 0; todo > 0 && time < 130; time++){		
    if((time - 6) % 10 == 0){
      if(task_type == 0){
        task_time = 6;
				task_type = 2;
      }else{
        count_write++;
      }
    }
		
    if((time - 3) % 5 == 0 || time % 6 == 0){
      if(task_type < 2){
        task_time = 4;
				task_type = 1;
      }else{
        count_read++;
      }
    }

		cout << time << ": " << task_type << " " << task_time << endl;

    task_time--;
    if(task_time == 0){
			if (task_type == 2){
				todo--;
			}
			task_type = 0;
      if(count_write != 0){
        task_type = 2;
        task_time = 6; 
				count_write--;
      }else if(count_read > 0){
        task_type = 1;
        task_time = 4;
        count_read = 0;
      }
    }
  }
  cout << time;

}