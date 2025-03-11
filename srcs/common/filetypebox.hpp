/* This file is part of Nokia HEIF library
 *
 * Copyright (c) 2015-2025 Nokia Corporation and/or its subsidiary(-ies). All rights reserved.
 *
 * Contact: heif@nokia.com
 *
 * This software, including documentation, is protected by copyright controlled by Nokia Corporation and/ or its
 * subsidiaries. All rights are reserved.
 *
 * Copying, including reproducing, storing, adapting or translating, any or all of this material requires the prior
 * written consent of Nokia.
 */

#ifndef FILETYPEBOX_HPP
#define FILETYPEBOX_HPP

#include "bbox.hpp"
#include "brandandcompatiblebrandsbasebox.hpp"

/** @brief File Type Box class. Extends from Box.
 *  @details 'ftyp' box implementation as specified in the ISOBMFF specification
 *  @details Major and Compatible Brands List are present in this box.
 */

class FileTypeBox : public BrandAndCompatibleBrandsBaseBox<Box>
{
public:
    FileTypeBox();
    ~FileTypeBox() override = default;
};

#endif /* end of include guard: FILETYPEBOX_HPP */
