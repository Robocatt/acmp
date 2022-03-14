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
    int k, m;
    cin >> k >> m;
    vector<int> arr(m);
    for(int i = 0; i < m; i++){//Стандартный ввод 
        cin >> arr[i];
    }
    vector<int> ans;//Массив количества вариантов всех типов блюд
    map<int,int> mp;//map для хранения текущего количества вариантов блюд 
    for(int i = 0; i + 1 < m; i++){
        long long now = arr[i] / (arr[i] - arr[i + 1]); // формула для расчета количества вариантов какого-то блюда до его выбора 
           if(mp[now] > 0){ //если это количество вариантов в текущий момент известно,  
                mp[now] --; //то просто уменьшаем это количество вариантов на 1 => убираем это количество 
                mp[now - 1] ++;//и добавляем на 1 меньшее
            }else{
                ans.push_back(now);//если это количество блюд у нас не было в текущий момент известно, добавим его в ответ
                mp[now - 1] ++;// и добавим на 1 меньшее в текущее количество вариантов  
            }
    }

    int last = arr[arr.size() - 1]; //рассмотрим последний элемент 
    for(map<int,int>::iterator it = mp.begin(); it != mp.end(); it++){
        for(int i = 0; i < it -> second; i++){//пройдем по всем количествам блюд что остались 
            last /= it -> first;//и поделим последнее количество вариантов всех блюд на каждое из них
        }
    }
    if(last > 1){//если количество вариантов которых нам не хватает больше 1, то занесем в ответ
        ans.push_back(last);
    }
    for(int i = 0; i < ans.size();i++){//выведем в начале все количества вариантов что нашли 
        cout << ans[i] << " ";
    }
    for(int i = ans.size(); i < k; i++){//если блюд было больше чем мы нашли, то добавим блюда с количеством
        cout << "1 ";// возможных вариантов в 1, так как на общее количество вариантов ужина это не повлияет 
    } 


    return 0;
}