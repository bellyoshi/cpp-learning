// pop_back() and empty() sample
#include <iostream>
#include <vector>
using namespace std;
void display_vector(vector<char> &v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
    vector<char> v;
    for(int i=0; i<10; i++){
        v.push_back('A'+i);
    }
    cout << "Vector's original content: " << endl;
    display_vector(v);

    do{
        v.pop_back();
        cout << "Vector's current content: " << endl;
        display_vector(v);
    }while(!v.empty());
    
}