//
//  main.cpp
//  338
//
//  Created by D_ on 16/8/31.
//  Copyright © 2016年 lucky star. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
//class Solution {
//public:
//    vector<int> countBits(int num) {
//        vector<int> re;
//        re.push_back(0);
//        for (int k = 1; k <= num; k++) {
//            int count = 0, i = k, temp;
//            while(i != 0) {
//                if (i % 2 != 0)
//                    count++;
//                i >>= 1;
//            }
//            re.push_back(count);
//        }
//        return re;
//    }
//};
    class Solution {
    public:
        vector<int> countBits(int num) {
            vector<int> re(num+1, 0);
            for (int i = 0; i <= num; i++) {
                re[i] = re[i>>1] + i % 2;
            }
            return re;
        }
    };
int main(int argc, const char * argv[]) {
    Solution s;
    auto r = s.countBits(5);
    for (auto i : r)
        cout << i << '\t';
    return 0;
}
