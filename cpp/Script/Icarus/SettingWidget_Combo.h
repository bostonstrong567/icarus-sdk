// /Script/Icarus.SettingWidget_Combo
// Derives from: USettingWidget > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x390, declared in Icarus/Source/Icarus/UI/Settings/SettingWidget_Combo.h

UCLASS(EditInlineNew)
class USettingWidget_Combo : public USettingWidget
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) int32 GetValueIndex();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetHideOptions(const TArray<FText>& HideOptions);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetOptions(const TArray<FText>& Options);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetValueIndex(int32 Index);  // parameters 0x4
};
