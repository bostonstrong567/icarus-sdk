// /Game/BP/DropShipEditor/UMG_DropShipAttribute.UMG_DropShipAttribute_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DropShipAttribute_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0268, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock;  // 0x0270, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_178;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Name;  // 0x0280, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Value;  // 0x0298, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Value_Icon;  // 0x02B0, size 0x8, named "Value Icon"

    UFUNCTION() void ExecuteUbergraph_UMG_DropShipAttribute(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FSlateBrush Get_Icon();  // parameters 0x88
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
