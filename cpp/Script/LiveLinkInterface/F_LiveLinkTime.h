// /Script/LiveLinkInterface.LiveLinkTime
// size 0x18, declared in Engine/Source/Runtime/LiveLinkInterface/Public/LiveLinkTypes.h

USTRUCT()
struct FLiveLinkTime
{
    UPROPERTY(EditAnywhere) double WorldTime;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FQualifiedFrameTime SceneTime;  // 0x0008, size 0x10
};
