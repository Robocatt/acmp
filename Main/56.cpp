#include <fstream>
#include <set>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n;
    fin >> n;
    vector<string> friends(n);
    for(int i = 0; i < n; i++){
        string temp;
        fin>>temp;
        friends[i] = temp;
    }
    int m;
    fin >> m;
    vector<string> infriends(m);
    for(int i = 0; i < m; i++){
        string temp;
        fin>>temp;
        infriends[i] = temp;
    }
    sort(friends.begin(),friends.end());
    sort(infriends.begin(),infriends.end());
    bool friendsmin  = false;
    vector<string> mutual;
    if (min(friends.size(),infriends.size()) == friends.size())
        friendsmin = true;
    if (friendsmin){
        for (int i = 0; i < friends.size(); i++){
            for(int j = 0; j < infriends.size(); j++){
                if(friends[i] == infriends[j])
                    mutual.push_back(friends[i]);         
            }
        }
    }else {
        for (int i = 0; i < infriends.size(); i++){
            for(int j = 0; j < friends.size(); j++){
                if(infriends[i] == friends[j])
                    mutual.push_back(infriends[i]);         
            }
        }
    }
    
    fout << "Friends: ";
    for (int i = 0; i < friends.size(); i++ ){
        fout << ( i == friends.size()-1 ? friends[i] : friends[i] + ", "); 
    }
    fout << endl;
    fout << "Mutual Friends: ";
    for (int i = 0; i < mutual.size(); i++ ){
        fout << ( i == mutual.size()-1 ? mutual[i] : mutual[i] + ", "); 
    }
    fout << endl;
    vector<string> also;
    fout << "Also Friend of: ";
    for (int i = 0; i < infriends.size(); i++){
        bool f = false;
        for(int j = 0; j < friends.size(); j++){
            if(infriends[i] == friends[j]){
                f = true;
                break;
            }
        }
        if (!f) {
            also.push_back(infriends[i]); 
        }
    }
    for (int i = 0; i < also.size(); i++ ){
        fout << ( i == also.size()-1 ? also[i] : also[i] + ", "); 
    }
    fin.close();
    fout.close();
    return 0;
}
