/**
 * Copyright (c) 2011-2020 Bill Greiman
 * This file is part of the SdFat library for SD memory cards.
 *
 * MIT License
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */
/**
 * \file
 * \brief BlockDeviceInterface include file.
 */
#ifndef BlockDeviceInterface_h
#define BlockDeviceInterface_h
#include <stdint.h>
#include <stddef.h>
#include "../SdFatConfig.h"
/**
 * \class BlockDeviceInterface
 * \brief BlockDeviceInterface class.
 */
class BlockDeviceInterface {
 public:
  virtual ~BlockDeviceInterface() {}
  /**
   * Check for BlockDevice busy.
   *
   * \return true if busy else false.
   */
  virtual bool isBusy() = 0;
  /**
   * Read a sector.
   *
   * \param[in] sector Logical sector to be read.
   * \param[out] dst Pointer to the location that will receive the data.
   * \return true for success or false for failure.
   */
  virtual bool readSector(uint32_t sector, uint8_t* dst) = 0;

  /**
   * Read multiple sectors.
   *
   * \param[in] sector Logical sector to be read.
   * \param[in] ns Number of sectors to be read.
   * \param[out] dst Pointer to the location that will receive the data.
   * \return true for success or false for failure.
   */
  virtual bool readSectors(uint32_t sector, uint8_t* dst, size_t ns) = 0;

  /**
   * Read multiple sectors with callback as each sector's data
   *
   * \param[in] sector Logical sector to be read.
   * \param[in] ns Number of sectors to be read.
   * \param[out] dst Pointer to the location that will receive the data.
   * \param[in] callback Function to be called with each sector's data
   * \param[in] context Pointer to be passed to the callback function
   * \return true for success or false for failure.
   */
  virtual bool readSectorsCallback(uint32_t sector, uint8_t* dst, size_t ns,
   void (*callback)(uint32_t sector, uint8_t *buf, void *context), void *context) {
     for (size_t i = 0; i < ns; i++) {
       if (!readSector(sector + i, dst)) return false;
       callback(sector + i, dst, context);
     }
     return true;
  }

  /** \return device size in sectors. */
  virtual uint32_t sectorCount() = 0;

  /** End multi-sector transfer and go to idle state.
   * \return true for success or false for failure.
   */
  virtual bool syncDevice() = 0;

  /**
   * Writes a sector.
   *
   * \param[in] sector Logical sector to be written.
   * \param[in] src Pointer to the location of the data to be written.
   * \return true for success or false for failure.
   */
  virtual bool writeSector(uint32_t sector, const uint8_t* src) = 0;

  /**
   * Write multiple sectors.
   *
   * \param[in] sector Logical sector to be written.
   * \param[in] ns Number of sectors to be written.
   * \param[in] src Pointer to the location of the data to be written.
   * \return true for success or false for failure.
   */
  virtual bool writeSectors(uint32_t sector, const uint8_t* src, size_t ns) = 0;

  /**
   * Write multiple sectors with callback for each sector's data
   *
   * \param[in] sector Logical sector to be written.
   * \param[in] ns Number of sectors to be written.
   * \param[in] callback Function to be called for each sector's data
   * \param[in] context Context to pass to callback function
   * \return true for success or false for failure.
   */
  virtual bool writeSectorsCallback(uint32_t sector, size_t ns,
   const uint8_t * (*callback)(uint32_t sector, void *context), void *context) {
     for (size_t i = 0; i < ns; i++) {
       if (!writeSector(sector + i, callback(sector + i, context))) return false;
     }
    return true;
  }
};
#endif  // BlockDeviceInterface_h
