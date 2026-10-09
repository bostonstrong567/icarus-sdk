// /Script/Landscape.GizmoSelectData
// size 0x50, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeGizmoActiveActor.h

USTRUCT()
struct FGizmoSelectData
{
public:
    TMap<ULandscapeLayerInfoObject *,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject *,float,0> > WeightDataMap;  // 0x0000, not reflected
};
