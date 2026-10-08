// /Game/UI/Hab/DropTerminal/UMG_DropGroupAttribute.UMG_DropGroupAttribute_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2E8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DropGroupAttribute_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_59;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_Main;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_AttributeIcon;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_AttributeDesc;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsNegativeAttribute;  // 0x0288, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Soft_Texture;  // 0x0290, size 0x28, named "Soft Texture"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Text;  // 0x02B8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Popup;  // 0x02D0, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_DropGroupAttribute(int32 EntryPoint);  // parameters 0x4
};
