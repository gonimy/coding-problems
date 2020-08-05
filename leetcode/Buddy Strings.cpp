class Solution {
public:
 
bool buddyStrings(string A, string B) {

	int lenA = A.size(), lenB = B.size();
	if (lenA != lenB)
		return false;

	int numCharA = unordered_set<char>(A.begin(), A.end()).size();
	if (A == B && numCharA < lenB)
		return true;
	vector<int> index;

	for (int i = 0; i < lenA; i++) {
		if (A[i] != B[i])
			index.push_back(i);
		if (index.size() > 2)
			return false;
	}

	return index.size() == 2 && A[index[0]] == B[index[1]]
			&& A[index[1]] == B[index[0]];
}



};
