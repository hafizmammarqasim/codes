
int maxProfit(vector<int>& prices) {
    int profit = 0;
    int less = prices[0];
    for (auto i : prices) {

        if (i - less > profit) {
            profit = i - less;
        }


        if (i < less) {
            less = i;
        }

    }

    return profit;

}

int maxProfit2(vector<int>& prices) {
    //brute force , failed on some cases due to time complexity of n^2

    int profit = 0;
    int a;
    bool first = 1;
    pair< int, int> less, great;
    less = {prices[0], 0};
    great = { prices[0], 0 };
    for (int i = 0; i < prices.size() - 1; i++) {
        for (int j = i + 1; j<prices.size(); j++) {
            if (first) {
                if (less.first > prices[j]) {
                    less.first = prices[j];
                    less.second = j;
                }
                else if (great.first < prices[j]) {
                    great.first = prices[j];
                    great.second = j;
                }
            }

            a = prices[j] - prices[i];
            if (a > 0 && a > profit) {

                profit = a;
            }
        }
        if (first) {
            cout << "After first iteration\n Largest element is " << great.first<<" with index "<<great.second << "  and smallest is " << less.first <<" with index " << less.second <<endl;
            if (less.second < great.second) {
                return great.first - less.first;

            }
            first = 0;
   }
    }
    return profit;

}