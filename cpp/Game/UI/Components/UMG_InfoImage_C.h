// /Game/UI/Components/UMG_InfoImage.UMG_InfoImage_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2AC, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InfoImage_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* HoverAnim;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_Icon;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_Strikethrough;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ResourceAvailabilityData ResourceAvailabilityData;  // 0x0280, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ImageSize;  // 0x02A8, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_InfoImage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0xA8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseLeave(const FPointerEvent& MouseEvent);  // parameters 0x70
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
