// here we are using  two pointer to swap the word in the sentence
//  we use two pointer start and end

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseword(string &word, int start, int end)
{
    while (start < end)
    {
        swap(word[start], word[end]);
        start++;
        end--;
    }
}
string reverseWord(string input)
{
    int left = 0;
    int right = 0;
    int length = input.length();
    while (right < length)
    {
        while (right < length && input[right] != ' ')
        {
            right++;
        }
        int start = left;
        int end = right;
        reverseword(input, start, end);
        left = right;
        right = left+1;
    }
    return input;
}
int main(int argc, char const *argv[])
{
      std::string input = "Hello World, how are you?";
    std::string reversedString = reverseWord(input);
    std::cout << "Reversed String: " << reversedString << std::endl;
    return 0;

    return 0;
}
