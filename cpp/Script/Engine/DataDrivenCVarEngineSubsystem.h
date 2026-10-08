// /Script/Engine.DataDrivenCVarEngineSubsystem
// Derives from: UEngineSubsystem > UDynamicSubsystem > USubsystem > UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/DataDrivenCVars/DataDrivenCVars.h

UCLASS()
class UDataDrivenCVarEngineSubsystem : public UEngineSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FOnDataDrivenCVarChanged OnDataDrivenCVarDelegate;  // 0x0030, size 0x10
};
