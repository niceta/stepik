// BinarySearch.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

using namespace std;


int binary_search(const std::vector<int>& v, int x) {
  int l = 0;
  int r = v.size() - 1;

  while (l <= r) {
    int m = l + (r - l) / 2;
    if (x >= v[m]) {
      l = m + 1;
    }
    else {
      r = m - 1;
    }
  }

  if (l - 1 >= 0 && v[l - 1] == x) {
    return l - 1;
  }
  return -1;
}

vector<int> fill_int_vector(int size) {
  vector<int> values(size);
  for (int& elem : values) {
    cin >> elem;
  }
  return values;
}

int main()
{
  vector<int> t = { 1, 2, 3 };
  cout << binary_search(t, 5);
  int N = 1;
  cin >> N;
  vector<int> values = fill_int_vector(N);
  int M = 1;
  cin >> M;
  vector<int> tests = fill_int_vector(M);
  
  for (int test : tests) {
    cout << values.size() - binary_search(values, test) - 1 << endl;
  }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
