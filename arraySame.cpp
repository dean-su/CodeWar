#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;
class Same {
public:
  static bool comp(std::vector<int>, std::vector<int>);
};

bool Same::comp(std::vector<int> a, std::vector<int> b) {
  for (auto& v : a) {
    v = v * v;
  }
  std::sort(a.begin(), a.end());
  std::sort(b.begin(), b.end());
  return a == b;
}

int main(){
    Same s;
    vector<int> a1 = {121, 144, 19, 161, 19, 144, 19, 11};
    vector<int> a2 = {121, 14641, 20736, 361, 25921, 361, 20736, 361};
    cout<<s.comp(a1, a2)<<endl;
}