// /Script/Engine.ScreenMessageString
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Engine/Engine.h

USTRUCT()
struct FScreenMessageString
{
public:
    UPROPERTY(Transient) uint64 Key;  // 0x0000, size 0x8
    UPROPERTY(Transient) FString ScreenMessage;  // 0x0008, size 0x10
    UPROPERTY(Transient) FColor DisplayColor;  // 0x0018, size 0x4
    UPROPERTY(Transient) float TimeToDisplay;  // 0x001C, size 0x4
    UPROPERTY(Transient) float CurrentTimeDisplayed;  // 0x0020, size 0x4
    UPROPERTY(Transient) FVector2D TextScale;  // 0x0024, size 0x8
};
