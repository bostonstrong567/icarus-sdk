// /Game/UI/Hab/DropTerminal/CustomGameSettings/UMG_CustomGameSettingsSection.UMG_CustomGameSettingsSection_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CustomGameSettingsSection_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Contents;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SectionHeading;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ECustomGameStatCategory SectionType;  // 0x0278, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ECustomGameStatChangeability Context;  // 0x0279, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnSettingChanged OnSettingChanged;  // 0x0280, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasSettings;  // 0x0290, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnSettingHovered OnSettingHovered;  // 0x0298, size 0x10

    UFUNCTION(BlueprintCallable) void AddSetting(FName RowName, const FCustomGameStat& CustomGameStatData, bool CanEdit, int32 CurrentValue);  // parameters 0x90
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_CustomGameSettingsSection(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnSettingChanged__DelegateSignature(FName SettingRowName, int32 NewValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnSettingHovered__DelegateSignature(FText Text);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnSettingValueChanged(FName RowName, int32 NewValue);  // parameters 0xC
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SettingHovered(FText Text);  // parameters 0x18
};
