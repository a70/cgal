
/*!
\ingroup PkgArrangement2ConceptsFunctionObjects
\cgalconcept

\refines AdaptableTernaryFunction 

\hasModel ArrangementOpenBoundaryTraits_2::Compare_x_near_limit_2 

*/

class ArrTraits::CompareXNearLimit_2 {
public:

/// \name Has Models 
/// @{

/*! 
Given two \f$ x\f$-monotone curves `xcv1` and `xcv2` and an 
enumeration `ce` that specifies either the minimum ends or the 
maximum ends of the curves where the curves have a vertical 
asymptote, compares the \f$ x\f$-coordinate of the curves near their 
respective ends. Returns `SMALLER`, `EQUAL`, or `LARGER` 
accordingly. More precisely, compares the \f$ x\f$-coordinates of the 
horizontal projection of a point \f$ p\f$ onto `xcv1` and `xcv2`. 
If `xcv1` and `xcv2` approach the bottom boundary-side, \f$ p\f$ 
is located far to the bottom, such that the result is invariant 
under a translation of \f$ p\f$ farther to the bottom. If `xcv1` 
and `xcv2` approach the top boundary-side, \f$ p\f$ is located far 
to the top in a similar manner. 
\pre The \f$ x\f$-coordinates of the limits of the curves at their respective ends are equal. That is, 
`compare_x_at_limit_2`(`xcv1`, `xcv2`, `ce`) = `EQUAL`. 
\pre `parameter_space_in_y_2`(`xcv1`, `ce`) = `parameter_space_in_y_2`(`xcv2`, `ce`). 
\pre `parameter_space_in_y_2`(`xcv1`, `ce`) \f$ \neq\f$ `ARR_INTERIOR`. 
*/ 
Comparison_result operator()(const ArrTraits::X_monotone_curve_2& xcv1, 
const ArrTraits::X_monotone_curve_2& xcv2, 
Arr_curve_end ce); 

/// @}

}; /* end ArrTraits::CompareXNearLimit_2 */

