// /Game/UI/Settings/UMG_PhysicalKeyPrompt.UMG_PhysicalKeyPrompt_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2E1, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PhysicalKeyPrompt_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* LHS;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* RHS;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* ShadowRetainer;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextPrompt;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKey_C* UMG_PhysicalKey;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Hold;  // 0x0290, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FKey Physical_Key;  // 0x0298, size 0x18, named "Physical Key"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText PromptTextString;  // 0x02B0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FKey Physical_Gamepad_Key;  // 0x02C8, size 0x18, named "Physical Gamepad Key"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TextOnRight;  // 0x02E0, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_PhysicalKeyPrompt(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void KeyChanged(bool IsSet);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SwapText();
};
