// /Script/Engine.DataDrivenConsoleVariableSettings
// Derives from: UDeveloperSettings > UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/DataDrivenCVars/DataDrivenCVars.h

UCLASS(Config=Engine)
class UDataDrivenConsoleVariableSettings : public UDeveloperSettings
{
public:
    UPROPERTY(EditAnywhere, Config) TArray<FDataDrivenConsoleVariable> CVarsArray;  // 0x0050, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    UDataDrivenConsoleVariableSettings::FOnStageChanged OnStageChanged;  // 0x0038
    TArray<FString,TSizedDefaultAllocator<32> > ShadowCVars;  // 0x0060, protected
};
