// /Script/Icarus.SettingWidget_ContinuousRange
// Derives from: USettingWidget > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x390, declared in Icarus/Source/Icarus/UI/Settings/SettingWidget_ContinuousRange.h

UCLASS(EditInlineNew)
class USettingWidget_ContinuousRange : public USettingWidget
{
public:
    UFUNCTION(BlueprintImplementableEvent) void SetApplyDuringDrag(bool bApplyDuringDrag);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void SetRange(float MinVal, float MaxVal);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void SetStepSize(float StepSize);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetValue(float Value, bool bForceRefresh);  // parameters 0x5
};
