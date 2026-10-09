// /Script/Icarus.SettingWidget_DiscreteRange
// Derives from: USettingWidget > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x390, declared in Icarus/Source/Icarus/UI/Settings/SettingWidget_DiscreteRange.h

UCLASS(EditInlineNew)
class USettingWidget_DiscreteRange : public USettingWidget
{
public:
    UFUNCTION(BlueprintImplementableEvent) void SetOptions(const TArray<FText>& Options);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetValueIndex(int32 Index, bool bForceRefresh);  // parameters 0x5
};
