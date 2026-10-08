// /Script/Icarus.PlayerReflectionAudioComponent
// Derives from: UActorComponent > UObject
// size 0x198, declared in Icarus/Source/Icarus/Audio/Player/Reflections/PlayerReflectionAudioComponent.h

UCLASS(Config=Engine)
class UPlayerReflectionAudioComponent : public UActorComponent
{
public:

    // Not reflected: the engine's scripting cannot see these.
    int32 CurrentTraceIndex;  // 0x00B0, private
    int32 CurrentClusterIndex;  // 0x00B4, private
    EAudioReflectionHitType UpTraceHitType;  // 0x00B8, private
    TArray<FPlayerReflectionAudioRecord,TSizedDefaultAllocator<32> > ReflectionRecords;  // 0x00C0, private
    TMap<enum EQuadDelayDirection,FQuadDelayRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum EQuadDelayDirection,FQuadDelayRecord,0> > QuadDelayRecords;  // 0x00D0, private
    FCollisionQueryParams CollisionQueryParams;  // 0x0120, private
    bool bDebugIsEnabled;  // 0x0190, private
};
