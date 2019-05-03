// Copyright (c) 2006  GeometryFactory (France). All rights reserved.
//
// This file is part of CGAL (www.cgal.org).
// You can redistribute it and/or modify it under the terms of the GNU
// General Public License as published by the Free Software Foundation,
// either version 3 of the License, or (at your option) any later version.
//
// Licensees holding a valid commercial license may use this file in
// accordance with the commercial license agreement provided with the software.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// $URL$
// $Id$
// SPDX-License-Identifier: GPL-3.0+
//
// Author(s)     : Fernando Cacciola <fernando.cacciola@geometryfactory.com>
//
#ifndef CGAL_SURFACE_MESH_SIMPLIFICATION_EDGE_COLLAPSE_VISITOR_BASE_H
#define CGAL_SURFACE_MESH_SIMPLIFICATION_EDGE_COLLAPSE_VISITOR_BASE_H

#include <CGAL/license/Surface_mesh_simplification.h>

#include <CGAL/Surface_mesh_simplification/Detail/Common.h>
#include <CGAL/Surface_mesh_simplification/Policies/Edge_collapse/Edge_profile.h>

namespace CGAL {
namespace Surface_mesh_simplification {

template<class TM_>
struct Edge_collapse_visitor_base
{
  typedef TM_                                                                   TM;
  typedef Edge_profile<TM>                                                      Profile;
  typedef boost::graph_traits<TM>                                               GraphTraits;

  typedef typename GraphTraits::edges_size_type                                 size_type;
  typedef typename GraphTraits::vertex_descriptor                               vertex_descriptor;
  typedef typename boost::property_map<TM, CGAL::vertex_point_t>::type          Vertex_point_pmap;
  typedef typename boost::property_traits<Vertex_point_pmap>::value_type        Point;
  typedef typename Kernel_traits<Point>::Kernel                                 Kernel;
  typedef typename Kernel::FT                                                   FT;

  void OnStarted(TM&) {}
  void OnFinished(TM&) {}
  void OnStopConditionReached(const Profile&) {}
  void OnCollected(const Profile&, const boost::optional<FT>&) {}
  void OnSelected(const Profile&, const boost::optional<FT>&, size_type, size_type) {}
  void OnCollapsing(const Profile&, const boost::optional<Point>&) {}
  void OnCollapsed(const Profile&, const vertex_descriptor&) {}
  void OnNonCollapsable(const Profile&) {}
};

} // namespace Surface_mesh_simplification
} // namespace CGAL

#endif // CGAL_SURFACE_MESH_SIMPLIFICATION_EDGE_COLLAPSE_VISITOR_BASE_H
