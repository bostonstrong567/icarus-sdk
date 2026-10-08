// /Game/UI/Settings/UMG_KeyRebindConfirmationPromptDetails.UMG_KeyRebindConfirmationPromptDetails_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_KeyRebindConfirmationPromptDetails_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Keybind_C* KeyWidget;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TB_Keybind;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FKey Key;  // 0x0278, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FKeybindContextsRowHandle OtherContext;  // 0x0290, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FKeybindingsRowHandle OtherKeybind;  // 0x02A8, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_KeyRebindConfirmationPromptDetails(int32 EntryPoint);  // parameters 0x4
};
