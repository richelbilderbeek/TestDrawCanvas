#ifndef TESTDRAWCANVASMENUDIALOG_H
#define TESTDRAWCANVASMENUDIALOG_H

#include "menudialog.h"

namespace ribi {

///GUI independent TestDrawCanvas menu dialog
struct TestDrawCanvasMenuDialog final : public MenuDialog
{
  About GetAbout() const noexcept override;
  Help GetHelp() const noexcept override;
  std::string GetVersion() const noexcept override;
  std::vector<std::string> GetVersionHistory() const noexcept override;

  private:
  int ExecuteSpecific(const std::vector<std::string>& argv) noexcept override;

  #ifndef NDEBUG
  static void Test() noexcept;
  #endif
};

} //~namespace ribi

#endif // TESTDRAWCANVASMENUDIALOG_H
