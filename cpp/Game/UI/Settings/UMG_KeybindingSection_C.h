// /Game/UI/Settings/UMG_KeybindingSection.UMG_KeybindingSection_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_KeybindingSection_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* KeybindArea;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Title;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FKeybindContextsRowHandle Context;  // 0x0278, size 0x18

    UFUNCTION(BlueprintCallable) void Add_Keybinding(UUMG_Keybinding_C* Keybind_Widget);  // parameters 0x8, named "Add Keybinding"
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_KeybindingSection(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Setup(FKeybindContextsRowHandle Context);  // parameters 0x18
};
