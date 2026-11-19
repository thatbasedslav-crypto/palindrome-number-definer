#include <iostream>
#include <string>

bool palindrome_definer_even(int number)
{
    int definedOrNotNumber = 0;
    std::string num_str = std::to_string(number);
    int length = num_str.length();
    int rightNumber = length-1;
    int result = length/2;
    for (int i=0;i<length/2;i++)
    {
        if (num_str[i]==num_str[rightNumber])
        {
            definedOrNotNumber++;
        } else {
            //ничего
        }
        rightNumber--;
    }
    return (result==definedOrNotNumber) ? true : false;
}

int main()
{
    int input;
    std::cout<<"Palindrome number?: ";
    std::cin>>input;
    bool definePalindrome = palindrome_definer_even(input);
    std::string ovResult = (definePalindrome) ? "The number is a palindrome" : "The number is not a palindrome";
    std::cout<<ovResult<<input<<std::endl;
}
