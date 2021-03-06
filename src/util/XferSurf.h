//
// This file is released under the terms of the NASA Open Source Agreement (NOSA)
// version 1.3 as detailed in the LICENSE file which accompanies this software.
//

#ifndef VSP_XFER_SURF_H
#define VSP_XFER_SURF_H

#include "eli/code_eli.hpp"

#include "eli/geom/surface/bezier.hpp"
#include "eli/geom/surface/piecewise.hpp"

typedef eli::geom::surface::bezier<double, 3> surface_patch_type;
typedef eli::geom::surface::piecewise<eli::geom::surface::bezier, double, 3> piecewise_surface_type;

#include <string>
using std::string;

class XferSurf
{
public:

    XferSurf()
    {
    };

    ~XferSurf()
    {
    };

    bool m_FlipNormal;

    string m_GeomID;
    int m_CompIndx;
    int m_SurfIndx;

    piecewise_surface_type m_Surface;
};

#endif
