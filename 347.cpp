#include <fstream>
#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


 
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    vector<pair<int,int>> arrp;
    vector<int> arr(5);
    set<int> se;
    int a;
    for(int i = 0; i < 5; i++){
        fin >> a;
        arr[i] = a;;
        se.insert(a);
    }
    sort(arr.begin(),arr.end());

    int count = 1;
    for ( int i = 0; i < arr.size() - 1; i ++){
        if (arr[i + 1] == arr[i]){
            count ++;
        }else{
            arrp.push_back({arr[i],count});
            count = 1; 
        }
    }
    arrp.push_back({arr[arr.size()-1],count});


    if (se.size() == 1){
        fout << "Impossible";
    }else if (se.size() == 2){
        if (arrp[0].second == 4 || arrp[1].second == 4){
            fout << "Four of a Kind";
        }else {
            fout << "Full House";
        }
    }else if (se.size() == 3){ 
        if (arrp[0].second == 3 || arrp[1].second == 3 || arrp[2].second == 3){
            fout << "Three of a Kind";
        }else{
            fout << "Two Pairs";
        } 
    }else if (se.size() == 4){
        if (arrp[0].second == 2 || arrp[1].second == 2 || arrp[2].second == 2 || arrp[3].second == 2){
            fout << "One Pair";
        }
    }else {
        bool fl = true;
        int k = arr[0];
        for (int o = 0; o < 5; o++){
            if (!(k++ == arr[o])){
                fl = false;
            }
            
        }
        fout << (fl ? "Straight" : "Nothing");
    }
    
    
    
    



    

 
    fin.close();
    fout.close();
    return 0;
}