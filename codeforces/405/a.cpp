#include <algorithm>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++)
    cin >> arr[i];
  sort(arr, arr + n);
  for(int i = 0; i < n; i++)
    cout << arr[i] << " ";
}
