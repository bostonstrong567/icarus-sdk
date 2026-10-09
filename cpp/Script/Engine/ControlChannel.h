// /Script/Engine.ControlChannel
// Derives from: UChannel > UObject
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Engine/ControlChannel.h

UCLASS(Transient)
class UControlChannel : public UChannel
{
public:
    bool bNeedsEndianInspection;  // 0x0068, not reflected
    TArray<FQueuedControlMessage,TSizedDefaultAllocator<32> > QueuedMessages;  // 0x0070, not reflected
};
