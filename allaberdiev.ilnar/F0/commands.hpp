#ifndef COMMANDS_HPP
#define COMMANDS_HPP
#include <iosfwd>
#include <map>
#include <string>
#include <vector>

namespace allaberdiev
{
 void createDict(std::istream&, std::map< std::string, std::map< std::string, std::vector< std::string > > >&);
}
#endif