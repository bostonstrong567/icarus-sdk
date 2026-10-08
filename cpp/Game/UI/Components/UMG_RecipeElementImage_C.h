// /Game/UI/Components/UMG_RecipeElementImage.UMG_RecipeElementImage_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RecipeElementImage_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CountText;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* RecipeImage;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox_0;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Image;  // 0x0280, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Size;  // 0x02A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Count;  // 0x02AC, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_RecipeElementImage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
