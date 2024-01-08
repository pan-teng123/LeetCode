////
//// Created by HUAWEI on 2023/12/31.
////
//#include <string>
//#include <vector>
//using namespace std;
//bool isAnagram(string s, string t) {
//    if(s.size()!=t.size())return false;
//    int n=s.size();
//    vector<int>A(26,0);
//    vector<int>B(26,0);
//    for (int i = 0; i < n; ++i) {
//        A[s[i]-'a']+=1;
//    }
//
//    for (int i = 0; i < n; ++i) {
//        B[t[i]-'a']+=1;
//    }
//
//    for (int i = 0; i <26 ; ++i) {
//        if (A[i]!=B[i])return false;
//    }
//    return true;
//}
