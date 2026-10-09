// /Script/Icarus.SerializedActorArray
// size 0x20, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ActorStateRecorderComponent.h

USTRUCT()
struct FSerializedActorArray
{
public:
    FArrayProperty * ArrayProp;  // 0x0000, not reflected
    int32 NumElements;  // 0x0008, not reflected
    TArray<int,TSizedDefaultAllocator<32> > UIDs;  // 0x0010, not reflected
};
