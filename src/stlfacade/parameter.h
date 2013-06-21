/*
 * Copyright (C) 2006-2013  Music Technology Group - Universitat Pompeu Fabra
 *
 * This file is part of Gaia
 *
 * Gaia is free software: you can redistribute it and/or modify it under
 * the terms of the GNU Affero General Public License as published by the Free
 * Software Foundation (FSF), either version 3 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see http://www.gnu.org/licenses/
 */
#ifndef GAIA_STL_PARAMETER_H
#define GAIA_STL_PARAMETER_H

#include <vector>
#include "origtypes.h"

namespace gaia2std {

class ParameterMap {
  DECLARE_PROXY(ParameterMap);
  friend class Analyzer;
  friend class DistanceFunction;

 public:
  ParameterMap();

  void insert(const std::string& key, const std::string& value);
  void insert(const std::string& key, float value);
  void insert(const std::string& key, std::vector<std::string> value);
  void insert(const std::string& key, std::vector<float> value);

};


} // namespace gaia2std

#endif // GAIA_STL_PARAMETER_H
