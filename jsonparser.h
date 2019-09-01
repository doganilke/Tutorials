#pragma once
#include "json.hpp"
using json = nlohmann::json;
class JsonParser
{
public:
    JsonParser();
    void make_pretty_json();
    void generateJson();
private:
    json m_json;


};
