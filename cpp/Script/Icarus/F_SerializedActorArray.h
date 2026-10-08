// /Script/Icarus.SerializedActorArray
// size 0x20, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ActorStateRecorderComponent.h

USTRUCT()
struct FSerializedActorArray
{

    // Not reflected:
    FArrayProperty * ArrayProp;  // 0x0000
    int32 NumElements;  // 0x0008
    TArray<int,TSizedDefaultAllocator<32> > UIDs;  // 0x0010
};
