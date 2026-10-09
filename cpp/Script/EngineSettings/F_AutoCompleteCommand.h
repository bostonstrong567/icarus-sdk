// /Script/EngineSettings.AutoCompleteCommand
// size 0x28, declared in Engine/Source/Runtime/EngineSettings/Classes/ConsoleSettings.h

USTRUCT()
struct FAutoCompleteCommand
{
public:
    UPROPERTY(EditAnywhere, Config) FString Command;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, Config) FString Desc;  // 0x0010, size 0x10
    FColor Color;  // 0x0020, not reflected
};
