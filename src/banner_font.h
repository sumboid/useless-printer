#pragma once
#include <string>
#include <vector>
#include "font.h"
class banner_font : public font_t {
public:
banner_font() {
{
const char* symbol[] = {
"  ###   ",
" #   #  ",
"#     # ",
"#     # ",
"#     # ",
" #   #  ",
"  ###   ",
};
font_t::add('0', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"   #    ",
"  ##    ",
" # #    ",
"   #    ",
"   #    ",
"   #    ",
" #####  ",
};
font_t::add('1', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
" #####  ",
"#     # ",
"      # ",
" #####  ",
"#       ",
"#       ",
"####### ",
};
font_t::add('2', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
" #####  ",
"#     # ",
"      # ",
" #####  ",
"      # ",
"#     # ",
" #####  ",
};
font_t::add('3', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"#       ",
"#    #  ",
"#    #  ",
"#    #  ",
"####### ",
"     #  ",
"     #  ",
};
font_t::add('4', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"####### ",
"#       ",
"#       ",
"######  ",
"      # ",
"#     # ",
" #####  ",
};
font_t::add('5', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
" #####  ",
"#     # ",
"#       ",
"######  ",
"#     # ",
"#     # ",
" #####  ",
};
font_t::add('6', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"####### ",
"#    #  ",
"    #   ",
"   #    ",
"  #     ",
"  #     ",
"  #     ",
};
font_t::add('7', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
" #####  ",
"#     # ",
"#     # ",
" #####  ",
"#     # ",
"#     # ",
" #####  ",
};
font_t::add('8', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
" #####  ",
"#     # ",
"#     # ",
" ###### ",
"      # ",
"#     # ",
" #####  ",
};
font_t::add('9', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"   #    ",
"  # #   ",
" #   #  ",
"#     # ",
"####### ",
"#     # ",
"#     # ",
};
font_t::add('a', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"   #    ",
"  # #   ",
" #   #  ",
"#     # ",
"####### ",
"#     # ",
"#     # ",
};
font_t::add('a', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"######  ",
"#     # ",
"#     # ",
"######  ",
"#     # ",
"#     # ",
"######  ",
};
font_t::add('b', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"######  ",
"#     # ",
"#     # ",
"######  ",
"#     # ",
"#     # ",
"######  ",
};
font_t::add('b', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
" #####  ",
"#     # ",
"#       ",
"#       ",
"#       ",
"#     # ",
" #####  ",
};
font_t::add('c', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
" #####  ",
"#     # ",
"#       ",
"#       ",
"#       ",
"#     # ",
" #####  ",
};
font_t::add('c', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"######  ",
"#     # ",
"#     # ",
"#     # ",
"#     # ",
"#     # ",
"######  ",
};
font_t::add('d', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"######  ",
"#     # ",
"#     # ",
"#     # ",
"#     # ",
"#     # ",
"######  ",
};
font_t::add('d', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"####### ",
"#       ",
"#       ",
"#####   ",
"#       ",
"#       ",
"####### ",
};
font_t::add('e', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"####### ",
"#       ",
"#       ",
"#####   ",
"#       ",
"#       ",
"####### ",
};
font_t::add('e', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"####### ",
"#       ",
"#       ",
"#####   ",
"#       ",
"#       ",
"#       ",
};
font_t::add('f', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"####### ",
"#       ",
"#       ",
"#####   ",
"#       ",
"#       ",
"#       ",
};
font_t::add('f', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
" #####  ",
"#     # ",
"#       ",
"#  #### ",
"#     # ",
"#     # ",
" #####  ",
};
font_t::add('g', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
" #####  ",
"#     # ",
"#       ",
"#  #### ",
"#     # ",
"#     # ",
" #####  ",
};
font_t::add('g', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"#     # ",
"#     # ",
"#     # ",
"####### ",
"#     # ",
"#     # ",
"#     # ",
};
font_t::add('h', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"#     # ",
"#     # ",
"#     # ",
"####### ",
"#     # ",
"#     # ",
"#     # ",
};
font_t::add('h', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"###     ",
" #      ",
" #      ",
" #      ",
" #      ",
" #      ",
"###     ",
};
font_t::add('i', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"###     ",
" #      ",
" #      ",
" #      ",
" #      ",
" #      ",
"###     ",
};
font_t::add('i', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"      # ",
"      # ",
"      # ",
"      # ",
"#     # ",
"#     # ",
" #####  ",
};
font_t::add('j', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"      # ",
"      # ",
"      # ",
"      # ",
"#     # ",
"#     # ",
" #####  ",
};
font_t::add('j', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"#    #  ",
"#   #   ",
"#  #    ",
"###     ",
"#  #    ",
"#   #   ",
"#    #  ",
};
font_t::add('k', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"#    #  ",
"#   #   ",
"#  #    ",
"###     ",
"#  #    ",
"#   #   ",
"#    #  ",
};
font_t::add('k', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"#       ",
"#       ",
"#       ",
"#       ",
"#       ",
"#       ",
"####### ",
};
font_t::add('l', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"#       ",
"#       ",
"#       ",
"#       ",
"#       ",
"#       ",
"####### ",
};
font_t::add('l', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"#     # ",
"##   ## ",
"# # # # ",
"#  #  # ",
"#     # ",
"#     # ",
"#     # ",
};
font_t::add('m', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"#     # ",
"##   ## ",
"# # # # ",
"#  #  # ",
"#     # ",
"#     # ",
"#     # ",
};
font_t::add('m', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"#     # ",
"##    # ",
"# #   # ",
"#  #  # ",
"#   # # ",
"#    ## ",
"#     # ",
};
font_t::add('n', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"#     # ",
"##    # ",
"# #   # ",
"#  #  # ",
"#   # # ",
"#    ## ",
"#     # ",
};
font_t::add('n', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"####### ",
"#     # ",
"#     # ",
"#     # ",
"#     # ",
"#     # ",
"####### ",
};
font_t::add('o', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"####### ",
"#     # ",
"#     # ",
"#     # ",
"#     # ",
"#     # ",
"####### ",
};
font_t::add('o', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"######  ",
"#     # ",
"#     # ",
"######  ",
"#       ",
"#       ",
"#       ",
};
font_t::add('p', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"######  ",
"#     # ",
"#     # ",
"######  ",
"#       ",
"#       ",
"#       ",
};
font_t::add('p', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
" #####  ",
"#     # ",
"#     # ",
"#     # ",
"#   # # ",
"#    #  ",
" #### # ",
};
font_t::add('q', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
" #####  ",
"#     # ",
"#     # ",
"#     # ",
"#   # # ",
"#    #  ",
" #### # ",
};
font_t::add('q', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"######  ",
"#     # ",
"#     # ",
"######  ",
"#   #   ",
"#    #  ",
"#     # ",
};
font_t::add('r', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"######  ",
"#     # ",
"#     # ",
"######  ",
"#   #   ",
"#    #  ",
"#     # ",
};
font_t::add('r', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
" #####  ",
"#     # ",
"#       ",
" #####  ",
"      # ",
"#     # ",
" #####  ",
};
font_t::add('s', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
" #####  ",
"#     # ",
"#       ",
" #####  ",
"      # ",
"#     # ",
" #####  ",
};
font_t::add('s', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"####### ",
"   #    ",
"   #    ",
"   #    ",
"   #    ",
"   #    ",
"   #    ",
};
font_t::add('t', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"####### ",
"   #    ",
"   #    ",
"   #    ",
"   #    ",
"   #    ",
"   #    ",
};
font_t::add('t', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"#     # ",
"#     # ",
"#     # ",
"#     # ",
"#     # ",
"#     # ",
" #####  ",
};
font_t::add('u', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"#     # ",
"#     # ",
"#     # ",
"#     # ",
"#     # ",
"#     # ",
" #####  ",
};
font_t::add('u', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"#     # ",
"#     # ",
"#     # ",
"#     # ",
" #   #  ",
"  # #   ",
"   #    ",
};
font_t::add('v', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"#     # ",
"#     # ",
"#     # ",
"#     # ",
" #   #  ",
"  # #   ",
"   #    ",
};
font_t::add('v', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"#     # ",
"#  #  # ",
"#  #  # ",
"#  #  # ",
"#  #  # ",
"#  #  # ",
" ## ##  ",
};
font_t::add('w', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"#     # ",
"#  #  # ",
"#  #  # ",
"#  #  # ",
"#  #  # ",
"#  #  # ",
" ## ##  ",
};
font_t::add('w', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"#     # ",
" #   #  ",
"  # #   ",
"   #    ",
"  # #   ",
" #   #  ",
"#     # ",
};
font_t::add('x', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"#     # ",
" #   #  ",
"  # #   ",
"   #    ",
"  # #   ",
" #   #  ",
"#     # ",
};
font_t::add('x', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"#     # ",
" #   #  ",
"  # #   ",
"   #    ",
"   #    ",
"   #    ",
"   #    ",
};
font_t::add('y', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"#     # ",
" #   #  ",
"  # #   ",
"   #    ",
"   #    ",
"   #    ",
"   #    ",
};
font_t::add('y', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"####### ",
"     #  ",
"    #   ",
"   #    ",
"  #     ",
" #      ",
"####### ",
};
font_t::add('z', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"####### ",
"     #  ",
"    #   ",
"   #    ",
"  #     ",
" #      ",
"####### ",
};
font_t::add('z', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"        ",
"        ",
"        ",
"        ",
"        ",
"        ",
"        ",
};
font_t::add(' ', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"###     ",
"###     ",
"###     ",
" #      ",
"        ",
"###     ",
"###     ",
};
font_t::add('!', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
" #####  ",
"#     # ",
"      # ",
"   ###  ",
"   #    ",
"        ",
"   #    ",
};
font_t::add('?', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
" #####  ",
"#     # ",
"# ### # ",
"# ### # ",
"# ####  ",
"#       ",
" #####  ",
};
font_t::add('@', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"  # #   ",
"  # #   ",
"####### ",
"  # #   ",
"####### ",
"  # #   ",
"  # #   ",
};
font_t::add('#', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
" #####  ",
"#  #  # ",
"#  #    ",
" #####  ",
"   #  # ",
"#  #  # ",
" #####  ",
};
font_t::add('$', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"###   # ",
"# #  #  ",
"### #   ",
"   #    ",
"  # ### ",
" #  # # ",
"#   ### ",
};
font_t::add('%', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"  #     ",
" # #    ",
"#   #   ",
"        ",
"        ",
"        ",
"        ",
};
font_t::add('^', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"  ##    ",
" #  #   ",
"  ##    ",
" ###    ",
"#   # # ",
"#    #  ",
" ###  # ",
};
font_t::add('&', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"        ",
" #   #  ",
"  # #   ",
"####### ",
"  # #   ",
" #   #  ",
"        ",
};
font_t::add('*', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"  ##    ",
" #      ",
"#       ",
"#       ",
"#       ",
" #      ",
"  ##    ",
};
font_t::add('(', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"##      ",
"  #     ",
"   #    ",
"   #    ",
"   #    ",
"  #     ",
"##      ",
};
font_t::add(')', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"        ",
"        ",
"        ",
"#####   ",
"        ",
"        ",
"        ",
};
font_t::add('-', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"        ",
"        ",
"        ",
"        ",
"        ",
"        ",
"####### ",
};
font_t::add('_', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"        ",
"  #     ",
"  #     ",
"#####   ",
"  #     ",
"  #     ",
"        ",
};
font_t::add('+', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"        ",
"        ",
"#####   ",
"        ",
"#####   ",
"        ",
"        ",
};
font_t::add('=', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"#       ",
" #      ",
"  #     ",
"   #    ",
"    #   ",
"     #  ",
"      # ",
};
font_t::add('\\', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"#       ",
"#       ",
"#       ",
"        ",
"#       ",
"#       ",
"#       ",
};
font_t::add('|', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"      # ",
"     #  ",
"    #   ",
"   #    ",
"  #     ",
" #      ",
"#       ",
};
font_t::add('/', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"        ",
"        ",
"        ",
"        ",
"###     ",
"###     ",
"###     ",
};
font_t::add('.', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"        ",
"        ",
"        ",
"###     ",
"###     ",
" #      ",
"#       ",
};
font_t::add(',', std::vector<std::string>(symbol, symbol + 7));
}
{
const char* symbol[] = {
"\n",
"\n",
"\n",
"\n",
"\n",
"\n",
"\n",
};
font_t::add('\n', std::vector<std::string>(symbol, symbol + 7));
}
font_t::set_height(7);
}
};
