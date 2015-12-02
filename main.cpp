#include "testdrawcanvasmenudialog.h"
#include "trace.h"
#include "xml.h"

int main(int argc, char* argv[])
{
  START_TRACE();
  #ifndef NDEBUG
  ribi::xml::Test();
  #endif
  const std::vector<std::string> args { ribi::MenuDialog::ConvertArguments(argc,argv) };
  return ribi::TestDrawCanvasMenuDialog().Execute(args);
}
