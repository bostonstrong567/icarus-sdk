// /Script/AIModule.AISense_Sight
// Derives from: UAISense > UObject
// size 0x170, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISense_Sight.h

UCLASS(Config=Game)
class UAISense_Sight : public UAISense
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    TMap<unsigned int,FAISightTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned int,FAISightTarget,0> > ObservedTargets;  // 0x0080, not reflected
    TMap<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,0> > DigestedProperties;  // 0x00D0, not reflected
    int32 NextOutOfRangeIndex;  // 0x0120, not reflected
    bool bSightQueriesOutOfRangeDirty;  // 0x0124, not reflected
    TArray<FAISightQuery,TSizedDefaultAllocator<32> > SightQueriesOutOfRange;  // 0x0128, not reflected
    TArray<FAISightQuery,TSizedDefaultAllocator<32> > SightQueriesInRange;  // 0x0138, not reflected
protected:
    UPROPERTY(EditAnywhere, Config) int32 MaxTracesPerTick;  // 0x0148, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 MinQueriesPerTimeSliceCheck;  // 0x014C, size 0x4
    UPROPERTY(EditAnywhere, Config) double MaxTimeSlicePerTick;  // 0x0150, size 0x8
    UPROPERTY(EditAnywhere, Config) float HighImportanceQueryDistanceThreshold;  // 0x0158, size 0x4
    float HighImportanceDistanceSquare;  // 0x015C, not reflected
    UPROPERTY(EditAnywhere, Config) float MaxQueryImportance;  // 0x0160, size 0x4
    UPROPERTY(EditAnywhere, Config) float SightLimitQueryImportance;  // 0x0164, size 0x4
    ECollisionChannel DefaultSightCollisionChannel;  // 0x0168, not reflected

    // Virtual functions that start here:
    //   ShouldAutomaticallySeeTarget
};
