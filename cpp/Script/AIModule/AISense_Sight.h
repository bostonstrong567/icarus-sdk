// /Script/AIModule.AISense_Sight
// Derives from: UAISense > UObject
// size 0x170, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISense_Sight.h

UCLASS(Config=Game)
class UAISense_Sight : public UAISense
{
public:
    UPROPERTY(EditAnywhere, Config) int32 MaxTracesPerTick;  // 0x0148, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 MinQueriesPerTimeSliceCheck;  // 0x014C, size 0x4
    UPROPERTY(EditAnywhere, Config) double MaxTimeSlicePerTick;  // 0x0150, size 0x8
    UPROPERTY(EditAnywhere, Config) float HighImportanceQueryDistanceThreshold;  // 0x0158, size 0x4
    UPROPERTY(EditAnywhere, Config) float MaxQueryImportance;  // 0x0160, size 0x4
    UPROPERTY(EditAnywhere, Config) float SightLimitQueryImportance;  // 0x0164, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    TMap<unsigned int,FAISightTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned int,FAISightTarget,0> > ObservedTargets;  // 0x0080
    TMap<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,0> > DigestedProperties;  // 0x00D0
    int32 NextOutOfRangeIndex;  // 0x0120
    bool bSightQueriesOutOfRangeDirty;  // 0x0124
    TArray<FAISightQuery,TSizedDefaultAllocator<32> > SightQueriesOutOfRange;  // 0x0128
    TArray<FAISightQuery,TSizedDefaultAllocator<32> > SightQueriesInRange;  // 0x0138
    float HighImportanceDistanceSquare;  // 0x015C, protected
    ECollisionChannel DefaultSightCollisionChannel;  // 0x0168, protected

    // Virtual functions that start here:
    //   ShouldAutomaticallySeeTarget
};
