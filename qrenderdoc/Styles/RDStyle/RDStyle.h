/******************************************************************************
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Baldur Karlsson
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 ******************************************************************************/

#pragma once

#include <QPalette>
#include <QProxyStyle>
#include "Styles/RDTweakedNativeStyle/RDTweakedNativeStyle.h"

class RDStyle : public RDTweakedNativeStyle
{
private:
  Q_OBJECT
public:
  enum ColorScheme
  {
    Light,
    Dark
  };
  RDStyle(ColorScheme scheme);
  ~RDStyle();

  QRect subElementRect(SubElement element, const QStyleOption *option,
                       const QWidget *widget) const override;
  QSize sizeFromContents(ContentsType type, const QStyleOption *option, const QSize &size,
                         const QWidget *widget) const override;
  int pixelMetric(PixelMetric metric, const QStyleOption *option = NULL,
                  const QWidget *widget = NULL) const override;
  QIcon standardIcon(StandardPixmap standardIcon, const QStyleOption *option = NULL,
                     const QWidget *widget = NULL) const override;
  void drawComplexControl(ComplexControl control, const QStyleOptionComplex *option,
                          QPainter *painter, const QWidget *widget = NULL) const override;
  void drawPrimitive(PrimitiveElement element, const QStyleOption *option, QPainter *painter,
                     const QWidget *widget = NULL) const override;
  void drawControl(ControlElement control, const QStyleOption *option, QPainter *painter,
                   const QWidget *widget = NULL) const override;

protected:
};