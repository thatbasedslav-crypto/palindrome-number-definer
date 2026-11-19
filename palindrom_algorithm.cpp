#include <iostream>
#include <string>

bool palindrom_definer_even(int number)
{
    int definedOrNotNumber = 0;
    unsigned int number_unsigned = number*-1;
    std::string num_str = std::to_string(number_unsigned);
    int length = num_str.length();
    int rightNumber = length-1;
    int result = length/2;
    for (int i=0;i<result;i++)
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
    std::cout<<"Palindrom number?: ";
    std::cin>>input;
    bool definePalindrom = palindrom_definer_even(input);
    std::string ovResult = (definePalindrom) ? "The number is a palindrom" : "The number is not a palindrom";
    std::cout<<ovResult<<std::endl;
}