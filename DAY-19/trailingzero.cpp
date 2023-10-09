//User function Template for C++
//geeks for geeks problem solution
//https://practice.geeksforgeeks.org/problems/trailing-zeroes-in-factorial5134/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
class Solution
{
public:
    int trailingZeroes(int N)
    {
        int count=0;
        
        while(N>=5)
        {
            count+=N/5;
            N/=5;
        }
        
        return count;
    }
};