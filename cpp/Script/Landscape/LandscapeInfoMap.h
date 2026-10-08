// /Script/Landscape.LandscapeInfoMap
// Derives from: UObject
// size 0x80, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeInfoMap.h

UCLASS()
class ULandscapeInfoMap : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TMap<FGuid,ULandscapeInfo *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,ULandscapeInfo *,0> > Map;  // 0x0028
    TWeakObjectPtr<UWorld,FWeakObjectPtr> World;  // 0x0078
};
