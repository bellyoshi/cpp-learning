// end()を理解する

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

int main()
{
    vector<int> v;
    for(int i = 0; i < 10; i++){
        v.push_back(i);
    }
    display(v, "Vector printed forward");

    //ベクタの要素を逆順に表示
    cout << "Vector printed backward" << endl;
    for(auto itr = v.end(); itr != v.begin();){
        cout << *--itr << " ";
    }
}