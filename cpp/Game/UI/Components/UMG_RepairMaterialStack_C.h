// /Game/UI/Components/UMG_RepairMaterialStack.UMG_RepairMaterialStack_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x278, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RepairMaterialStack_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CountLabel;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* MaterialIcon;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* ScaleBox_TextContainer;  // 0x0270, size 0x8

    UFUNCTION(BlueprintCallable) void InitStack(FItemsStaticRowHandle Item, int32 Count);  // parameters 0x1C
};
