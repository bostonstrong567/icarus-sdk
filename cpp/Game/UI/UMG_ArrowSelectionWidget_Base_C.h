// /Game/UI/UMG_ArrowSelectionWidget_Base.UMG_ArrowSelectionWidget_Base_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ArrowSelectionWidget_Base_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FText> Options;  // 0x0268, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SelectedOptionIndex;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSelectionUpdated SelectionUpdated;  // 0x0280, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasNoneOption;  // 0x0290, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText SettingName;  // 0x0298, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ECharacterCustomisationContext> CustomisationContextWhitelist;  // 0x02B0, size 0x10

    UFUNCTION(BlueprintCallable) void AddOption(FText Option, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void ChangeSelection(int32 Index);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ClearOptions(bool ClearIndex);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ArrowSelectionWidget_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSelectedOption(FText& SelectedRow);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SelectionUpdated__DelegateSignature();
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
};
