#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
 
 
  
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
     
     
    int n;
    fin >> n;
    vector<int> arr(n);
    vector<int> arrs(n);
    int max = INT32_MIN;
    int num_max = 1;
    int max_score = 0;
    for(int i = 0; i < n; i++){
        int temp;
        fin >> temp;
        arr[i] = temp;
        if (temp >= max){
            if (temp == max){
                num_max ++;
            }else {
                max = temp;
                num_max = 1;
            }
        }
    }
    arrs = arr;
    sort(arrs.begin(),arrs.end());
    int j = 0;
    while (j != n - 1){
        int temp = arr[j] % 10;
        int maxb = INT32_MIN;
        if (temp == 5 ){
            if (arr[j + 1] < arr[j]){
                for(int h = 0; h < j; h++){
                    if(arr[h] > maxb){
                        maxb = arr[h];
                    }
                }
                if (maxb == arrs[arrs.size()-1]){
                    if (arr[j] > max_score){
                        max_score = arr[j];
                    }
                }
            }
        }
        j++;
    }
    reverse(arrs.begin(),arrs.end());
    if (max_score == 0){
        fout << 0;
    }else {
        if (num_max > 1){
            if (max_score == arr[0]){
                fout << 1;
            }else
                fout << distance(arrs.begin(),find(arrs.begin(),arrs.end(),max_score) + 1 - num_max + 1);
        }else{
            fout << distance(arrs.begin(),find(arrs.begin(),arrs.end(),max_score) + 1);
 
        }
    }
 
 
     
    fin.close();
    fout.close();
    return 0;
}