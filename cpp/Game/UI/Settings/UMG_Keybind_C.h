// /Game/UI/Settings/UMG_KeyBind.UMG_Keybind_C
// Derives from: UUMG_PhysicalKey_C > UUserWidget > UWidget > UVisual > UObject
// size 0x320, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Keybind_C : public UUMG_PhysicalKey_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FKeybindingsRowHandle Keybinding;  // 0x02F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnKeyBindChanged OnKeyBindChanged;  // 0x0310, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Keybind(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetDefaultKey(FKey& Key);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetKey(FKey& Key);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void Input_Type_Changed(EInputTypeSetting Value);  // parameters 0x1, named "Input Type Changed"
    UFUNCTION(BlueprintCallable) void OnKeyBindChanged__DelegateSignature(bool IsSet);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Set_Keybind(FKeybindingsRowHandle InKey, bool Hold);  // parameters 0x19, named "Set Keybind"
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
