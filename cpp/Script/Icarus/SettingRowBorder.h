// /Script/Icarus.SettingRowBorder
// Derives from: UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x2A0, declared in Icarus/Source/Icarus/UI/Settings/SettingRowBorder.h

UCLASS(EditInlineNew)
class USettingRowBorder : public UIcarusWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadOnly) USettingWidget* SettingWidget;  // 0x0298, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void HideName();
    UFUNCTION(BlueprintCallable) void SetSettingWidget(USettingWidget* InSettingWidget);  // parameters 0x8
};
