// /Game/UI/Components/UMG_ContextImage.UMG_ContextImage_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x4E1, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ContextImage_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* ContextImageBox;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Crosshair_C* UMG_Crosshair;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusActor* LastObject;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor ValidColour;  // 0x0288, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor InvalidColour;  // 0x02B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData HeldItem;  // 0x02D8, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentAlpha;  // 0x04C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FContextImageConditions> ContextImageQueries;  // 0x04D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ForceShowCrosshair;  // 0x04E0, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ContextImage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) EViewTraceResultPriority GetContextResultPriority(const FViewTraceResult& Result);  // parameters 0x8D
    UFUNCTION(BlueprintCallable) void SetForceShowCrosshair(bool ForceShowCrosshair);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateContext();
    UFUNCTION(BlueprintCallable) void UpdateTarget(float Alpha);  // parameters 0x4
};
