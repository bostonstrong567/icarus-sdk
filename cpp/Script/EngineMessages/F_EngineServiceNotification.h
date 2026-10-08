// /Script/EngineMessages.EngineServiceNotification
// size 0x18, declared in Engine/Source/Runtime/EngineMessages/Public/EngineServiceMessages.h

USTRUCT()
struct FEngineServiceNotification
{
    UPROPERTY(EditAnywhere) FString Text;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) double TimeSeconds;  // 0x0010, size 0x8
};
