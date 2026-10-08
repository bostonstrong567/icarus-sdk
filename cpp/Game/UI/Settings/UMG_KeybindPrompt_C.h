// /Game/UI/Settings/UMG_KeybindPrompt.UMG_KeybindPrompt_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2F8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_KeybindPrompt_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_0;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* LHS;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* RHS;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* ShadowRetainer;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextPrompt;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Keybind_C* UMG_Keybind;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Hold;  // 0x0298, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FKeybindingsRowHandle Keybinding;  // 0x029C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TextOnRight;  // 0x02B4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText OverrideText;  // 0x02B8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TextColour;  // 0x02D0, size 0x28

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_KeybindPrompt(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void KeyChanged(bool IsSet);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SwapText();
    UFUNCTION(BlueprintCallable) void UpdateText(FText InText);  // parameters 0x18
};
