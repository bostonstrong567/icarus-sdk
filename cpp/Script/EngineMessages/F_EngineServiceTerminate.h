// /Script/EngineMessages.EngineServiceTerminate
// size 0x10, declared in Engine/Source/Runtime/EngineMessages/Public/EngineServiceMessages.h

USTRUCT()
struct FEngineServiceTerminate
{
public:
    UPROPERTY(EditAnywhere) FString UserName;  // 0x0000, size 0x10
};
