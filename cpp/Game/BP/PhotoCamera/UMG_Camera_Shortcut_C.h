// /Game/BP/PhotoCamera/UMG_Camera_Shortcut.UMG_Camera_Shortcut_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Camera_Shortcut_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_ActionName;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Key;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ActionName;  // 0x0278, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FKeybindingsRowHandle Keybinding;  // 0x0290, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText FallbackKeyName;  // 0x02A8, size 0x18

    UFUNCTION() void ExecuteUbergraph_UMG_Camera_Shortcut(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
