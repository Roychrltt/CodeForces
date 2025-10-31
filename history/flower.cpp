#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

class TrieNode {
	public:
		TrieNode* children[2];

		TrieNode()
		{
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
				}
				else
				{
					if (node->children[0] == nullptr) node->children[0] = new TrieNode();
					node = node->children[0];
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
					if (node->children[0]) node = node->children[0];
					else
					{
						ans |= (1 << i);
						node = node->children[1];
					}
				}
				else
				{
					if (node->children[1])
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
	int n, f;
	std::cin >> n >> f;
	std::vector<std::vector<std::pair<int, int>>> edges(n + 1, std::vector<std::pair<int, int>>());
	std::vector<int> indeg(n + 1);
	for (int i = 0; i < n - 1; i++)
	{
		int u, v, w;
		std::cin >> u >> v >> w;
		edges[u].push_back({v, w});
		edges[v].push_back({u, w});
	}

	std::vector<int> v(n + 1), vis(n + 1);
	std::function<void(int)> dfs;
	dfs = [&](int node) -> void
	{
		for (auto& [x, val] : edges[node])
		{
			if (!vis[x])
			{
				vis[x] = 1;
				v[x] = v[node] ^ val;
				dfs(x);
			}
		}
	};
	vis[f] = 1;
	dfs(f);

	Trie trie;
	for (int i = 1; i <= n; i++)
		if (i != f) trie.insert(v[i]);
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i != f)
		{
			int x = trie.query(v[i]);
			ans = std::max(ans, x ^ v[i]);
		}
	}
	std::cout << ans << std::endl;
	__Made in France__
}
