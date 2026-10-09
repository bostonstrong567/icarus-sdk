// /Script/Icarus.PlayerReflectionAudioComponent
// Derives from: UActorComponent > UObject
// size 0x198, declared in Icarus/Source/Icarus/Audio/Player/Reflections/PlayerReflectionAudioComponent.h

UCLASS(Config=Engine)
class UPlayerReflectionAudioComponent : public UActorComponent
{
private:
    int32 CurrentTraceIndex;  // 0x00B0, not reflected
    int32 CurrentClusterIndex;  // 0x00B4, not reflected
    EAudioReflectionHitType UpTraceHitType;  // 0x00B8, not reflected
    TArray<FPlayerReflectionAudioRecord,TSizedDefaultAllocator<32> > ReflectionRecords;  // 0x00C0, not reflected
    TMap<enum EQuadDelayDirection,FQuadDelayRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum EQuadDelayDirection,FQuadDelayRecord,0> > QuadDelayRecords;  // 0x00D0, not reflected
    FCollisionQueryParams CollisionQueryParams;  // 0x0120, not reflected
    bool bDebugIsEnabled;  // 0x0190, not reflected
};
