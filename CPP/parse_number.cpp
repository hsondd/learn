#include <iostream>
#include <vector>
#include <limits.h>

class CheckValue
{
public:
    CheckValue() = delete;
    static bool isNumber(std::string value)
    {
        for (unsigned int i = 0; i < value.length(); i++)
        {
            if (!(47 < value[i] && value[i] < 58) && value[i] != '-' && value[i] != '+')
            {
                return false;
            }
        }
        return true;
    }
    static bool hasSign(std::string value)
    {
        if (value[0] == '-' || value[0] == '+')
            return true;
        return false;
    }
    static bool isNegative(std::string value)
    {
        if (value[0] == '-')
            return true;
        return false;
    }
};

class Ilanguages
{
protected:
    std::string languages;
    std::vector<std::string> unit;
    std::vector<std::string> unit2;
    std::vector<std::string> unit3;
    std::vector<std::pair<long, std::string>> specific_case;

public:
    Ilanguages(){};
    Ilanguages(std::string i_languages) : languages(i_languages){};
    std::string mapSpecificCase(const long value, bool &ok)
    {
        ok = false;
        auto it = specific_case.begin();
        while (it != specific_case.end())
        {
            if (it->first == value)
            {
                ok = true;
                return it->second;
            }
            it++;
        }
        return "";
    }
    std::string get_languages()
    {
        return this->languages;
    }
    virtual void operate(const std::vector<std::string> input, std::string *output, bool negative) = 0;
    friend Ilanguages *make_language(std::string language);
    virtual ~Ilanguages(){};

protected:
    virtual std::string convertNameNumber(int value) = 0;
};

class Vietnamese : public Ilanguages
{

public:
    Vietnamese() : Ilanguages("VN")
    {
        unit = {"", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};
    }

    std::string convertNameNumber(int value)
    {
        if (value == 0)
            return "khong";
        if (value < 10)
        {
            return unit[value];
        }
        else if (value < 20)
        {
            return value == 10 ? "muoi" : unit[value - 10];
        }
        else if (value < 100)
        {
            return unit[value / 10] + " muoi" + ((value % 10 != 0) ? " " + convertNameNumber(value % 10) : "");
        }
        else if (value < 1000)
        {
            return convertNameNumber(value / 100) + " tram" + ((value % 100 != 0) ? " " + convertNameNumber(value % 100) : "");
        }
        else if (value < 1000000)
        {
            return convertNameNumber(value / 1000) + " nghin" + ((value % 1000 != 0) ? " " + convertNameNumber(value % 1000) : "");
        }
        else
            return convertNameNumber(value / 1000000) + " trieu" + ((value % 1000000 != 0) ? " " + convertNameNumber(value % 1000000) : "");
    }
    void operate(const std::vector<std::string> input, std::string *output, bool negative)
    {
        int value;
        if (negative)
            *output = "am " + *output;
        for (int i = input.size() - 1; i > 0; i--)
        {
            value = atoi(input[i].c_str());
            (*output).append(this->convertNameNumber(value) + " ty ");
        }
        value = atoi(input.at(0).c_str());
        if (input.size() > 1 && value == 0)
            return;
        (*output).append(this->convertNameNumber(value));
    }
    virtual ~Vietnamese(){};
};

class English : public Ilanguages
{

public:
    English() : Ilanguages("EN")
    {
        unit = {"zero", "one", "two", "three", "four",
                "five", "six", "seven", "eight", "nine"};
        unit2 = {"ten", "eleven", "twelve",
                 "thirteen", "fourteen", "fifteen", "sixteen",
                 "seventeen", "eighteen", "nineteen"};
        unit3 = {"", "", "twenty",
                 "thirty", "forty", "fifty",
                 "sixty", "seventy", "eighty",
                 "ninety"};
    }
    std::string convertNameNumber(int value)
    {
        if (value < 10)
        {
            return unit[value];
        }
        else if (value < 20)
        {
            return unit2[value - 10];
        }
        else if (value < 100)
        {
            return (value % 10 == 0) ? unit3[value / 10] : unit3[value / 10] + "-" + convertNameNumber(value % 10);
        }
        else if (value < 1000)
        {
            return convertNameNumber(value / 100) + " hundred" + ((value % 100 != 0) ? " " + convertNameNumber(value % 100) : "");
        }
        else if (value < 1000000)
        {
            return convertNameNumber(value / 1000) + " thousand" + ((value % 1000 != 0) ? " " + convertNameNumber(value % 1000) : "");
        }
        else
        {
            return convertNameNumber(value / 1000000) + " million" + ((value % 1000000 != 0) ? " " + convertNameNumber(value % 1000000) : "");
        }
    }
    void operate(const std::vector<std::string> input, std::string *output, bool negative)
    {
        int value;
        if (negative)
            *output = "negative " + *output;
        for (int i = input.size() - 1; i > 0; i--)
        {
            value = atoi(input[i].c_str());
            (*output).append(this->convertNameNumber(value) + " billion ");
        }
        value = atoi(input.at(0).c_str());
        if (input.size() > 1 && value == 0)
            return;
        (*output).append(this->convertNameNumber(value));
    }
    virtual ~English(){};
};

Ilanguages *make_language(std::string language)
{
    if (language == "VN")
    {
        return new Vietnamese();
    }
    else
        return new English();
}

class ConvertProgram
{
private:
    std::string number_value;
    Ilanguages *m_languages;

public:
    ConvertProgram(std::string i_language = "EN")
    {
        m_languages = make_language(i_language);
    }

    void set_language(std::string i_language)
    {
        if (i_language != m_languages->get_languages())
            m_languages = make_language(i_language);
    }

    void operate(const std::string input, std::string *output)
    {
        std::vector<std::string> subData;
        bool negative = CheckValue::isNegative(input);
        bool sign = CheckValue::hasSign(input);
        int input_len = input.length();
        number_value = input.substr(sign);
        int number_len = number_value.length();
        int value = 0;
        int start_pos, substrlen = 9;
        while (number_len > 0)
        {
            if (number_len - 9 > 0)
            {
                start_pos = number_len - 9;
            }
            else
            {
                start_pos = 0;
                substrlen = number_len;
            }
            std::string sub_str = number_value.substr(start_pos, substrlen);
            subData.push_back(sub_str);
            number_len = start_pos;
        }
        m_languages->operate(subData, output, negative);
    }

    ~ConvertProgram()
    {
        if (m_languages)
        {
            delete m_languages;
        }
    }
};

int main()
{
    std::cout << "Enter input: ";
    std::string output;
    long long value;
    std::cin >> value;

    // if (CheckValue::isNumber(value))
    if (!std::cin.fail())
    {
        ConvertProgram a;
        a.set_language("EN");
        a.operate(std::to_string(value), &output);
        std::cout << "==> " << output << std::endl;
    }
    else
    {
        std::cout << "input incorrect" << std::endl;
    }
    return 0;
}