class Solution {
public:
    std::vector<int> plusOne(std::vector<int> &digits) {

  int end = digits.size();

  for (int i = end - 1; i >= 0; i--) {

    if (i == end - 1)
      digits[i]++;

    if (digits[i] == 10) {

      digits[i] = 0;

      if (i != 0) {

        digits[i - 1]++;
      }

      else {

        digits.push_back(0);
        digits[i] = 1;
      }
    }
  }

  for(int x : digits) std::cout << "Value in list: " << x << std::endl;

  return digits;
}
};
