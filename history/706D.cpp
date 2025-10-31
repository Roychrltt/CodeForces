#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

class TrieNode {
	public:
		TrieNode* children[2];
		int cnt = 0;

		TrieNode()
		{
			cnt = 0;
			children[0] = nullptr;
			children[1] = nullptr;
		}
};

class Trie {
	private:
		TrieNode* root;

	public:
		Trie() { root = new TrieNode(); }

		void insert(int num)
		{
			TrieNode* node = root;
			for (int i = 31; i >= 0; i--)
			{
				if (num & (1 << i))
				{
					if (node->children[1] == nullptr) node->children[1] = new TrieNode();
					node = node->children[1];
					node->cnt++;
				}
				else
				{
					if (node->children[0] == nullptr) node->children[0] = new TrieNode();
					node = node->children[0];
					node->cnt++;
				}
			}
		}

		void del(int num)
		{
			TrieNode* node = root;
			for (int i = 31; i >= 0; i--)
			{
				if (num & (1 << i))
				{
					node = node->children[1];
					node->cnt--;
				}
				else
				{
					node = node->children[0];
					node->cnt--;
				}
			}
		}

		int query(int num)
		{
			int ans = 0;
			TrieNode* node = root;
			for (int i = 31; i >= 0; i--)
			{
				if (num & (1 << i))
				{
					if (node->children[0] && node->children[0]->cnt) node = node->children[0];
					else
					{
						ans |= (1 << i);
						node = node->children[1];
					}
				}
				else
				{
					if (node->children[1] && node->children[1]->cnt)
					{
						ans |= (1 << i);
						node = node->children[1];
					}
					else node = node->children[0];

				}
			}
			return ans;
		}
};

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n;
	std::cin >> n;
	Trie trie;
	trie.insert(0);
	while (n--)
	{
		char c;
		int x;
		std::cin >> c >> x;
		if (c == '+') trie.insert(x);
		else if (c == '-') trie.del(x);
		else
		{
			int val = trie.query(x);
			std::cout << (x ^ val) << std::endl;
		}
	}
	__Made in France__
}
