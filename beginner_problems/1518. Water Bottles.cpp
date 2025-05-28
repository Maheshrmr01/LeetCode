class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int fullBottles = numBottles , emptyBottles = 0,drunkBottles = 0;
        while(fullBottles != 0)
        {
            drunkBottles += fullBottles;
            emptyBottles += fullBottles;
            fullBottles = emptyBottles / numExchange;
	            emptyBottles = emptyBottles % numExchange;
	        }
	        return drunkBottles;
	    }
};
