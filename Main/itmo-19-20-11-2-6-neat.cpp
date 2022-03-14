#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> arr(9,0);
  int count_1 = 0;
  int count_2 = 0;
  for (int i = 0; i < 1000; i++){
    
    
    if(i % 11 == 0){
      bool f = false;
      for(int j = 0; j < 8; j++){
        if(arr[j] == 0 && arr[j + 1] == 0){
          arr[j] = 30;
          arr[j + 1] = 30;
          count_1++;
          f = true;
          break;
        }
      }
      if(!f){
        cout << 1 << " " << count_1;
        return 0;
      }
    }

    if(i % 6 == 0){
      bool f = false;
      for(int j = 0; j < 9; j++){
        if(arr[j] == 0 ){
          arr[j] = 15;
          count_2++;
          f = true;
          break;
        }
      }
      if(!f){
        cout << 2 << " " << count_2;
        return 0;
      }
    }

    for (int j = 0; j < 9; j++){
      if(arr[j] > 0){
        arr[j]--;
      }
    }


  }
  



  return 0;
}