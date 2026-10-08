// /Script/Engine.ControlChannel
// Derives from: UChannel > UObject
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Engine/ControlChannel.h

UCLASS(Transient)
class UControlChannel : public UChannel
{
public:

    // Not reflected: the engine's scripting cannot see these.
    bool bNeedsEndianInspection;  // 0x0068
    TArray<FQueuedControlMessage,TSizedDefaultAllocator<32> > QueuedMessages;  // 0x0070
};
