// /Script/Icarus.SettingWidget
// Derives from: UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x390, declared in Icarus/Source/Icarus/UI/Settings/SettingWidget.h

UCLASS(EditInlineNew)
class USettingWidget : public UIcarusWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadOnly) USettingRowBorder* RowBorder;  // 0x02A8, size 0x8
    UPROPERTY(BlueprintReadOnly) FName SettingName;  // 0x02B0, size 0x8
    UPROPERTY(BlueprintReadOnly) FText DisplayName;  // 0x02B8, size 0x18
    UPROPERTY(BlueprintReadOnly) FText Description;  // 0x02D0, size 0x18
    UPROPERTY(BlueprintReadOnly) TMap<int32, FText> Requirements;  // 0x02E8, size 0x50
    UPROPERTY(Instanced, BlueprintReadOnly) USettingsSection* Section;  // 0x0338, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnDirtyEvent;  // 0x0298
    TFunction<void __cdecl(void)> RefreshCallback;  // 0x0340, protected
    bool bIsInitialized;  // 0x0380, protected

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Apply();
    UFUNCTION(BlueprintCallable) void Change();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnDirty();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnRefresh();
    UFUNCTION() void Refresh();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Setup();
};
