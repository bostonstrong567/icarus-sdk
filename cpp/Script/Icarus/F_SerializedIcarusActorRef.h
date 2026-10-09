// /Script/Icarus.SerializedIcarusActorRef
// size 0x10, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ActorStateRecorderComponent.h

USTRUCT()
struct FSerializedIcarusActorRef
{
public:
    FProperty * PropertyRef;  // 0x0000, not reflected
    int32 IcarusUID;  // 0x0008, not reflected
    int32 ArrayIndex;  // 0x000C, not reflected
};
