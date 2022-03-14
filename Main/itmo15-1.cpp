#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    for(int i = 0; i < 8; i++){
        string a = "1" + to_string(i) + "1";
        string b = a;
        string c = a;
        int count8 = 0, count16 = 0, count32 = 0;
        for (int j = 0; j < a.size(); j++){
            int temp = (a[j] - 48 );
            count8 += (a[j] - 48 )*pow(8,a.size()-1-j);
        }
        for (int j = 0; j < b.size(); j++){
            int temp = (b[j] - 48 );
            count16 += (b[j] - 48 )*pow(16,a.size()-1-j);
        }
        for (int j = 0; j < c.size(); j++){
            int temp = (c[j] - 48 );
            count32 += (c[j] - 48 )*pow(32,a.size()-1-j);
        }
        int ten = count8 + count16 + count32; 
        vector<int> d;
        while(ten != 0 ){
            d.push_back(ten%2);
            ten/=2;
        }
        reverse(d.begin(),d.end());
        for (int k = 0; k < d.size(); k++){
            cout << d[k];
        }
        int count = 0;
        for (int k = 0; k < d.size(); k++){
            if(d[k]==1){
                count ++;
            }
        }
        cout << " " << count << endl;
        

    }



    return 0;
}