//Input: vector = [[1, 2, 3, 4], [5, 6], [7, 8]]
//Output: 1 2 3 4 5 6 7 8
//
//Input: vector = [[1, 2], [3], [4, 5, 6, 8]]
//Output: 1 2 3 4 5 6 8

#include <bits/stdc++.h>

using namespace std;

class FlattenVector
{
	public:
		int n;
		vector<vector<int>::iterator> iStart;
		vector<vector<int>::iterator> iEnd;
		int currIdx;
		
		FlattenVector(vector<vector<int>> &v)
		{
			n = v.size();
			currIdx = 0;
			iStart.resize(n);
			iEnd.resize(n);
			
			for (int i = 0; i < n; i++)
			{
				iStart[i] = v[i].begin();
				iEnd[i] = v[i].end();
			}
		}
		
		bool hasNext()
		{
			for (int i = 0; i < n; i++)
			{
				if (iStart[i] != iEnd[i])
				{
					return true;
				}
			
			}
}
