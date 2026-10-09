// /Script/Engine.DebugTextInfo
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/DebugTextInfo.h

USTRUCT()
struct FDebugTextInfo
{
public:
    UPROPERTY() AActor* SrcActor;  // 0x0000, size 0x8
    UPROPERTY() FVector SrcActorOffset;  // 0x0008, size 0xC
    UPROPERTY() FVector SrcActorDesiredOffset;  // 0x0014, size 0xC
    UPROPERTY() FString DebugText;  // 0x0020, size 0x10
    UPROPERTY(Transient) float TimeRemaining;  // 0x0030, size 0x4
    UPROPERTY() float Duration;  // 0x0034, size 0x4
    UPROPERTY() FColor TextColor;  // 0x0038, size 0x4
    UPROPERTY() uint8 bAbsoluteLocation : 1;  // 0x003C, mask 0x01
    UPROPERTY() uint8 bKeepAttachedToActor : 1;  // 0x003C, mask 0x02
    UPROPERTY() uint8 bDrawShadow : 1;  // 0x003C, mask 0x04
    UPROPERTY() FVector OrigActorLocation;  // 0x0040, size 0xC
    UPROPERTY() UFont* Font;  // 0x0050, size 0x8
    UPROPERTY() float FontScale;  // 0x0058, size 0x4
};
