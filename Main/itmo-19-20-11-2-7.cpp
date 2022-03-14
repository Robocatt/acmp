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


string add_to_table(int i, vector<string> pers, int place){
    string table = "";
    int k = i;
    for(int j = 0; j < 8; j++){
        if(j == 1){
            table += "<td class=\"rankl\">" + to_string(place) + "</td>" + '\n';
            k++;
        }else{
            table += pers[k++] + '\n';
        }
    }
    return table;
}

int main(){
    string global;
    string s;
    string end = "</tbody>\n</table>\n</center>\n</td>\n</tr>\n</table>\n</body>\n</html>";
    vector<string> pers_raw;
    bool f = false;
    bool f_global = false;
    bool start = false;
    while(s != "</html>"){
        getline(cin,s);
        if(s == "<tbody>"){
            start = true;// конец шапки = начало таблицы участников
        }
        if(s == "</tbody>" ){//end - отдельная строка 
            f_global = true;
        }
        if(s == "<tr>" && start){// в global не идет таблица
            f = true;
        }
        if(!f && !f_global){//но в global идет все кроме таблицы
            global += '\n' + s;
        }
        if(f){// если это участник, его в вектор
            pers_raw.push_back(s);
        }
        if(s == "</tr>" && start){// закрытие участника
            f = false;
        }
    }
    
    int place = 1;
    for(int i = 2; i < pers_raw.size(); i+= 9){
        if(pers_raw[i].find("10") != string::npos){// участник из 10 го отправляется в строку
            global += '\n' + add_to_table(i - 2, pers_raw, place);
            place++;
            cout << global;
        }
    }
    global += end;
    cout << endl << global;
    return 0;
}