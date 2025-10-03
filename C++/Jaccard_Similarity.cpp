#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    set<int> A = {1, 2, 3, 4};
    set<int> B = {3, 4, 5, 6};

    vector<int> intersectionSet;
    vector<int> unionSet;

    set_intersection(A.begin(), A.end(), B.begin(), B.end(), back_inserter(intersectionSet));
    set_union(A.begin(), A.end(), B.begin(), B.end(), back_inserter(unionSet));

    double jaccard_similarity = static_cast<double>(intersectionSet.size()) / unionSet.size();
    cout << "Jaccard Similarity: " << jaccard_similarity << endl;
    return 0;
}
