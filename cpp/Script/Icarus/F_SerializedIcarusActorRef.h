// /Script/Icarus.SerializedIcarusActorRef
// size 0x10, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ActorStateRecorderComponent.h

USTRUCT()
struct FSerializedIcarusActorRef
{

    // Not reflected:
    FProperty * PropertyRef;  // 0x0000
    int32 IcarusUID;  // 0x0008
    int32 ArrayIndex;  // 0x000C
};
