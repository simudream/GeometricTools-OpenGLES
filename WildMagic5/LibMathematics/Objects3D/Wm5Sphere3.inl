// Geometric Tools, LLC
// Copyright (c) 1998-2013
// Distributed under the Boost Software License, Version 1.0.
// http://www.boost.org/LICENSE_1_0.txt
// http://www.geometrictools.com/License/Boost/LICENSE_1_0.txt
//
// File Version: 5.0.0 (2010/01/01)

//----------------------------------------------------------------------------
template <typename Real>
Sphere3<Real>::Sphere3 ()
{
}
//----------------------------------------------------------------------------
template <typename Real>
Sphere3<Real>::~Sphere3 ()
{
}
//----------------------------------------------------------------------------
template <typename Real>
Sphere3<Real>::Sphere3 (const Vector3<Real>& center, Real radius)
    :
    Center(center),
    Radius(radius)
{
}
//----------------------------------------------------------------------------
