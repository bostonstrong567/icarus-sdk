// /Script/LiveLinkInterface.LiveLinkWorldTime
// size 0x10, declared in Engine/Source/Runtime/LiveLinkInterface/Public/LiveLinkTypes.h

USTRUCT()
struct FLiveLinkWorldTime
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() double Time;  // 0x0000, size 0x8
    UPROPERTY() double Offset;  // 0x0008, size 0x8
};
