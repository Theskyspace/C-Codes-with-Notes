#include <iostream>
#include <set>
#include <map>

using namespace std;






int main(){
    //iterators for vectors.
    // sort(v.begin(),v.end())  , reverse(v.begin(),v.end()) , random_shuffle(v.begin(),v.end())
    // Where v is the vector.
    


    //Set strutures.
    //Advantage of set structure is it doesn't allow repetations
    // set<int> s;
    // s.insert(3);
    // s.insert(2);
    // s.insert(5);
    // for (auto x : s) {
    //     cout << x << "\n";
    // }


    // Map strutures --> Dict. in python.
    map<string ,  int> m;   
    m["akash"] = 10;
    m["x"] = 29;
    m["m"] = 90;

    for (auto x : m) {
        cout << x.first << " - " << x.second << "\n";
        }


    return 0;
}