// /Script/Landscape.LandscapeGizmoActiveActor
// Derives from: ALandscapeGizmoActor > AActor > UObject
// size 0x270, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeGizmoActiveActor.h

UCLASS(NotPlaceable, MinimalAPI, Config=Engine)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
    TMap<FIntPoint,FGizmoSelectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FGizmoSelectData,0> > SelectedData;  // 0x0220, not reflected
};
