// /Game/UI/UMG_CharacterSetting_GridBase.UMG_CharacterSetting_GridBase_C
// Derives from: UUMG_CharacterSetting_Base_C > UUserWidget > UWidget > UVisual > UObject
// size 0x2F0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CharacterSetting_GridBase_C : public UUMG_CharacterSetting_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* OptionsGrid;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_SettingName;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GridItemWidth;  // 0x02E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumColumns;  // 0x02EC, size 0x4

    UFUNCTION(BlueprintCallable) UUMG_ToggleButton_ColorSelect_C* AddNewGridItem(FCharacterCreationDataRowHandle CharacterCustomisationRow, float WidthOverride, int32 RowLength);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void AddOption(FRowHandle Option, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void ClearOptions(bool ClearIndex);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_UMG_CharacterSetting_GridBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetToggleButtonAtIndex(int32 OptionIndex, UUMG_ToggleButton_ColorSelect_C*& Button, bool& Success);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void OnGridSelectionUpdated(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
