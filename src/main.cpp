#include <vector>
#include "printer_func.h"
#include "builder.h"
#include "symbols.h"

int main(int argc, const char *argv[])
{
  std::vector<printer_func_t*> printers;
  printers.push_back(new printer_func_t(symbols::h, symbols::height));
  printers.push_back(new printer_func_t(symbols::e, symbols::height));
  printers.push_back(new printer_func_t(symbols::l, symbols::height));
  printers.push_back(new printer_func_t(symbols::l, symbols::height));
  printers.push_back(new printer_func_t(symbols::o, symbols::height));
  printers.push_back(new printer_func_t(symbols::space, symbols::height));
  printers.push_back(new printer_func_t(symbols::w, symbols::height));
  printers.push_back(new printer_func_t(symbols::o, symbols::height));
  printers.push_back(new printer_func_t(symbols::r, symbols::height));
  printers.push_back(new printer_func_t(symbols::l, symbols::height));
  printers.push_back(new printer_func_t(symbols::d, symbols::height));
  printers.push_back(new printer_func_t(symbols::eol, symbols::height));

  builder_t b;
 
  for(size_t j = 0; j < printers.size(); ++j)
    b.add(printers[j]);

  b.run();

  for(size_t i = 0; i < printers.size(); ++i)
    delete printers[i];
  return 0;
}
