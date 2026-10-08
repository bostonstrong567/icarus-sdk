// /Game/UI/Components/UMG_InventoryItemLight_Details.UMG_InventoryItemLight_Details_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2D8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InventoryItemLight_Details_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AngleImage;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Frame;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Frame_1;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_0;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* LightKey;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* LightKeyText;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* LightSlotDetails;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor UnEquippedColour;  // 0x02A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor EquippedColour;  // 0x02B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FKeybindingsRowHandle LightKeybinding;  // 0x02C0, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_InventoryItemLight_Details(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InputTypeChanged(EInputTypeSetting Value);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetStyle(bool Equipped);  // parameters 0x1
};
