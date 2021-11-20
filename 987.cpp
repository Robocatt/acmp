#include<iostream>
#include<iomanip>
#include<vector>
#include<set>
#include<queue>
#include<deque>
#include<map>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main(){
    string a;
    getline(cin,a);
    vector<string> arr(4);
    for(int i = 0; i < 4; i++){
        getline(cin,arr[i]);
    }
    string s1="Ping statistics for " + a.substr(a.find("ping ") + 5) + ":";
    int to = 0,minn=INT32_MAX,maxx=INT32_MIN,summ=0,percent = 0;
    for(int i = 0; i < 4; i++){
        if(arr[i][0]!='R'){
            to++;
            percent += 25;
        }else{
            int ti = stoi(arr[i].substr(arr[i].find('=')+1));
            minn = min(minn,ti);
            maxx = max(maxx,ti);
            summ += ti;
        }
    }
    if(to == 4){
        cout << s1 << endl << "Packets: Sent = 4 Received = 0 Lost = 4 (100% loss)" << endl;
        return 0;
    }
    int av = round(double(summ) / double(4 - to) );
    string s2 = "Packets: Sent = 4 Received = " + to_string(4 - to) + " Lost = " + to_string(to) + " (" + to_string(percent) + "% loss)";
    string s3 = "Approximate round trip times:";
    string s4 = "Minimum = " + to_string(minn) + " Maximum = " + to_string(maxx) + " Average = " + to_string(av);
    cout << s1 << endl << s2 << endl << s3 << endl << s4 << endl;
    

    return 0;
}