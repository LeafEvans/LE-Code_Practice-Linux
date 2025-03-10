#if false
#include <algorithm>
#include <iostream>
#include <vector>

void Test() {
  std::vector<int> v{1, 2, 2, 2, 3, 4, 5};
  auto it = std::search_n(v.begin(), v.end(), 3, 2);
  if (it != v.end()) {
    std::cout << "Found at index: " << std::distance(v.begin(), it)
              << std::endl;
  } else {
    std::cout << "Not found." << std::endl;
  }
}

int main() {
  Test();
  return 0;
}
#endif

#if false
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> v{1, 2, 2, 2, 3, 4, 5};
  auto it = std::search_n(v.begin(), v.end(), 3, 2);
  if (it != v.end()) {
    std::cout << "Found at index: " << std::distance(v.begin(), it)
              << std::endl;
  } else {
    std::cout << "Not found." << std::endl;
  }
  return 0;
}
#endif

#if false
#include <algorithm>
#include <execution>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> v{1, 2, 2, 2, 3, 4, 5};
  auto it = std::search_n(std::execution::par, v.begin(), v.end(), 3, 2);
  if (it != v.end()) {
    std::cout << "Found at index: " << std::distance(v.begin(), it)
              << std::endl;
  } else {
    std::cout << "Not found." << std::endl;
  }
  return 0;
}
#endif

#if false
#include <algorithm>
#include <execution>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> v1{1, 2, 3, 4, 5};
  std::vector<int> v2{3, 4, 5, 6, 7};
  std::vector<int> result;
  result.reserve(v1.size());
  auto it =
      std::set_difference(std::execution::par, v1.begin(), v1.end(), v2.begin(),
                          v2.end(), std::back_inserter(result));
  std::for_each(result.cbegin(), result.cend(),
                [](int i) { std::cout << i << " "; });
  std::cout << std::endl;
  return 0;
}
#endif

#if false
#include <algorithm>
#include <array>
#include <execution>
#include <iostream>

int main() {
  std::array<int, 5> a1{1, 2, 3, 4, 5};
  std::array<int, 5> a2{3, 4, 5, 6, 7};
  std::array<int, 5> result{};
  auto it = std::set_difference(std::execution::par, a1.begin(), a1.end(),
                                a2.begin(), a2.end(), result.begin());
  std::for_each(result.cbegin(), result.cend(),
                [](int i) { std::cout << i << " "; });
  std::cout << std::endl;
  return 0;
}
#endif

#if false
#include <algorithm>
#include <execution>
#include <iostream>
#include <random>
#include <vector>

int main() {
  std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  std::mt19937 gen(std::random_device{}());
  std::shuffle(v.begin(), v.end(), gen);
  for (const auto& i : v) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  std::sort(std::execution::par, v.begin(), v.end());
  for (const auto& i : v) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  return 0;
}
#endif

#if false
#include <algorithm>
#include <execution>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> v{4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
  std::make_heap(v.begin(), v.end());
  std::sort_heap(v.begin(), v.end());
  std::for_each(std::execution::par, v.cbegin(), v.cend(),
                [](int x) { std::cout << x << " "; });
  std::cout << std::endl;
  return 0;
}
#endif

#if false
#include <algorithm>
#include <execution>
#include <iostream>

int main() {
  std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  auto it = std::stable_partition(std::execution::par, v.begin(), v.end(),
                                  [](int x) { return x % 2 == 0; });
  std::for_each(v.cbegin(), v.cend(), [](int x) { std::cout << x << " "; });
  std::cout << std::endl;
  return 0;
}
#endif

#if false
#include <algorithm>
#include <execution>
#include <iostream>
#include <random>
#include <vector>

int main() {
  std::vector<int> vec(10);
  std::mt19937 gen(std::random_device{}());
  std::uniform_int_distribution<> dis(1, 100);

  std::generate(vec.begin(), vec.end(), [&] { return dis(gen); });

  for (const auto& num : vec) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  std::sort(vec.begin(), vec.end());
  for (const auto& num : vec) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}
#endif

#if false
#include <algorithm>
#include <execution>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> v1{1, 2, 3, 4, 5};
  std::vector<int> v2{10, 20, 30, 40, 50};
  auto it = std::swap_ranges(v1.begin(), v1.end(), v2.begin());
  for (const auto& i : v1) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  for (const auto& i : v2) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  return 0;
}
#endif

#if false
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec{1, 2, 3, 4, 5};
  std::vector<int> result(vec.size());
  std::transform(vec.cbegin(), vec.cend(), result.begin(),
                 [](int x) { return x * 2; });
  std::for_each(result.cbegin(), result.cend(),
                [](int x) { std::cout << x << " "; });
  std::cout << std::endl;
  return 0;                 
}
#endif

#if false
#include <algorithm>
#include <execution>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec{1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5};
  auto last = std::unique(vec.begin(), vec.end());
  vec.erase(last, vec.end());
  for (const auto& i : vec) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  return 0;
}
#endif

#if false
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> v{1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5};
  std::vector<int> result;
  auto last = std::unique_copy(v.begin(), v.end(), std::back_inserter(result));
  for (const auto& i : result) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  return 0;
}
#endif

#if false
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec{1, 2, 4, 4, 5, 6, 7};
  auto last = std::lower_bound(vec.begin(), vec.end(), 4);
  std::cout << "Lower bound of 4 is at index: "
            << std::distance(vec.begin(), last) << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <sstream>

int main() {
  std::istringstream iss("Hello, World!");
  std::string str;
  iss >> str;
  std::cout << str << std::endl;
  return 0;
}
#endif

#if false
#include <fstream>
#include <iostream>
#include <limits>

int main() {
  int i;
  while (std::cin >> i, !std::cin.eof()) {
    if (std::cin.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }
    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Invalid input. Please try again." << std::endl;
      continue;
    }
    std::cout << "You entered: " << i << std::endl;
  }
  std::cout << "End of input." << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <limits>
#include <stdexcept>

int main() {
  int i;
  while (std::cin >> i, !std::cin.eof()) {
    if (std::cin.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }
    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Invalid input. Please try again." << std::endl;
      continue;
    }
    std::cout << "You entered: " << i << std::endl;
  }
  std::cout << "End of input." << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <limits>
#include <stdexcept>

int main() {
  int i;
  while (std::cin >> i, !std::cin.eof()) {
    if (std::cin.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }
    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Invalid input. Please try again." << std::endl;
      continue;
    }
    std::cout << "You input: " << i << std::endl;
  }
  std::cout << "End of input." << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <limits>
#include <stdexcept>

int main() {
  int i;
  while (std::cin >> i, !std::cin.eof()) {
    if (std::cin.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }
    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Invalid input. Please try again." << std::endl;
      continue;
    }
    std::cout << "You input: " << i << std::endl;
  }
  std::cout << "End of input." << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <string>

int main() {
  std::string str;
  while (std::getline(std::cin, str), !std::cin.eof()) {
    if (std::cin.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }
    std::cout << "You entered: " << str << std::endl;
  }
  std::cout << "End of input." << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <string>

int main() {
  char ch;
  while (std::cin >> ch, !std::cin.eof()) {
    if (std::cin.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }
    std::cout << "You entered: " << ch << std::endl;
  }
  std::cout << "End of input." << std::endl;
  return 0;
}
#endif

#if false
#include <fstream>

int main() {
  std::fstream fs;
  fs.open("test.txt", std::ios::out | std::ios::in);
  if (fs.is_open()) {
    fs.close();
  }
  return 0;
}
#endif

#if false
#include <fstream>
#include <iostream>
#include <limits>
#include <string>

int main() {
  std::string file_name;
  std::string file_content;

  while (std::cin >> file_name, !std::cin.eof()) {
    if (std::cin.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }

    std::ifstream ifs(file_name);
    if (ifs.is_open()) {
      while (std::getline(ifs, file_content)) {
        std::cout << file_content << std::endl;
      }
      if (ifs.bad()) {
        throw std::runtime_error("IO stream corrupted.");
      }
      ifs.close();
    } else {
      ifs.clear();
      ifs.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "File not found. Please try again." << std::endl;
      continue;
    }
  }
  std::cout << "File processing completed." << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <limits>
#include <stdexcept>

int main() {
  int i;
  while (std::cin >> i, !std::cin.eof()) {
    if (std::cin.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }
    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Invalid input. Please try again." << std::endl;
      continue;
    }
    std::cout << "You input: " << i << std::endl;
  }
  std::cout << "End of input." << std::endl;
  return 0;
}
#endif

#if false
#include <fstream>
#include <iostream>
#include <limits>
#include <string>

int main() {
  std::string file_name;
  std::string file_content;
  while (std::cin >> file_name, !std::cin.eof()) {
    if (std::cin.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }
    std::ifstream ifs(file_name);
    if (ifs.is_open()) {
      while (std::getline(ifs, file_content)) {
        std::cout << file_content << std::endl;
      }
      if (ifs.bad()) {
        throw std::runtime_error("IO stream corrupted.");
      }
      ifs.close();
    } else {
      ifs.clear();
      ifs.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "File not found. Please try again." << std::endl;
      continue;
    }
  }
  std::cout << "File processing completed." << std::endl;
  return 0;
}
#endif

#if false
#include <fstream>
#include <iostream>
#include <limits>
#include <stdexcept>
#include <string>

int main() {
  std::string file_name{};
  std::string file_content{};

  while (std::cin >> file_name, !std::cin.eof()) {
    if (std::cin.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }
    std::ifstream ifs(file_name);
    if (ifs.is_open()) {
      while (std::getline(ifs, file_content)) {
        std::cout << file_content << std::endl;
      }
      if (ifs.bad()) {
        std::runtime_error("IO stream corrupted.");
      }
      ifs.close();
    } else {
      ifs.clear();
      ifs.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "File not found. Please try again." << std::endl;
      continue;
    }
  }
  std::cout << "File processing completed." << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <sstream>

int main() {
  std::istringstream iss;
  std::ostringstream oss;
  std::stringstream ss;
  return 0;
}
#endif

#if false
#include <iostream>
#include <sstream>

int main() {
  std::string str("Hello, World!");
  std::istringstream iss(str);
  iss.str("Hello, C++!");
  std::cout << iss.str() << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <limits>
#include <sstream>

int main() {
  std::string str("12");
  std::stringstream ss(str);
  int i = 0;
  ss >> i;
  if (ss.bad()) {
    throw std::runtime_error("String stream corrupted.");
  }
  if (ss.fail()) {
    ss.clear();
    ss.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Please try again." << std::endl;
  } else {
    std::cout << "You entered: " << i << std::endl;
  }
  return 0;
}
#endif

#if false
#include <iostream>
#include <limits>
#include <sstream>
#include <stdexcept>

int main() {
  std::string str("321");
  std::stringstream ss(str);
  int i = 0;
  ss >> i;
  if (ss.bad()) {
    throw std::runtime_error("String stream corrupted.");
  }
  if (ss.fail()) {
    ss.clear();
    ss.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Please try again." << std::endl;
  }
  std::cout << "You entered: "  << i << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <sstream>

int main() {
  int i = 123;
  std::stringstream ss;
  ss << i << std::endl;
  if (ss.bad()) {
    throw std::runtime_error("String stream corrupted.");
  } else {
    std::cout << ss.str();
  }
  return 0;
}
#endif

#if false
#include <iostream>
#include <sstream>

int main() {
  int num{32};
  std::string src{"Hello, World! Hello, World!"};
  std::string dest{};
  std::stringstream ss(src);
  while (ss >> dest) {
    std::cout << dest << std::endl;
  }
  if (ss.bad()) {
    throw std::runtime_error("String stream corrupted.");
  }
  return 0;
}
#endif

#if false
#include <iostream>
#include <limits>
#include <sstream>
#include <stdexcept>

int main() {
  int i;
  while (std::cin >> i, !std::cin.eof()) {
    if (std::cin.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }
    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Invalid input. Please try again." << std::endl;
      continue;
    }
    std::cout << "You entered: " << i << std::endl;
  }
  std::cout << "End of input." << std::endl;
  return 0;
}
#endif

#if false
#include <fstream>
#include <iostream>
#include <limits>
#include <string>

int main() {
  std::string file_name{};
  std::string file_content{};
  while (std::cin >> file_name, !std::cin.eof()) {
    if (std::cin.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }
    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Invalid input. Please try again." << std::endl;
      continue;
    }
    std::ifstream ifs{file_name};
    if (ifs.is_open()) {
      while (std::getline(ifs, file_content)) {
        std::cout << file_content << std::endl;
      }
      if (ifs.bad()) {
        throw std::runtime_error("Ifstream corrupted.");
      }
      ifs.close();
    }
  }
  std::cout << "File processing completed." << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <sstream>

int main() {
  std::string str{"21"};
  std::istringstream iss{str};
  int i{};
  iss >> i;
  std::cout << i << std::endl;
  return 0;
}
#endif

#if false
#include <algorithm>
#include <iostream>
#include <list>

static bool Twice(int a, int b) {
  return a == 2 * b;
}

int main() {
  std::list<int> l{50, 40, 10, 20, 20};
  std::cout << "l = ( ";
  for (const auto& i : l) {
    std::cout << i << ' ';
  }
  std::cout << ')' << std::endl;
  auto it = std::adjacent_find(l.begin(), l.end(), Twice);
  if (it == l.end()) {
    std::cout << "There are not two adjacent elements that are equal."
              << std::endl;
  } else {
    std::cout << "The first two adjacent elements that are equal are: " << *it
              << ' ' << *(++it) << std::endl;
  }

  return 0;
}
#endif

#if false
#include <iostream>
#include <thread>

void Test(int value, const int& ref_value, const int* ptr_value) {
  for (unsigned j = 0; j < 1e6; ++j) {
    int k = *ptr_value;
  }
}

int main() {
  int value = 10;
  std::thread t{Test, value, std::ref(value), &value};
  t.detach();
  return 0;
}
#endif

#if false
#include <iostream>
#include <string>
#include <thread>

class Test {
 public:
  Test(int value) {
    std::cout << std::this_thread::get_id() << " Constructor called."
              << std::endl;
  }
};

void TestFunction(const Test& test) {
  std::cout << "Child thread: " << std::this_thread::get_id() << std::endl;
}

int main() {
  std::cout << "Main thread: " << std::this_thread::get_id() << std::endl;
  int value = 100;
  // 使用了隐式转换
  std::thread t{TestFunction, value};
  t.detach();
  return 0;
}
#endif

#if false
#include <iostream>
#include <thread>

int main() {
  std::cout << "Main thread: " << std::this_thread::get_id() << std::endl;
  return 0;
}
#endif

#if false
#include <atomic>
#include <iostream>
#include <thread>

std::atomic<unsigned> g_num{0};

void Test() {
  for (unsigned i = 0; i < 1e5; ++i) {
    ++g_num;
  }
}

int main() {
  std::thread t1{Test};
  std::thread t2{Test};
  t1.join();
  t2.join();
  std::cout << "g_num = " << g_num << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <mutex>
#include <thread>

unsigned g_num{0};
std::mutex g_mutex1{};
std::mutex g_mutex2{};

void Test() {
  for (unsigned i = 0; i < 1e5; ++i) {
    std::scoped_lock lock{g_mutex1, g_mutex2};
    ++g_num;
  }
}

int main() {
  std::thread t{Test};
  for (unsigned i = 0; i < 1e5; ++i) {
    std::scoped_lock lock{g_mutex1, g_mutex2};
    ++g_num;
  }
  t.join();
  std::cout << "g_num = " << g_num << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <string>
#include <thread>

void PrintStr(const std::string& str) {
  for (size_t i = 0; i < 1e6; ++i) {
    std::cout << i;
  }
  std::cout << str << std::endl;
}

int main() {
  std::thread t{PrintStr, "Hello, World!"};
  bool is_joinable = t.joinable();
  if (is_joinable) {
    t.join();
  }
  return 0;
}
#endif

#if false
#include <iostream>
#include <thread>

void Foo(int& x) {
  x += 1;
}

int main() {
  int num{1};
  std::thread t{Foo, std::ref(num)};
  t.join();
  std::cout << num << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <thread>

void ThreadFunction() {
  std::cout << "Child thread: " << std::this_thread::get_id() << std::endl;
}

int main() {
  std::thread t{ThreadFunction};
  std::cout << "Main thread: " << std::this_thread::get_id() << std::endl;
  t.join();
  return 0;
}
#endif

#if false
#include <cstddef>
#include <iostream>
#include <mutex>
#include <thread>

int g_count{0};
std::mutex g_mutex{};

void Test() {
  for (size_t i = 0; i < 136; ++i) {
    std::scoped_lock lock{g_mutex};
    ++g_count;
  }
}

int main() {
  std::thread t1{Test};
  std::thread t2{Test};
  t1.join();
  t2.join();
  std::cout << "g_count = " << g_count << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <mutex>

std::mutex g_mutex1{};
std::mutex g_mutex2{};

void Test() {
  std::scoped_lock lock{g_mutex1, g_mutex2};

}
#endif

#if false
#include <iostream>
#include <string>

double Divide(double divisior, double dividend) {
  if (dividend == 0) {
    throw std::runtime_error("Dividend cannot be zero.");
  }
  return divisior / dividend;
}

void InputNum(const std::string& str, double& num) {
  std::cout << str << std::endl;
  while (std::cin >> num, !std::cin.eof()) {
    if (std::cin.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }
    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Invalid input. Please try again." << std::endl;
      continue;
    }
    break;
  }
}

int main() {
  double divisior{.0};
  double dividend{.0};
  InputNum("Enter the divisior: ", divisior);
  InputNum("Enter the dividend: ", dividend);
  try {
    double result = Divide(divisior, dividend);
    std::cout << "Result of " << divisior << " / " << dividend << " = "
              << result << std::endl;
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  return 0;
}
#endif

#if false
#include <fstream>
#include <iostream>

void OutputFileContent(const std::string& file_name) {
  std::ifstream ifs(file_name);
  std::string file_line_content;
  if (ifs.is_open()) {
    while (std::getline(ifs, file_line_content)) {
      std::cout << file_line_content << std::endl;
    }
    if (ifs.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }
    ifs.close();
  } else {
    if (ifs.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }
    if (ifs.fail()) {
      throw std::runtime_error("File not found.");
    }
  }
}

int main() {
  std::string file_name;
  while (std::cin >> file_name, !std::cin.eof()) {
    if (std::cin.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }
    try {
      OutputFileContent(file_name);
    } catch (const std::exception& e) {
      std::cerr << e.what() << std::endl;
    } catch (...) {
      std::cerr << "Unknown exception." << std::endl;
    }
  }
  return 0;
}
#endif

#if false
#include <fstream>
#include <iostream>

int main() {
  try {
    while (true) {
      int* ptr = new int[100000]{};
    }
  } catch (const std::bad_alloc& e) {
    std::cerr << e.what() << std::endl;
  } catch (...) {
    std::cerr << "Unknown exception." << std::endl;
  }
  return 0;
}
#endif

#if false
#include <iostream>
#include <stdexcept>
#include <vector>

int main() {
  std::vector<int> vec{1, 2, 3, 4, 5};
  try {
    vec.at(10);
  } catch (const std::out_of_range& e) {
    std::cerr << e.what() << std::endl;
  } catch (...) {
    std::cerr << "Unknown exception." << std::endl;
  }
  return 0;
}
#endif

#if false
#include <iostream>
#include <limits>

int main() {
  int i = 10;
  while (std::cin >> i, !std::cin.eof()) {
    if (std::cin.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }
    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cerr << "Invalid input. Please try again." << std::endl;
      continue;
    }
    std::cout << "You entered: " << i << std::endl;
  }
  std::cout << "End of input." << std::endl;
  return 0;
}
#endif

#if false
#include <fstream>
#include <iostream>
#include <limits>
#include <string>

int main() {
  std::string file_name;
  std::string file_line_content;
  while (std::cin >> file_name, !std::cin.eof()) {
    if (std::cin.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }
    std::ifstream ifs(file_name);
    if (ifs.is_open()) {
      while (std::getline(ifs, file_line_content)) {
        std::cout << file_line_content << std::endl;
      }
      if (ifs.bad()) {
        throw std::runtime_error("IO stream corrupted.");
      }
      ifs.close();
    } else {
      ifs.clear();
      ifs.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "File not found. Please try again." << std::endl;
      continue;
    }
  }
  std::cout << "File processing completed." << std::endl;
  return 0;
}
#endif

#if false
#include <fstream>
#include <iostream>
#include <limits>
#include <string>

int main() {
  std::string file_name{};
  std::string file_line_content{};
  while (std::cin >> file_name, !std::cin.eof()) {
    if (std::cin.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }
    std::ifstream ifs{file_name};
    if (ifs.is_open()) {
      while (std::getline(ifs, file_line_content)) {
        std::cout << file_line_content << std::endl;
      }
      if (ifs.bad()) {
        throw std::runtime_error("IO stream corrupted.");
      }
    } else {
      ifs.clear();
      ifs.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cerr << "File not found. Please try again." << std::endl;
    }
  }
  std::cout << "File processing completed." << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <limits>
#include <string>

double Divide(double divisor, double dividend) {
  if (dividend == 0.0) {
    throw std::runtime_error("Dividend cannot be zero.");
  }
  return divisor / dividend;
}

void InputNum(const std::string& str, double& num) {
  std::cout << str << std::endl;
  while (std::cin >> num, !std::cin.eof()) {
    if (std::cin.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }
    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cerr << "Invalid input. Please try again." << std::endl;
      continue;
    }
    break;
  }
}

int main() {
  double divisior{0.0};
  double dividend{0.0};
  InputNum("Enter the divisior: ", divisior);
  InputNum("Enter the dividend: ", dividend);
  try {
    double result = Divide(divisior, dividend);
    std::cout << "Result of " << divisior << " / " << dividend << " = "
              << result << std::endl;
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  return 0;
}
#endif

#if false
#include <fstream>
#include <iostream>
#include <string>

void OutputFileContent(const std::string& file_name) {
  std::ifstream ifs{file_name};
  std::string file_line_content;
  if (ifs.is_open()) {
    while (std::getline(ifs, file_line_content)) {
      std::cout << file_line_content << std::endl;
    }
    if (ifs.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }
    ifs.close();
  } else {
    if (ifs.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }
    if (ifs.fail()) {
      throw std::runtime_error("File not found.");
    }
  }
}
#endif

#if false
#include <iostream>
#include <stdexcept>
#include <vector>

int main() {
  std::vector<int> vec{1,2,3,4,5};
  try {
    vec.at(10);
  } catch (const std::out_of_range& e) {
    std::cerr << e.what() << std::endl;
  } catch(...) {
    std::cerr << "Unknown exception." << std::endl;
  }
  return 0;
}
#endif

#if false
#include <cstdlib>
#include <iostream>
#include <vector>

std::vector<int*> g_vec{};

int Test() {
  int* ptr = new int(rand());
  g_vec.push_back(ptr);
  static unsigned func_call_count{0};
  return ++func_call_count;
}

int main() {
  Test();
  Test();
  Test();
  unsigned test_func_call_count = Test();
  std::cout << test_func_call_count << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <string>

int main() {
  std::string* ptr_str = new std::string("Hello, World!");
  std::cout << *ptr_str << std::endl;
  int* ptr = new int[100]();
  std::cout << ptr[20] << std::endl;
  delete ptr_str;
  delete[] ptr;
  return 0;
}
#endif

#if false
#include <iostream>
#include <std/type_index.hpp>

int main() {
  auto i = 100;
  std::cout << std::typeindex::type_id_with_cvr<decltype(i)>() << std::endl;
  return 0;
}
#endif

#if false
template <typename T, typename U>
auto Add(T t, U u) -> decltype(t + u) {
  return t + u;
}
#endif

#if false
#include <iostream>
#include <std/type_index.hpp>

int main() {
  auto i = 100;
  auto& i2 = i;
  std::cout << std::typeindex::type_id_with_cvr<decltype(i2)>() << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <std/type_index.hpp>

int main() {
  auto i = 100;
  const auto& ref_i = i;
  auto i2 = ref_i;
  std::cout << std::typeindex::type_id_with_cvr<decltype(i2)>() << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <std/type_index.hpp>

int main() {
  int i = 100;
  const int* const ptr = &i;
  auto& ptr2 = ptr;
  std::cout << std::typeindex::type_id_with_cvr<decltype(ptr2)>()
            << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>

int main() {
  int i = 10;
  [=, &i](int x) {
    std::cout << x << std::endl;
    std::cout << i << std::endl;
  }(200);
  return 0;
}
#endif

#if false
#include <iostream>

class Test {
 public:
  Test() : output_call_count_{0} {}
  void Output() const {
    std::cout << "Output called." << std::endl;
    ++output_call_count_;
  }
  unsigned int output_call_count() const { return output_call_count_; }

 private:
  mutable unsigned output_call_count_;
};

int main() {
  Test test{};
  test.Output();
  test.Output();
  test.Output();
  std::cout << "Output call count: " << test.output_call_count() << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <vector>

class Test {
 public:
  Test() = default;
  Test(unsigned count) : count_(count) {}

  Test& operator++() {
    ++count_;
    return *this;
  }

  Test operator++(int) {
    Test temp = *this;
    ++(*this);
    return temp;
  }

  Test& operator--() {
    --count_;
    return *this;
  }

  Test& operator--(int) {
    Test temp = *this;
    --(*this);
    return *this;
  }

  int operator[](size_t index) const { return vec_.at(index); }

  int& operator[](size_t index) { return vec_.at(index); }

  friend std::ostream& operator<<(std::ostream& os, const Test& test) {
    return os << test.count_;
  }

  friend std::istream& operator>>(std::istream& is, Test& test) {
    return is >> test.count_;
  }

  Test operator+(const Test& test) const {
    return Test(this->count_ + test.count_);
  }

  Test operator=(const Test& test) {
    if (this != &test) {
      count_ = test.count_;
      vec_ = test.vec_;
    }
    return *this;
  }

  bool operator<(const Test& test) const { return count_ < test.count_; }

  bool operator>(const Test& test) const { return count_ > test.count_; }

  bool operator==(const Test& test) const { return count_ == test.count_; }

  bool operator!=(const Test& test) const { return count_ != test.count_; }

  bool operator<=(const Test& test) const { return count_ <= test.count_; }

  bool operator>=(const Test& test) const { return count_ >= test.count_; }

  Test operator-() const { return Test(-count_); }

  Test operator+() const { return *this; }

  Test operator+=(const Test& test) {
    count_ += test.count_;
    return *this;
  }

  Test operator-=(const Test& test) {
    count_ -= test.count_;
    return *this;
  }

  Test operator*=(const Test& test) {
    count_ *= test.count_;
    return *this;
  }

  Test operator/=(const Test& test) {
    count_ /= test.count_;
    return *this;
  }

  Test operator%=(const Test& test) {
    count_ %= test.count_;
    return *this;
  }

  Test operator&=(const Test& test) {
    count_ &= test.count_;
    return *this;
  }

  Test operator|=(const Test& test) {
    count_ |= test.count_;
    return *this;
  }

  Test operator^=(const Test& test) {
    count_ ^= test.count_;
    return *this;
  }

  Test operator<<=(const Test& test) {
    count_ <<= test.count_;
    return *this;
  }

  Test operator>>=(const Test& test) {
    count_ >>= test.count_;
    return *this;
  }

  unsigned count() const { return count_; }

  std::vector<int> vec() const { return vec_; }

 private:
  unsigned count_;
  std::vector<int> vec_{1, 2, 3, 4, 5, 6};
};
#endif

#if false
#include <iostream>

class Spear {
 public:
  Spear(const std::string& name, const std::string& icon)
      : name_(name), icon_(icon) {}
  virtual ~Spear() = default;
  virtual void OpenFire() const {
    std::cout << "Spear::OpenFire()" << std::endl;
  }

 protected:
  std::string name_;
  std::string icon_;
};

class FireSpear : public Spear {
 public:
  FireSpear(const std::string& name, const std::string& icon, int fire)
      : Spear(name, icon), fire_(fire) {}
  virtual ~FireSpear() = default;
  void OpenFire() const override {
    std::cout << "FireSpear::OpenFire()" << std::endl;
  }

 protected:
  int fire_;
};

class IceSpear : public Spear {
 public:
  IceSpear(const std::string& name, const std::string& icon, int ice)
      : Spear(name, icon), ice_(ice) {}
  ~IceSpear() = default;
  void OpenFire() const override {
    std::cout << "IceSpear::OpenFire()" << std::endl;
  }

 protected:
  int ice_;
};

void OpenFire(const Spear& spear) {
  spear.OpenFire();
}

int main() {
  FireSpear fire_spear("Fire Spear", "Fire", 100);
  IceSpear ice_spear("Ice Spear", "Ice", 50);
  OpenFire(fire_spear);
  OpenFire(ice_spear);
  return 0;
}
#endif

#if false
#include <iostream>

class Test {
 public:
  static unsigned count() { return count_; }
  static void set_count(unsigned count) { count_ = count; }

 private:
  static unsigned count_;
};

unsigned Test::count_{100};

int main() {
  std::cout << Test::count() << '\n';
  Test::set_count(200);
  std::cout << Test::count() << '\n';
  return 0;
}
#endif

#if false
#include <iostream>

class Spear {
 public:
  Spear(const std::string& name, const std::string& icon)
      : name_(name), icon_(icon) {}
  virtual ~Spear() = default;
  virtual void OpenFire() const {
    std::cout << "Spear::OpenFire()" << std::endl;
  }

 protected:
  std::string name_;
  std::string icon_;
};

class FireSpear : public Spear {
 public:
  FireSpear(const std::string& name, const std::string& icon, int fire)
      : Spear(name, icon), fire_(fire) {}
  virtual ~FireSpear() = default;
  void OpenFire() const override {
    std::cout << "FireSpear::OpenFire()" << std::endl;
  }

 protected:
  int fire_;
};

class IceSpear : public Spear {
 public:
  IceSpear(const std::string& name, const std::string& icon, int ice)
      : Spear(name, icon), ice_(ice) {}
  ~IceSpear() = default;
  void OpenFire() const override {
    std::cout << "IceSpear::OpenFire()" << std::endl;
  }

 protected:
  int ice_;
};

int main() {
  Spear* spear = new FireSpear("Fire Spear", "Fire", 100);
  std::string type_name = typeid(*spear).name();
  if (type_name == "class FireSpear" || type_name == "9FireSpear") {
    FireSpear* fire_spear = dynamic_cast<FireSpear*>(spear);
    if (fire_spear) {
      fire_spear->OpenFire();
    }
  }
  return 0;
}
#endif

#if false
#include <cstring>

class Test {
 public:
  Test() = default;

  Test(const Test& test) {
    if (test.str_) {
      str_ = new char[std::strlen(test.str_) + 1];
      std::strcpy(str_, test.str_);
    } else {
      str_ = nullptr;
    }
  }

  Test(Test&& test) {
    if (test.str_) {
      str_ = test.str_;
      test.str_ = nullptr;
    } else {
      str_ = nullptr;
    }
  }

  Test& operator=(const Test& test) {
    if (this != &test) {
      delete[] str_;
      str_ = nullptr;
      if (test.str_) {
        str_ = new char[std::strlen(test.str_) + 1];
        std::strcpy(str_, test.str_);
      } else {
        str_ = nullptr;
      }
    }
  }

  Test& operator=(Test&& test) {
    if (this != &test) {
      delete[] str_;
      str_ = nullptr;
      if (test.str_) {
        str_ = test.str_;
        test.str_ = nullptr;
      } else {
        str_ = nullptr;
      }
    }
  }

 private:
  char* str_{nullptr};
};
#endif

#if false
#include <iostream>
#include <memory>

int main() {
  std::shared_ptr<int> ptr{std::make_shared<int>(100)};
  auto ptr2{ptr};
  std::cout << ptr.use_count() << std::endl;
  ptr2.reset();
  std::cout << ptr.use_count() << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <memory>

int main() {
  std::shared_ptr<int> ptr{std::make_shared<int>(100)};
  ptr.reset(new int{200});
  std::cout << *ptr << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <memory>
#include <utility>

int main() {
  std::shared_ptr<int> ptr1{std::make_shared<int>(100)};
  std::shared_ptr<int> ptr2{std::make_shared<int>(200)};
  ptr1.swap(ptr2);
  std::cout << *ptr1 << std::endl;
  std::cout << *ptr2 << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <memory>

int main() {
  std::shared_ptr<int> ptr{std::make_shared<int>(100)};
  std::cout << *ptr << std::endl;
  std::weak_ptr<int> ptr2{ptr};
  std::cout << ptr2.use_count() << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <memory>

int main() {
  std::unique_ptr<int> ptr1{std::make_unique<int>(99)};
  std::shared_ptr<int> ptr2{std::move(ptr1)};
  return 0;
}
#endif

#if false
#include <iostream>
#include <limits>

int main() {
  int i = 10;
  while (std::cin >> i, !std::cin.eof()) {
    if (std::cin.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }
    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cerr << "Invalid input. Please try again." << std::endl;
      continue;
    }
    std::cout << "You entered: " << i << std::endl;
  }
  std::cout << "End of input." << std::endl;
  return 0;
}
#endif

#if false
#include <fstream>
#include <iostream>
#include <limits>
#include <string>

int main() {
  std::string file_name;
  std::string file_line_content;

  while (std::cin >> file_name, !std::cin.eof()) {
    if (std::cin.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }
    std::ifstream ifs(file_name);
    if (ifs.is_open()) {
      while (std::getline(ifs, file_line_content)) {
        std::cout << file_line_content << std::endl;
      }
      if (ifs.bad()) {
        throw std::runtime_error("IO stream corrupted.");
      }
      ifs.close();
    } else {
      ifs.close();
      ifs.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cerr << "File not found. Please try again." << std::endl;
      continue;
    }
  }
  std::cout << "File processing completed." << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <sstream>

int main() {
  std::string str{"12"};
  std::istringstream iss(str);
  int i{0};
  iss >> i;
  if (iss.bad()) {
    throw std::runtime_error("String stream corrupted.");
  }
  if (iss.fail()) {
    iss.clear();
    iss.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << "Invalid input. Please try again." << std::endl;
  } else {
    std::cout << "You entered: " << i << std::endl;
  }
  return 0;
}
#endif

#if false
#include <iostream>
#include <thread>

void Test() {
  std::cout << "Child thread: " << std::this_thread::get_id() << std::endl;
}

int main() {
  std::thread t{Test};
  std::cout << "Main thread: " << std::this_thread::get_id() << std::endl;
  t.join();
  return 0;
}
#endif

#if false
#include <iostream>
#include <string>
#include <thread>

void Test(int val, std::string& str, int* ptr) {
  std::cout << val << std::endl;
  std::cout << str << std::endl;
  std::cout << *ptr << std::endl;
}

int main() {
  int val{10};
  std::string str{"Hello, World!"};
  std::thread t(Test, val, std::ref(str), &val);
  t.join();
  return 0;
}
#endif

#if false
#include <iostream>
#include <string>

double Divide(double divisior, double dividend) {
  if (dividend == 0) {
    throw std::runtime_error("Dividend cannot be zero.");
  }
  return divisior / dividend;
}

void InputNum(const std::string& str, double& num) {
  std::cout << str << std::endl;
  while (std::cin >> num, !std::cin.eof()) {
    if (std::cin.bad()) {
      throw std::runtime_error("IO stream corrupted.");
    }
    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cerr << "Invalid input. Please try again." << std::endl;
      continue;
    }
    break;
  }
}
#endif

#if false
#include <fstream>
#include <iostream>

int main() {
  try {
    while (true) {
      int* ptr{new int[1000]{}};
    }
  } catch (const std::bad_alloc& e) {
    std::cerr << e.what() << std::endl;
  } catch (...) {
    std::cerr << "Unknown exception." << std::endl;
  }
  return 0;
}
#endif

#if false
#include <iostream>
#include <stdexcept>
#include <vector>

int main() {
  std::vector<int> vec{1, 2, 3, 4, 5};
  try {
    vec.at(10);
  } catch (const std::out_of_range& e) {
    std::cerr << e.what() << std::endl;
  } catch (...) {
    std::cerr << "Unknown exception." << std::endl;
  }
  return 0;
}
#endif

#if false
#include <iostream>

class MyClass {
 public:
  int value;

  MyClass(int v) : value(v) {}

  operator int() const {
    std::cout << "Converting to int" << std::endl;
    return value;
  }
};

int main() {
  MyClass obj(100);
  int num = obj;
  std::cout << num << std::endl;
  return 0;
}
#endif

#if false
#include <iostream>
#include <regex>
#include <vector>

int main() {
  std::string pattern = R"(^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$)";
  std::regex reg(pattern);
  std::string text = "Contact: *** and user2@example.co.uk";

  std::smatch matches;
  std::string::const_iterator searchStart(text.cbegin());

  while (std::regex_search(searchStart, text.cend(), matches, reg)) {
    std::cout << "Found email: " << matches[0] << std::endl;
    searchStart = matches.suffix().first;
  }

  return 0;
}
#endif

#if false
#include <iostream>
#include <regex>

int main() {
  std::regex pattern(R"(\b\w+\b)");
  std::string text = "Hello std.Regex!";
  std::sregex_iterator it(text.begin(), text.end(), pattern);
  std::sregex_iterator end;

  for (; it != end; ++it) {
    std::cout << "匹配到: " << it->str() << std::endl;
  }
}
#endif

#if false
#include <iostream>
#include <regex>

int main() {
  std::string text = "2023-10-05";
  std::regex pattern(R"((\d{4})-(\d{2})-(\d{2}))");
  std::smatch matches;

  if (std::regex_match(text, matches, pattern)) {
    std::cout << "Matched: " << matches[0] << std::endl;
    std::cout << "Year: " << matches[1] << std::endl;
    std::cout << "Month: " << matches[2] << std::endl;
    std::cout << "Day: " << matches[3] << std::endl;
  }

  return 0;
}
#endif 