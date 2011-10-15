// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_DoubleMapNodeOfDoubleMapOfIntegerShape_HeaderFile
#define _TopOpeBRepDS_DoubleMapNodeOfDoubleMapOfIntegerShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TopOpeBRepDS_DoubleMapNodeOfDoubleMapOfIntegerShape_HeaderFile
#include <Handle_TopOpeBRepDS_DoubleMapNodeOfDoubleMapOfIntegerShape.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
class TopoDS_Shape;
class TColStd_MapIntegerHasher;
class TopTools_ShapeMapHasher;
class TopOpeBRepDS_DoubleMapOfIntegerShape;
class TopOpeBRepDS_DoubleMapIteratorOfDoubleMapOfIntegerShape;



class TopOpeBRepDS_DoubleMapNodeOfDoubleMapOfIntegerShape : public TCollection_MapNode {

public:

  
      TopOpeBRepDS_DoubleMapNodeOfDoubleMapOfIntegerShape(const Standard_Integer& K1,const TopoDS_Shape& K2,const TCollection_MapNodePtr& n1,const TCollection_MapNodePtr& n2);
  
        Standard_Integer& Key1() const;
  
        TopoDS_Shape& Key2() const;
  
        TCollection_MapNodePtr& Next2() const;




  DEFINE_STANDARD_RTTI(TopOpeBRepDS_DoubleMapNodeOfDoubleMapOfIntegerShape)

protected:




private: 


Standard_Integer myKey1;
TopoDS_Shape myKey2;
TCollection_MapNodePtr myNext2;


};

#define TheKey1 Standard_Integer
#define TheKey1_hxx <Standard_Integer.hxx>
#define TheKey2 TopoDS_Shape
#define TheKey2_hxx <TopoDS_Shape.hxx>
#define Hasher1 TColStd_MapIntegerHasher
#define Hasher1_hxx <TColStd_MapIntegerHasher.hxx>
#define Hasher2 TopTools_ShapeMapHasher
#define Hasher2_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DoubleMapNode TopOpeBRepDS_DoubleMapNodeOfDoubleMapOfIntegerShape
#define TCollection_DoubleMapNode_hxx <TopOpeBRepDS_DoubleMapNodeOfDoubleMapOfIntegerShape.hxx>
#define TCollection_DoubleMapIterator TopOpeBRepDS_DoubleMapIteratorOfDoubleMapOfIntegerShape
#define TCollection_DoubleMapIterator_hxx <TopOpeBRepDS_DoubleMapIteratorOfDoubleMapOfIntegerShape.hxx>
#define Handle_TCollection_DoubleMapNode Handle_TopOpeBRepDS_DoubleMapNodeOfDoubleMapOfIntegerShape
#define TCollection_DoubleMapNode_Type_() TopOpeBRepDS_DoubleMapNodeOfDoubleMapOfIntegerShape_Type_()
#define TCollection_DoubleMap TopOpeBRepDS_DoubleMapOfIntegerShape
#define TCollection_DoubleMap_hxx <TopOpeBRepDS_DoubleMapOfIntegerShape.hxx>

#include <TCollection_DoubleMapNode.lxx>

#undef TheKey1
#undef TheKey1_hxx
#undef TheKey2
#undef TheKey2_hxx
#undef Hasher1
#undef Hasher1_hxx
#undef Hasher2
#undef Hasher2_hxx
#undef TCollection_DoubleMapNode
#undef TCollection_DoubleMapNode_hxx
#undef TCollection_DoubleMapIterator
#undef TCollection_DoubleMapIterator_hxx
#undef Handle_TCollection_DoubleMapNode
#undef TCollection_DoubleMapNode_Type_
#undef TCollection_DoubleMap
#undef TCollection_DoubleMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif