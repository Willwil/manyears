/* Copyright (C) 2006-2007 Eric Beaudry, Simon Briere, Dominic Letourneau

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
*/

#include "ImageView.h"
#include <QPixmap>
#include <QLabel>
#include "DefaultImage.xpm"

ImageView::ImageView(QWidget*parent)
    : QLabel(parent) {

    setPixmap(QPixmap (Default_xpm));
}

ImageView::~ImageView()
{          
}   

void ImageView::putImage(const QImage& image)
{
    setPixmap(QPixmap().fromImage(image));
}