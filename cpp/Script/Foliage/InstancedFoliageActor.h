// /Script/Foliage.InstancedFoliageActor
// Derives from: AActor > UObject
// size 0x270, declared in Engine/Source/Runtime/Foliage/Public/InstancedFoliageActor.h

UCLASS(NotPlaceable, MinimalAPI, Config=Engine)
class AInstancedFoliageActor : public AActor
{
public:
    TMap<UFoliageType *,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UFoliageType *,TUniqueObj<FFoliageInfo>,0> > FoliageInfos;  // 0x0220, not reflected
};
