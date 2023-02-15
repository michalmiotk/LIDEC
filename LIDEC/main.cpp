#include "CLILoader.hpp"

using namespace std::literals::string_literals;

int main(){
    CLILoader<std::string> cLILoader;
    auto a = cLILoader.parse("siema tu ff"s);
    auto b = cLILoader.parse("siema"s);
    auto c = cLILoader.parse("siema tu ff "s);
}