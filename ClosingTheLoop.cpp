//============================================================================
// Name        : Kattis_ClosingtheLoop.cpp
// Author      : Shabraiz
// Version     : 1.0
// Description : Kattis_ClosingtheLoop
//============================================================================


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> blueRopes;
vector<int> redRopes;

int findLongestLoop()
{
    int totalLength = 0;
    while (!blueRopes.empty() && !redRopes.empty())
    {
        totalLength += blueRopes.back() + redRopes.back() - 2;
        blueRopes.pop_back();
        redRopes.pop_back();
    }
    return totalLength;
}

int main()
{
    int numberOfTestCases;
    cin >> numberOfTestCases;
    for (int testCase=1; testCase<=numberOfTestCases; ++testCase)
    {
        blueRopes.clear();
        redRopes.clear();
        int numberOfRopeSegments;
        cin >> numberOfRopeSegments;
        for (int ropeSegment=0; ropeSegment<numberOfRopeSegments; ++ropeSegment)
        {
            int segmentLength;
            char segmentColor;
            cin >> segmentLength >> segmentColor;
            if (segmentColor == 'B')
                blueRopes.push_back(segmentLength);
            else
                redRopes.push_back(segmentLength);
        }
        sort(blueRopes.begin(), blueRopes.end());
        sort(redRopes.begin(), redRopes.end());

        int loopLength = findLongestLoop();
        cout << "Case #" << testCase << ": " << loopLength << endl;

    }
    return 0;
}
