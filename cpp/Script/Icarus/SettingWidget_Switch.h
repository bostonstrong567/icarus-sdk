// /Script/Icarus.SettingWidget_Switch
// Derives from: USettingWidget > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x390, declared in Icarus/Source/Icarus/UI/Settings/SettingWidget_Switch.h

UCLASS(EditInlineNew)
class USettingWidget_Switch : public USettingWidget
{
public:
    UFUNCTION(BlueprintImplementableEvent) void SetLabels(const TArray<FText>& Labels);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetValueIndex(int32 Index);  // parameters 0x4
};
