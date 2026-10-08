// /Script/EngineSettings.ConsoleSettings
// Derives from: UObject
// size 0x70, declared in Engine/Source/Runtime/EngineSettings/Classes/ConsoleSettings.h

UCLASS(Config=Input)
class UConsoleSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) int32 MaxScrollbackSize;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, Config) TArray<FAutoCompleteCommand> ManualAutoCompleteList;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FString> AutoCompleteMapPaths;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, Config) float BackgroundOpacityPercentage;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, Config) bool bOrderTopToBottom;  // 0x0054, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bDisplayHelpInAutoComplete;  // 0x0055, size 0x1
    UPROPERTY(EditAnywhere, Config) FColor InputColor;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere, Config) FColor HistoryColor;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere, Config) FColor AutoCompleteCommandColor;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere, Config) FColor AutoCompleteCVarColor;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere, Config) FColor AutoCompleteFadedColor;  // 0x0068, size 0x4
};
