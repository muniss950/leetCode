
#include <iostream>
#include <queue>
#include <vector>

struct info{
    char s;
    int index;

    bool operator>(const info& rhs) const
    {
        return (int)s > (int)rhs.s && (int)index > (int)rhs.index;
    }
};

int main() {
    std::priority_queue<info, std::vector<info>, std::greater<info>> pq;

    info a{'b', 1};
    info c{'a', 3};
    info b{'a', 2};
    info d{'c', 1};

    pq.push(a);
    pq.push(b);
    pq.push(c);
    pq.push(d);

    while (!pq.empty()) {
        info top = pq.top();
        std::cout << "Character: " << top.s << ", Index: " << top.index << std::endl;
        pq.pop();
    }

    return 0;
}
