// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_Tools2d_HeaderFile
#define _TopOpeBRepBuild_Tools2d_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

class TopoDS_Wire;
class TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo;
class TopTools_ListOfShape;



class TopOpeBRepBuild_Tools2d 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   void MakeMapOfShapeVertexInfo (const TopoDS_Wire& aWire, TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo& aMap) ;
  
  Standard_EXPORT static   void DumpMapOfShapeVertexInfo (const TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo& aMap) ;
  
  Standard_EXPORT static   void Path (const TopoDS_Wire& aWire, TopTools_ListOfShape& aResList) ;




protected:





private:





};







#endif // _TopOpeBRepBuild_Tools2d_HeaderFile
