// Aseprite UI Library
// Copyright (C) 2025  Igara Studio S.A.
// Copyright (C) 2001-2015  David Capello
//
// This file is released under the terms of the MIT license.
// Read LICENSE.txt for more information.

#ifndef UI_SIZE_HINT_EVENT_H_INCLUDED
#define UI_SIZE_HINT_EVENT_H_INCLUDED
#pragma once

#include "gfx/size.h"
#include "ui/event.h"

namespace ui {

class Widget;

class SizeHintEvent : public Event {
public:
  SizeHintEvent(Widget* source, const gfx::Size& fitIn);

  const gfx::Size& fitInSize() const { return m_fitIn; }
  int fitInWidth() const { return m_fitIn.w; }
  int fitInHeight() const { return m_fitIn.h; }

  const gfx::Size& sizeHint() const { return m_sizeHint; }
  void setSizeHint(const gfx::Size& sz);
  void setSizeHint(int w, int h);

private:
  gfx::Size m_fitIn;
  gfx::Size m_sizeHint;
};

} // namespace ui

#endif
