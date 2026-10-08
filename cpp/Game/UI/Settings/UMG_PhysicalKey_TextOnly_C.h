// /Game/UI/Settings/UMG_PhysicalKey_TextOnly.UMG_PhysicalKey_TextOnly_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x301, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PhysicalKey_TextOnly_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ArrowAnimation;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* KeyImage;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* TextSizeBox;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FKey PhysicalKey;  // 0x0288, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Hold;  // 0x02A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsHeld;  // 0x02A1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FKey PhysicalGamepadKey;  // 0x02A8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FKeyChanged KeyChanged;  // 0x02C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseUpdateHold;  // 0x02D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Color;  // 0x02D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BackgroundVisible;  // 0x0300, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_PhysicalKey_TextOnly(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InputTypeChanged(EInputTypeSetting Value);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void KeyChanged__DelegateSignature(bool IsSet);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Set_Key(FKey InGamepadKey, FKey InKey, bool Hold, bool& IsSet);  // parameters 0x32, named "Set Key"
};
