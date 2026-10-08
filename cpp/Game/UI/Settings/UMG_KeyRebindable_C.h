// /Game/UI/Settings/UMG_KeyRebindable.UMG_KeyRebindable_C
// Derives from: UKeyRebindableWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x2D8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_KeyRebindable_C : public UKeyRebindableWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* InteractBorder;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* RebindSwitcher;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Keybind_C* UMG_Keybind;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FKeybindingsRowHandle Key;  // 0x0288, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FBeginRebindEvent BeginRebindEvent;  // 0x02A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FEndRebindEvent EndRebindEvent;  // 0x02B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FKey PendingKey;  // 0x02C0, size 0x18

    UFUNCTION(BlueprintCallable) void BeginRebindEvent__DelegateSignature(UUMG_KeyRebindable_C* KeyWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CancelOverwriteInput();
    UFUNCTION(BlueprintCallable) void ConfirmOverwriteInput();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void EndRebindEvent__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_UMG_KeyRebindable(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetKeyIndex(int32& NewParam);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetRebindIndex(int32& NewParam);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnEndRebind();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool OnKeySet(FKey NewKey);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0xA8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseLeave(const FPointerEvent& MouseEvent);  // parameters 0x70
    UFUNCTION(BlueprintImplementableEvent) void OnStartRebind();
    UFUNCTION(BlueprintCallable) void RebindToKey(FKey NewKey, bool& Success);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void Set_Key(FKeybindingsRowHandle InKey, bool Hold);  // parameters 0x19, named "Set Key"
    UFUNCTION(BlueprintCallable) void UpdateHighlight();
};
