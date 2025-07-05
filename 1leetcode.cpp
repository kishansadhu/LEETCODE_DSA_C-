/*
1).find the index of that num which sum is equal to target




vector<int> x;
for(int i=0;i<nums.size() ;i++){
    for(int j=i+1;j<nums.size() ;j++){
        if(nums[j] + nums[i] == target ){
            x.push_back(i);
            x.push_back(j);
            return x;
                }
    }
}
    return x;






2).BINARY SEARCH
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> prices = {1,2,3,4,5,6,7};
    int t = 5;
    int st=0;
    int en=prices.size()-1;
    while(st<=en){
        int mid = (st+en)/2;
        if(prices[mid] < t){
            st = mid+1;
        }
        else if(prices[mid] > t){
            en = mid-1;
        }
        else{
            cout << prices[mid] << mid << " " << t;
            break;
        }

    }
    return 0;
}




3).POLINDRON NUM: (121 = 121)
#include<iostream>
#include<string>
using namespace std;

void pol(int num){
    string s;
    string tmp=to_string(num);
    if(num > 0){
        while(num!=0){
           int rem = num % 10;
            s = s + to_string(rem);
            num = num / 10;
        }
        if(s == tmp){
            cout << "true";
        }
        else{
            cout << "false";
        }
    }
    if(num==0){
      cout << "true";
    }
    else{
        cout << "false";
    }
}

int main(){
    pol(-121);
}










4).LARGEST COMMAN STRING PREFIX
=>mens sabse choti len ke char ko match karo string wise

#include<iostream>
#include<vector>
#include<cmath>
#include<string>
using namespace std;



int main(){
    vector<string> prices = {"flower","flo","flow"};//ans = flo;
    int lst = 0;
    int len = prices[lst].size()- 1 ;
    for(int i=0;i<prices.size();i++){
        if(prices[i].size() > prices[i+1].size()){
            lst = i+1;
        }
    }


    for(int i=0;i< prices.size() ;i++){
        for(int j=0;j<=len;j++){
            if(prices[lst][j] == prices[i][j]){
                cout << prices[i][j] <<endl;
            }
        }
        break;
    }


    return 0;
}






5).FIND THE UNIQC ELEMENT INT THE ARRAY
#include<iostream>
#include<vector>
#include<cmath>
#include<string>
using namespace std;


int mainn(){
    vector<int> nums ={0,1,2,2,3,0,4,2};
    vector<int> tmp ;
    int len = nums.size();
    int k=0;
    int val = 2;
    for(int i=0;i<nums.size();i++){
        if(nums[i]  !=  val){
            tmp.push_back(nums[i]);
        }
    }
    for(int i=0;i<len;i++){
        if(i<tmp.size()){
            k++;
        }
        else{
            tmp.push_back(51);
        }
    }
    nums = tmp;
    for(int prices : nums){
        cout << prices << endl;
    }


    return 0;
}


6).find the index of target if is match with number
#include<iostream>
#include<vector>
#include<cmath>
#include<string>
using namespace std;

int main(){
    vector<int> prices = {1};
    int t=1;
    int tmp;
    if(prices[0] > t){
        cout << 0;
    }
    for(int i=0;i<prices.size();i++){
        if(prices[i] == t){
            cout << i << endl;
        }
        else if(prices[i] < t){
            i + 1;
        }
    }
    cout << tmp + 1;


    return 0;
}



7).length of last word
int tmp;
        int tmp1;
        for(int i=0;i<s.size();i++){
            if(s[i] != ' '){
                tmp = i;
            }
        }

        for(int i = tmp ; i>=0 ; i--){
            if(s[i] == ' '){
                tmp1 = i;
                break;
            }
        }
        return tmp - tmp1;
        }







8).string jo leeter repeated he vo nahi jo repeated latter nahi he usme bhi jo first leeteesr we
return index ,otherwise return -1

ex = leetcode  => l=0
                  e=3
                  t=0
                  c=0
                  o=0
                  d=0
so here we got (ltcod) in this return the [ l ] index


---code ----
    string s = "aabbhw";

    string tmp;

    int c = 0;

    for(int i=0;i<s.size();i++){
        for(int j=0;j<s.size();j++){
                if(i==j){
                    continue;
                }
                else{
                    if(s[i] == s[j]){
                     c++;
                    }
                    else{
                        cout << "" ;
                    }
                }

        }
        if(c==0){
            string cal = s[i] + to_string(i);
            tmp += cal;
        }
        c=0;
    }


    if(tmp != ""){
        cout << tmp[1];
    }
    else{
        return -1;
    }







9).

int main(){
    // Solution s1;
    // int m = s1.reverse(-120);
    // cout << m;

    int x = 123;
    long rev=0;
    while(x!=0){
        int rem = x % 10;
        // int cal = 10 + rem;
        rev = rev * 10 + rem;
        x = x/10;
    }


    //rev < INT_MIN --> VAULE NAGATIVE HE
    // rev > INT_MAX  --> VALUE POSITION INT SE JYADAYE
    if(rev < INT_MIN  || rev > INT_MAX ){
       cout << 0;
    }
    cout << rev;




    return 0;
}


*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         vector<int> tmp;
//             for (int i = 0; i < prices.size(); i++) {
//                 for (int j = i + 1; j < prices.size(); j++) {
//                     if (prices[i] < prices[j]) {
//                         int cal = prices[j] - prices[i];
//                         // cout << prices[i] << "-" << prices[j] << " = " << cal << endl;
//                     tmp.push_back(cal);
//                     }
//                 }
//             }

//             sort(tmp.begin(), tmp.end(), greater<int>());

//         if (tmp.empty()) {
//              return 0;
//             }
//              else {
//                return tmp[0];
//             }

//     }
// };




//121 leetcode
int main() {
    // Solution s1;
    // vector<int> k = {1,2,4,7,11};
    // int a = s1.maxProfit(k);
    // cout << a;


  vector<int> prices = {1,2};
    vector<int> tm;
    int len = prices.size();
    int c = 0;
    int ans = 0;

    for (int i = 0; i <=prices.size(); i++) {
        int tmp = prices[c];
        if (i == len) {
            c++;
            i = c;
        } else {
            if (prices[i] > tmp) {
                int cal = prices[i] - tmp;
                cout << tmp << "-->" << prices[i] << " = " << cal << endl;
                // tm.push_back(cal);
            }
        }
    }

    // sort(tm.begin(), tm.end(), greater<int>());
    //     if (!tm.empty()) {
    //         int p = tm[0];
    //         cout << p << endl;
    //      }
    //      else{
    //         cout << 0;
    //      }



    return 0;
}







