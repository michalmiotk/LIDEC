#include <string>
#include <regex>

#include "ActionParams.hpp"

template <typename T>
class CLILoader{
    public:
        std::string capture();
        void showExampleInput();
        [[nodiscard]]
        ActionParams parse(T);
};

template <typename T>
ActionParams CLILoader<T>::parse(T someInput){
    auto regExp = std::regex("([a-zA-Z0-9]+)");
    const std::sregex_iterator end{};
    ActionParams actionParams{};
    bool firstElementFound{};
    for(std::sregex_iterator s{someInput.cbegin(), someInput.cend(), regExp}; s!=end;s++)
    {
        if(not firstElementFound){
            actionParams.action = (*s)[0].str();
            firstElementFound = true;
        }else{
            actionParams.params.push_back((*s)[0].str());
        }
    }
    return actionParams;
}
