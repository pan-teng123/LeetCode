////
//// Created by HUAWEI on 2024/1/1.
////
//#include <unordered_set>
//
//using namespace std;
//
//int getSum(int n) {
//    int sum = 0;
//    while (n >= 1) {
//        sum += (n % 10) * (n % 10);
//        n /= 10;
//    }
//    return sum;
//}
//
//bool isHappy(int n) {
//    unordered_set<int> set;
//    int sum = n;
//    while (true) {
//        sum = getSum(sum);
//        if (sum == 1)return true;
//        else if (set.find(sum) == set.end()) {
//            set.insert(sum);
//        } else {
//            return false;
//        }
//    }
//}
