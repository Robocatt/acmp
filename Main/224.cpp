#include <fstream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    ifstream cin("INPUT.txt");
    ofstream cout("OUTPUT.txt");
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    if(arr[0] * arr[1]  * arr[arr.size()-1] > arr[arr.size()-1] * arr[arr.size()-2] * arr[arr.size()-3]){
        cout << (long long )arr[0] * arr[1]  * arr[arr.size()-1] ;
    }else{
        cout << (long long )arr[arr.size()-1] * arr[arr.size()-2] * arr[arr.size()-3];
    }
    cin.close();
    cout.close();

    return 0;
}