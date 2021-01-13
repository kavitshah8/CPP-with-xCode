#include <vector>
#include <map>

#include <nlohmann/json.hpp>
using json = nlohmann::json;
using namespace std;

// var endorsements = [
//   { skill: 'javascript', user: 'Chad' },
//   { skill: 'javascript', user: 'Bill' },
//   { skill: 'javascript', user: 'Sue' },
//   { skill: 'html', user: 'Sue HTML' },
//   { skill: 'css', user: 'Sue CSS' },
//   { skill: 'css', user: 'Bill CSS' }
// ];

int main () {
    json endorsements = json::array({
        { "skill", "javascript", "user", "Chad" },
        { "skill", "javascript", "user", "Bill" },
        { "skill", "javascript", "user", "Sue" },
        { "skill", "html", "user", "Sue" },
        { "skill", "css", "user", "Sue" },
        { "skill", "css", "user", "Bill" }
    });

    std::vector<std::map<string, string>> map;

    return 0;    
}