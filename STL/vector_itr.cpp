#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v, string title){
    cout << title << endl;
    for(auto& e : v ){
        cout << e << " ";
    }
    cout << endl;
}

int main(void){
    vector<int> v(10);
 
    //ベクタの要素に値を代入
    for(int i = 0; auto &e : v){
        e = i;
        i++;
    }

    //ベクタの要素を表示
    display(v, "Original contents");

    //ベクタの要素を2倍に変更
    for(auto &e : v){
        e *= 2;
    }

    //ベクタの要素を表示
    display(v, "Modified contents");

}