// /Game/UI/Components/UMG_InventoryDropZone.UMG_InventoryDropZone_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x340, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InventoryDropZone_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* CornerAnimation2;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* CornerAnimation;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BG;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CornerArrow;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CornerArrow_1;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CornerArrow_2;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CornerArrow_3;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Corners;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Dropshadow;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DropZoneText;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Frame;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_433;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TextBorder;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor BorderColour_Base;  // 0x02D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor BorderColour_Hover;  // 0x02E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TextColour_Base;  // 0x02F0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TextColour_Hover;  // 0x0318, size 0x28

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_InventoryDropZone(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0xA8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseLeave(const FPointerEvent& MouseEvent);  // parameters 0x70
};
