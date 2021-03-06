// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_DataMapOfShapeDataMapOfShapeListOfShape_HeaderFile
#define _BRepFill_DataMapOfShapeDataMapOfShapeListOfShape_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_BRepFill_DataMapNodeOfDataMapOfShapeDataMapOfShapeListOfShape.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopTools_DataMapOfShapeListOfShape;
class TopTools_ShapeMapHasher;
class BRepFill_DataMapNodeOfDataMapOfShapeDataMapOfShapeListOfShape;
class BRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape;



class BRepFill_DataMapOfShapeDataMapOfShapeListOfShape  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepFill_DataMapOfShapeDataMapOfShapeListOfShape(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   BRepFill_DataMapOfShapeDataMapOfShapeListOfShape& Assign (const BRepFill_DataMapOfShapeDataMapOfShapeListOfShape& Other) ;
  BRepFill_DataMapOfShapeDataMapOfShapeListOfShape& operator = (const BRepFill_DataMapOfShapeDataMapOfShapeListOfShape& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~BRepFill_DataMapOfShapeDataMapOfShapeListOfShape()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TopoDS_Shape& K, const TopTools_DataMapOfShapeListOfShape& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TopoDS_Shape& K) ;
  
  Standard_EXPORT  const  TopTools_DataMapOfShapeListOfShape& Find (const TopoDS_Shape& K)  const;
 const  TopTools_DataMapOfShapeListOfShape& operator() (const TopoDS_Shape& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   TopTools_DataMapOfShapeListOfShape& ChangeFind (const TopoDS_Shape& K) ;
  TopTools_DataMapOfShapeListOfShape& operator() (const TopoDS_Shape& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TopoDS_Shape& K) ;




protected:





private:

  
  Standard_EXPORT BRepFill_DataMapOfShapeDataMapOfShapeListOfShape(const BRepFill_DataMapOfShapeDataMapOfShapeListOfShape& Other);




};







#endif // _BRepFill_DataMapOfShapeDataMapOfShapeListOfShape_HeaderFile
