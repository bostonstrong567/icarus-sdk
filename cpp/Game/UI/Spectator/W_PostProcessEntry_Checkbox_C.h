// /Game/UI/Spectator/W_PostProcessEntry_Checkbox.W_PostProcessEntry_Checkbox_C
// Derives from: UW_PostProcessEntry_C > UUserWidget > UWidget > UVisual > UObject
// size 0x2D1, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_PostProcessEntry_Checkbox_C : public UW_PostProcessEntry_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCheckBox* CheckBox_200;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_2;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Name;  // 0x02B0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FontSize;  // 0x02C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TextFill;  // 0x02CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DefaultState;  // 0x02D0, size 0x1

    UFUNCTION() void BndEvt__CheckBox_200_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_W_PostProcessEntry_Checkbox(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetCheckboxState();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetSaveGameValue(FPostProcessSaveData& Value);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void InitFromDefaultValue();
    UFUNCTION(BlueprintCallable) void InitFromSaveGameValue(FPostProcessSaveData Value);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnCheckedStatedUpdated();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
