#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

class TrieNode {
	public:
		bool endofWord;
		TrieNode* children[26];

		TrieNode()
		{
			endofWord = false;
			for (int i = 0; i < 26; i++)
				children[i] = nullptr;
		}
};

class Trie {

	public:
		TrieNode* root;
		Trie() { root = new TrieNode(); }

		void insert(std::string word)
		{
			TrieNode* node = root;
			for (char c : word)
			{
				int index = c - 'a';
				if (!node->children[index])
					node->children[index] = new TrieNode();
				node = node->children[index];
			}
		}
};

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n, k;
	std::cin >> n >> k;
	std::string x;
	Trie trie;
	for (int i = 0; i < n; i++)
	{
		std::cin >> x;
		trie.insert(x);
	}
	
	std::function<std::pair<bool, bool>(TrieNode*)> dfs;
	dfs = [&](TrieNode* node) -> std::pair<bool, bool>
	{
		bool f = true;
		for (int i = 0; i < 26; i++)
		{
			if (node->children[i])
			{
				f = false;
				break;
			}
		}
		if (f) return {false, true};
	
		bool win = false, lose = false;
		for (int i = 0; i < 26; i++)
		{
			if (node->children[i])
			{
				std::pair<bool, bool> p = dfs(node->children[i]);
				win |= !p.first;
				lose |= !p.second;
			}
		}
		return {win, lose};
	};

	std::pair<bool, bool> p = dfs(trie.root);
	if (!p.first) std::cout << "Second" << std::endl;
	else if (p.second) std::cout << "First" << std::endl;
	else if (k & 1) std::cout << "First" << std::endl;
	else std::cout << "Second" << std::endl;
	__Made in France__
}
