#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<vector<int>> intervals = {
 {1,4}, {4,6}
};
    sort( intervals.begin() , intervals.end() );
    int i = 0 ; 
    while(  i < intervals.size() ) { 
        if(intervals[i][1] >= intervals[i +1][0] && intervals.size() > i + 1) {
            if(intervals[i+1][1] > intervals[i][1]){
                intervals[i][1] = intervals[i +1][1];
            }
            intervals.erase(intervals.begin() + i +1);
        } else { 
            i++; 
        }
    }

    cout << endl ;

    for(vector<int> line : intervals) { 
        cout << line[0] << " " << line[1] << endl; 
    }
    return 0;
}