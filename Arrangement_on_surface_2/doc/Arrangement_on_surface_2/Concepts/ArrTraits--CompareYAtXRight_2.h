
/*!
\ingroup PkgArrangement2ConceptsFunctionObjects
\cgalconcept

\refines AdaptableTernaryFunction 

\hasModel ArrangementBasicTraits_2::Compare_y_at_x_right_2 

*/

class ArrTraits::CompareYAtXRight_2 {
public:

/// \name Has Models 
/// @{

/*! 
accepts two \f$ x\f$-monotone curves `xc1` and `xc2` 
that have a common left endpoint `p`, and returns `SMALLER, EQUAL` or `LARGER` according to the relative position of the two 
curves immediately to the right of \f$ p\f$. Note that in case one of the 
\f$ x\f$-monotone curves is a vertical segment emanating upward from 
`p`, it is always considered to be <I>above</I> the other curve. 
*/ 
Comparison_result operator()(ArrTraits::X_monotone_curve_2 xc1, 
ArrTraits::X_monotone_curve_2 xc2, 
ArrTraits::Point_2 p); 

/// @}

}; /* end ArrTraits::CompareYAtXRight_2 */

