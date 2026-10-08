// /Game/UI/Components/UMG_Card.UMG_Card_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Card_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_251;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox_45;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D ImageResolution;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_CardPreview_C* CardPreview;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CardActive;  // 0x0288, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator CardRotation;  // 0x028C, size 0xC

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Card(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnVisibilityChanged_Event_0(ESlateVisibility InVisibility);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateCard(UMaterialInterface* Material, FText Text);  // parameters 0x20
};
