//STL CPP

#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x,y) cout << #x << " = " << x << " , " << #y << " = " << y << endl;


void vectorDemo(){
    
    vector<int> A  = {11,3,4,52,43};
    //Accesing Elemments
    deb(A[2])
    
    //Q ing the numbers in the array.
    A.push_back(50);
    A.push_back(50);
    A.push_back(50);
    A.push_back(50);

    //Sorting a array
    sort(A.begin() , A.end()); // O(logN)
    // reverse(A.begin(),A.end());
    
    //Accesing elements
    for (auto x : A)
    {
        cout << x << ' ' ;
    }
    cout << endl;
    // 3 4 11 43 52

    //Binary search
    bool present = binary_search(A.begin() , A.end() , 7); //False
    cout << (present? "True" : "False") << endl;
    
  

    //Lower element gives us the value which is <= to the number mentioned
    auto it = lower_bound(A.begin() , A.end() , 50); // 50
    //Lower element gives us the value which is > to the number mentioned
    auto it2 = upper_bound(A.begin() ,A.end() , 50); //52

    deb2(*it , *it2)
    cout << it2-it << endl;
    
}

void setDemo(){
    //Set inserts the contents in O(log(n)) time.
    set<int> s;
    //Set always arrange contents in assending order
    s.insert(1);
    s.insert(2);
    s.insert(10);
    s.insert(-1);
    
    s.erase(1); // Erase the element mentioned
    for (auto x:s){
        cout << x << " ";
    }
    cout << endl;

    auto it =  s.find(-1);
    cout << (it != s.end()? "Its present\n" : "Not present\n");

    auto it2 = s.upper_bound(2);
    cout << *it2 << endl;

    //Pair
    set< pair <int , int> > S;
    S.insert({20,30});
    S.insert({40,60});
    S.insert({10,19});


}

void mapdemo(){
    map<int , int> a;
    a[1] = 100;
    a[2] = 200;

    map<char , int> marks;
    marks['a'] = 200;
}

//Unordered map is faster that map.
void unorderedmapdemo(){
    unordered_map<char , int> U;
    string s = "Akash Joshi";

    //Finds how many times a character is seen.
    for (char c:s) U[c]++; //O(N)
    
    //Map and sets are made using BSD
    deb(U['h'])
}

int main(){
    vectorDemo();
    return 0;
}