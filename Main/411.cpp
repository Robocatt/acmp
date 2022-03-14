#include <iostream> 
#include <cmath> 
#include <iomanip> 
using namespace std; 
int main(){ 
    float a, b, c, x1, x2, d; 
    cin >> a >> b >> c; 
    d = b * b - 4 * a * c; 
    if((a == 0 && b == 0 && c == 0) || d < 0){ 
        cout << "-1"; 
        
    } 
    if(d > 0 ){
        if (a == 0){
            cout <<"1" << endl;
            cout << -c / b;
        }
        if( b == 0){
            x1=( sqrt(d)) / (2 * a);
            x2=(sqrt(d)) / (2 * a); 
        }else{
            x1=( -b + sqrt(d)) / (2 * a);
            x2=(-b - sqrt(d)) / (2 * a);
        }
        cout << "2" << endl;
        cout << setprecision(11) << fixed << x2 << endl;
        cout << setprecision(11) << fixed << x1 << endl;
        
    } 
    if(d==0){ 
        if(a>1 || b!=0 || c!=0){
            x1=(-b) / 2 * a; 
        }
        cout << "1" << endl; 
        cout << setprecision(11) << fixed<< x1 << endl;
        
    } 
    if(a == 0 && b != 0){
        cout << "1" << endl; 
        cout << setprecision(11) << fixed << (-c/b) << endl;
    } 
    
    return 0;
}