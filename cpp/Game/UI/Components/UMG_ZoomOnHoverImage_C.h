// /Game/UI/Components/UMG_ZoomOnHoverImage.UMG_ZoomOnHoverImage_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ZoomOnHoverImage_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_Background;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* RetainerBox_Zoom;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* DynMat;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BaseScaleValue;  // 0x0280, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ZoomedScaleValue;  // 0x0284, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Image;  // 0x0288, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ZoomOnHoverImage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
