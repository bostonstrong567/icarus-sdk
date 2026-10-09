// /Script/Engine.DataDrivenConsoleVariableSettings
// Derives from: UDeveloperSettings > UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/DataDrivenCVars/DataDrivenCVars.h

UCLASS(Config=Engine)
class UDataDrivenConsoleVariableSettings : public UDeveloperSettings
{
public:
    UDataDrivenConsoleVariableSettings::FOnStageChanged OnStageChanged;  // 0x0038, not reflected
    UPROPERTY(EditAnywhere, Config) TArray<FDataDrivenConsoleVariable> CVarsArray;  // 0x0050, size 0x10
protected:
    TArray<FString,TSizedDefaultAllocator<32> > ShadowCVars;  // 0x0060, not reflected
};
