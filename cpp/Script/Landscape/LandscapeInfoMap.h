// /Script/Landscape.LandscapeInfoMap
// Derives from: UObject
// size 0x80, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeInfoMap.h

UCLASS()
class ULandscapeInfoMap : public UObject
{
public:
    TMap<FGuid,ULandscapeInfo *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,ULandscapeInfo *,0> > Map;  // 0x0028, not reflected
    TWeakObjectPtr<UWorld,FWeakObjectPtr> World;  // 0x0078, not reflected
};
