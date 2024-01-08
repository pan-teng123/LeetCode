////
//// Created by HUAWEI on 2023/12/31.
////
//
////
//// Created by HUAWEI on 2023/12/31.
////
//#include <string>
//#include <vector>
//using namespace std;
//
//vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//    vector<int>A(1001,0);
//    vector<int>B(1001,0);
//    for (int i = 0; i < nums1.size(); ++i) {
//        A[nums1[i]]+=1;
//    }
//
//    for (int i = 0; i < nums2.size(); ++i) {
//        B[nums2[i]]+=1;
//    }
//    vector<int>ans;
//    for (int i = 0; i <1001 ; ++i) {
//       if(A[i]!=0&&B[i]!=0){
//           ans.push_back(i);
//       }
//    }
//    return ans;
//}
//
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
