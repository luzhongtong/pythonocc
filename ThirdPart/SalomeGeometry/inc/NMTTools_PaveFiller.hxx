//  Copyright (C) 2007-2008  CEA/DEN, EDF R&D, OPEN CASCADE
//
//  Copyright (C) 2003-2007  OPEN CASCADE, EADS/CCR, LIP6, CEA/DEN,
//  CEDRAT, EDF R&D, LEG, PRINCIPIA R&D, BUREAU VERITAS
//
//  This library is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Lesser General Public
//  License as published by the Free Software Foundation; either
//  version 2.1 of the License.
//
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with this library; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
//
//  See http://www.salome-platform.org/ or email : webmaster.salome@opencascade.com
//
#ifndef _NMTTools_PaveFiller_HeaderFile
#define _NMTTools_PaveFiller_HeaderFile

#ifndef _NMTDS_PShapesDataStructure_HeaderFile
#include <NMTDS_PShapesDataStructure.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _BOPTools_PavePool_HeaderFile
#include <BOPTools_PavePool.hxx>
#endif
#ifndef _NMTTools_CommonBlockPool_HeaderFile
#include <NMTTools_CommonBlockPool.hxx>
#endif
#ifndef _BOPTools_SplitShapesPool_HeaderFile
#include <BOPTools_SplitShapesPool.hxx>
#endif
#ifndef _IntTools_Context_HeaderFile
#include <IntTools_Context.hxx>
#endif
#ifndef _BOPTools_SSIntersectionAttribute_HeaderFile
#include <BOPTools_SSIntersectionAttribute.hxx>
#endif
#ifndef _NMTTools_IndexedDataMapOfIndexedMapOfInteger_HeaderFile
#include <NMTTools_IndexedDataMapOfIndexedMapOfInteger.hxx>
#endif
#ifndef _TColStd_DataMapOfIntegerInteger_HeaderFile
#include <TColStd_DataMapOfIntegerInteger.hxx>
#endif
#ifndef _NMTDS_PIterator_HeaderFile
#include <NMTDS_PIterator.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _NMTDS_PInterfPool_HeaderFile
#include <NMTDS_PInterfPool.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TopoDS_Shape;
class BOPTools_Pave;
class IntTools_ShrunkRange;
class IntTools_Context;
class BOPTools_PavePool;
class NMTTools_CommonBlockPool;
class BOPTools_SplitShapesPool;
class BOPTools_PaveBlock;
class TopoDS_Vertex;
class NMTTools_ListOfCommonBlock;
class NMTTools_CommonBlock;
class BOPTools_IDMapOfPaveBlockIMapOfPaveBlock;
class BOPTools_IDMapOfPaveBlockIMapOfInteger;
class BooleanOperations_IndexedDataMapOfShapeInteger;
class TColStd_ListOfInteger;
class BOPTools_ListOfPaveBlock;
class TopoDS_Face;
class BOPTools_PaveSet;
class BOPTools_Curve;
class BOPTools_SSInterference;
class gp_Pnt;
class NMTTools_IndexedDataMapOfIndexedMapOfInteger;
class TopTools_ListOfShape;
class TopoDS_Edge;
class TopTools_DataMapOfShapeShape;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif


class NMTTools_PaveFiller  {

public:

    void* operator new(size_t,void* anAddress) 
      {
        return anAddress;
      }
    void* operator new(size_t size) 
      { 
        return Standard::Allocate(size); 
      }
    void  operator delete(void *anAddress) 
      { 
        if (anAddress) Standard::Free((Standard_Address&)anAddress); 
      }
 // Methods PUBLIC
 // 


Standard_EXPORT NMTTools_PaveFiller();
Standard_EXPORT virtual ~NMTTools_PaveFiller();


Standard_EXPORT   void SetCompositeShape(const TopoDS_Shape& aS) ;


Standard_EXPORT  const TopoDS_Shape& CompositeShape() const;


Standard_EXPORT   NMTDS_PShapesDataStructure DS() ;


Standard_EXPORT   NMTDS_PIterator DSIt() ;


Standard_EXPORT   NMTDS_PInterfPool IP() ;


Standard_EXPORT virtual  void Perform() ;


Standard_EXPORT   Standard_Boolean IsDone() const;


Standard_EXPORT  const IntTools_Context& Context() const;


Standard_EXPORT   IntTools_Context& ChangeContext() ;


Standard_EXPORT  const BOPTools_PavePool& PavePool() const;


Standard_EXPORT   BOPTools_PavePool& ChangePavePool() ;


Standard_EXPORT  const NMTTools_CommonBlockPool& CommonBlockPool() const;


Standard_EXPORT   NMTTools_CommonBlockPool& ChangeCommonBlockPool() ;


Standard_EXPORT  const BOPTools_SplitShapesPool& SplitShapesPool() const;


Standard_EXPORT   BOPTools_SplitShapesPool& ChangeSplitShapesPool() ;


Standard_EXPORT   Standard_Integer FindSDVertex(const Standard_Integer nV) const;


Standard_EXPORT   Standard_Integer SplitsInFace(const Standard_Integer aBid,const Standard_Integer nF1,const Standard_Integer nF2,TColStd_ListOfInteger& aLs) ;


Standard_EXPORT   Standard_Integer SplitsInFace(const Standard_Integer nE1,const Standard_Integer nF2,TColStd_ListOfInteger& aLs) ;


Standard_EXPORT   Standard_Integer SplitsOnEdge(const Standard_Integer nE1,const Standard_Integer nE2,TColStd_ListOfInteger& aLs) ;


Standard_EXPORT   Standard_Integer SplitsOnFace(const Standard_Integer nE1,const Standard_Integer nF2,TColStd_ListOfInteger& aLs) ;


Standard_EXPORT   Standard_Integer SplitsOnFace(const Standard_Integer aBid,const Standard_Integer nF1,const Standard_Integer nF2,TColStd_ListOfInteger& aLs) ;


Standard_EXPORT   Standard_Integer SplitsInFace(const Standard_Integer aBid,const Standard_Integer nF1,const Standard_Integer nF2,BOPTools_ListOfPaveBlock& aLs) ;


Standard_EXPORT   Standard_Integer SplitsInFace(const Standard_Integer nE1,const Standard_Integer nF2,BOPTools_ListOfPaveBlock& aLs) ;


Standard_EXPORT   Standard_Integer SplitsOnEdge(const Standard_Integer nE1,const Standard_Integer nE2,BOPTools_ListOfPaveBlock& aLs) ;


Standard_EXPORT   Standard_Integer SplitsOnFace(const Standard_Integer nE1,const Standard_Integer nF2,BOPTools_ListOfPaveBlock& aLs) ;


Standard_EXPORT   Standard_Integer SplitsOnFace(const Standard_Integer aBid,const Standard_Integer nF1,const Standard_Integer nF2,BOPTools_ListOfPaveBlock& aLs) ;


Standard_EXPORT   Standard_Integer SplitsFace(const Standard_Integer nF2,BOPTools_ListOfPaveBlock& aLs) ;


Standard_EXPORT   Standard_Integer SplitsFace(const Standard_Integer nF2,TColStd_ListOfInteger& aLs) ;


Standard_EXPORT   Standard_Integer CommonBlocksFace(const Standard_Integer nF,NMTTools_ListOfCommonBlock& aLCB) ;


Standard_EXPORT   void PrepareFace(const Standard_Integer nF,TopoDS_Face& aF) ;


Standard_EXPORT  const BOPTools_PaveBlock& RealPaveBlock(const BOPTools_PaveBlock& aPB) ;


Standard_EXPORT  const BOPTools_PaveBlock& RealPaveBlock(const BOPTools_PaveBlock& aPB,TColStd_ListOfInteger& aLB,Standard_Integer& aIsCommonBlock) ;


Standard_EXPORT   void RealSplitsFace(const Standard_Integer nF2,BOPTools_ListOfPaveBlock& aLs) ;


Standard_EXPORT   Standard_Boolean HasRealSplitsInOnFace(const Standard_Integer nF1,const Standard_Integer nF2) ;


Standard_EXPORT   void RealSplitsInFace(const Standard_Integer aBid,const Standard_Integer nF1,const Standard_Integer nF2,BOPTools_ListOfPaveBlock& aLs) ;


Standard_EXPORT   void RealSplitsInFace(const Standard_Integer nE1,const Standard_Integer nF2,BOPTools_ListOfPaveBlock& aLs) ;


Standard_EXPORT   void RealSplitsOnEdge(const Standard_Integer nE1,const Standard_Integer nE2,BOPTools_ListOfPaveBlock& aLs) ;


Standard_EXPORT   void RealSplitsOnFace(const Standard_Integer nE1,const Standard_Integer nF2,BOPTools_ListOfPaveBlock& aLs) ;


Standard_EXPORT   void RealSplitsOnFace(const Standard_Integer aBid,const Standard_Integer nF1,const Standard_Integer nF2,BOPTools_ListOfPaveBlock& aLs) ;


Standard_EXPORT   void PrepareSetForFace(const Standard_Integer nF1,const Standard_Integer nF2,const BOPTools_ListOfPaveBlock& aLPB,BOPTools_PaveSet& aPSF) ;


Standard_EXPORT   void PutPaveOnCurve(const BOPTools_PaveSet& aPSF,const Standard_Real aTol,BOPTools_Curve& aBC) ;


Standard_EXPORT   void PutBoundPaveOnCurve(BOPTools_Curve& aBC,BOPTools_SSInterference& aFF) ;


Standard_EXPORT   void PutBoundPaveOnCurve(const gp_Pnt& aP,const Standard_Real aT,BOPTools_Curve& aBC,BOPTools_SSInterference& aFF) ;


Standard_EXPORT   Standard_Boolean FindPave(const gp_Pnt& aP,const Standard_Real aTpV,const BOPTools_PaveSet& aPS,BOPTools_Pave& aPV) ;


Standard_EXPORT   Standard_Integer CheckIntermediatePoint(const BOPTools_PaveBlock& aPB,const BOPTools_PaveBlock& aPBR,const Standard_Real aTol) ;


Standard_EXPORT   Standard_Boolean IsExistingPaveBlock(const BOPTools_PaveBlock& aPB,const BOPTools_ListOfPaveBlock& aLPB,const Standard_Real aTol) ;


Standard_EXPORT   void MakePCurves() ;


Standard_EXPORT  const NMTTools_IndexedDataMapOfIndexedMapOfInteger& AloneVertices() const;


Standard_EXPORT   Standard_Boolean IsExistingPaveBlock(const BOPTools_PaveBlock& aPB,const TopTools_ListOfShape& aLPB,const Standard_Real aTol) ;


Standard_EXPORT   Standard_Boolean CheckCoincidence(const BOPTools_PaveBlock& aPB,const BOPTools_ListOfPaveBlock& aLPB) ;


Standard_EXPORT   Standard_Integer CheckIntermediatePoint(const BOPTools_PaveBlock& aPB,const TopoDS_Edge& aE,const Standard_Real aTol) ;


Standard_EXPORT   void SharedEdges(const Standard_Integer nF1,const Standard_Integer nF2,TColStd_ListOfInteger& aLNE,TopTools_ListOfShape& aLSE) ;


Standard_EXPORT   void FuseVertices(const TopoDS_Shape& aC,TopTools_DataMapOfShapeShape& aDMVV) const;





protected:

 // Methods PROTECTED
 // 


Standard_EXPORT virtual  void Init() ;


Standard_EXPORT virtual  void Clear() ;


Standard_EXPORT virtual  void PerformVV() ;


Standard_EXPORT virtual  void PerformVE() ;


Standard_EXPORT virtual  void PerformVF() ;


Standard_EXPORT virtual  void PerformEE() ;


Standard_EXPORT virtual  void PerformEF() ;


Standard_EXPORT virtual  void PerformFF() ;


Standard_EXPORT   void MakeSplitEdges() ;


Standard_EXPORT virtual  void PreparePaveBlocks(const TopAbs_ShapeEnum aType1,const TopAbs_ShapeEnum aType2) ;


Standard_EXPORT   void CorrectShrunkRanges(const Standard_Integer aSide,const BOPTools_Pave& aPave,IntTools_ShrunkRange& aSR) ;


Standard_EXPORT virtual  void PreparePaveBlocks(const Standard_Integer anE) ;


Standard_EXPORT virtual  void PrepareEdges() ;


Standard_EXPORT   Standard_Boolean IsSuccessorsComputed(const Standard_Integer iF1,const Standard_Integer iF2) const;


Standard_EXPORT   Standard_Boolean IsBlocksCoinside(const BOPTools_PaveBlock& aPB1,const BOPTools_PaveBlock& aPB2) const;


Standard_EXPORT   void RefinePavePool() ;


Standard_EXPORT   Standard_Integer CheckFacePaves(const TopoDS_Vertex& aV,const Standard_Integer nF) ;


Standard_EXPORT   void ReplaceCommonBlocks(const NMTTools_ListOfCommonBlock& aLCB) ;


Standard_EXPORT   void RemoveCommonBlocks(const NMTTools_ListOfCommonBlock& aLCB) ;


Standard_EXPORT   void SplitCommonBlocks(const NMTTools_ListOfCommonBlock& aLCB) ;


Standard_EXPORT   void SplitCommonBlock(const NMTTools_CommonBlock& aCB,NMTTools_ListOfCommonBlock& aLCB) ;


Standard_EXPORT   void EECommonBlocks(const BOPTools_IDMapOfPaveBlockIMapOfPaveBlock& aM) ;


Standard_EXPORT   void EFCommonBlocks(const BOPTools_IDMapOfPaveBlockIMapOfInteger& aMapCB) ;


Standard_EXPORT   void EENewVertices(const BooleanOperations_IndexedDataMapOfShapeInteger& aM) ;


Standard_EXPORT   void EENewVertices(const TopoDS_Vertex& aV,const BooleanOperations_IndexedDataMapOfShapeInteger& aM) ;


Standard_EXPORT   void EFNewVertices(const BooleanOperations_IndexedDataMapOfShapeInteger& aM) ;


Standard_EXPORT   void EFNewVertices(const TopoDS_Vertex& aV,const BooleanOperations_IndexedDataMapOfShapeInteger& aM) ;


Standard_EXPORT   void UpdateCommonBlocks() ;


Standard_EXPORT   void UpdatePaveBlocks() ;


Standard_EXPORT   Standard_Integer SplitIndex(const BOPTools_PaveBlock& aPB) const;


Standard_EXPORT   void MakeBlocks() ;


Standard_EXPORT   void PerformVF1() ;


Standard_EXPORT   void MakeAloneVertices() ;


 // Fields PROTECTED
 //
NMTDS_PShapesDataStructure myDS;
Standard_Boolean myIsDone;
Standard_Integer myNbSources;
Standard_Integer myNbEdges;
BOPTools_PavePool myPavePool;
BOPTools_PavePool myPavePoolNew;
NMTTools_CommonBlockPool myCommonBlockPool;
BOPTools_SplitShapesPool mySplitShapesPool;
IntTools_Context myContext;
BOPTools_SSIntersectionAttribute mySectionAttribute;
NMTTools_IndexedDataMapOfIndexedMapOfInteger myAloneVertices;
TColStd_DataMapOfIntegerInteger myVSD;
NMTDS_PIterator myDSIt;
TopoDS_Shape myCompositeShape;
NMTDS_PInterfPool myIP;


private: 

 // Methods PRIVATE
 // 


 // Fields PRIVATE
 //


};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif
