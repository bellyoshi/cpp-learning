// vectorの用例
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v(10);
    cout << "v.size() = " << v.size() << endl;
    //ベクタの各要素に値を代入
    for(int i = 0; i < v.size(); i++){
        v[i] = i;
    }
    //ベクタの各要素を表示
    for(int i = 0; i < v.size(); i++){
        cout << "v[" << i << "] = " << v[i] << endl;
    }
    
    cout << "expanding vector" << endl;
    //ベクタの最後に値を追加すると、ベクタは自動的に拡張される
    for(int i = 0; i < 5; i++){
        v.push_back(i);
    }
    //ベクタの各要素を表示
    for(int i = 0; i < v.size(); i++){
        cout << "v[" << i << "] = " << v[i] << endl;
    }
    //ベクタの要素をすべてマイナスにする
    for(int i = 0; i < v.size(); i++){
        v[i] = -v[i];
    }
    cout << "Modified vector" << endl;
    //ベクタの各要素を表示
    for(int i = 0; i < v.size(); i++){
        cout << "v[" << i << "] = " << v[i] << endl;
    }
    return 0;
}