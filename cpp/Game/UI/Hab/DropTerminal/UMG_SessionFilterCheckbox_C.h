// /Game/UI/Hab/DropTerminal/UMG_SessionFilterCheckbox.UMG_SessionFilterCheckbox_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SessionFilterCheckbox_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button1;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CheckboxImage;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESessionFilterState Checked;  // 0x0278, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FUpdated Updated;  // 0x0280, size 0x10

    UFUNCTION() void BndEvt__UMG_Checkbox_Button1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_UMG_SessionFilterCheckbox(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ManuallyCheck(ESessionFilterState Checked);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateCheckbox();
    UFUNCTION(BlueprintCallable) void Updated__DelegateSignature(ESessionFilterState Checked, bool WasForced);  // parameters 0x2
};
