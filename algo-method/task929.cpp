#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned short N, X;
    cin >> N >> X;
    map<unsigned short, string> id_name;
    vector< pair<unsigned short, unsigned short> > id_height(N); // id, h
    for(size_t i=0; i<N; i++){
        string name;
        cin >> name;
        id_name[i] = name;
        id_height.at(i).first = i;
        cin >> id_height.at(i).second;
    }

    auto compare = [](pair<unsigned short, unsigned short> smaller, pair<unsigned short, unsigned short> larger){
        // id, height
        if(larger.second > smaller.second){
            return true;
        }else if(larger.second < smaller.second){
            return false;
        }else{
            // if heights are same
            if(larger.first > smaller.first){
                return true;
            }else{
                return false;
            }
        }
    };

    sort(id_height.begin(), id_height.end(), compare);

    auto index = 0;
    for(size_t i=0; i<N; i++){
        if(id_height[i].first == X){
            break;
        }
        index++;
    }

    auto prev = id_height.at(index - 1).first;
    auto next = id_height.at(index + 1).first;

    cout << id_name.at(prev) << endl;
    cout << id_name.at(next) << endl;

    return 0;
}
