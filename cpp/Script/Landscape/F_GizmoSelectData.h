// /Script/Landscape.GizmoSelectData
// size 0x50, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeGizmoActiveActor.h

USTRUCT()
struct FGizmoSelectData
{

    // Not reflected:
    TMap<ULandscapeLayerInfoObject *,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject *,float,0> > WeightDataMap;  // 0x0000
};
