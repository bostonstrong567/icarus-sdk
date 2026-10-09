// /Script/EngineMessages.EngineServiceExecuteCommand
// size 0x20, declared in Engine/Source/Runtime/EngineMessages/Public/EngineServiceMessages.h

USTRUCT()
struct FEngineServiceExecuteCommand
{
public:
    UPROPERTY(EditAnywhere) FString Command;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) FString UserName;  // 0x0010, size 0x10
};
