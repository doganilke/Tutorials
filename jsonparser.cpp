#include "json.hpp"
#include "jsonparser.h"
#include <fstream>
#include <iostream>
#include <iomanip>
JsonParser::JsonParser()
{

}

void JsonParser::make_pretty_json()
{
    std::ifstream i("example_1.json");
    json j;
    i >> j;
    std::ofstream o("pretty.json");
    o << std::setw(4) << j << std::endl;
}

void JsonParser::generateJson()
{
    json j2 = {
      {"pi", 3.141},
      {"happy", true},
      {"name", "Niels"},
      {"nothing", nullptr},
      {"answer", {
        {"everything", 42}
      }},
      {"list", {1, 0, 2}},
      {"object", {
        {"currency", "USD"},
        {"value", 42.99}
      }}
    };
}
