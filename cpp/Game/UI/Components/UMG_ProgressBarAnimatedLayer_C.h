// /Game/UI/Components/UMG_ProgressBarAnimatedLayer.UMG_ProgressBarAnimatedLayer_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x278, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ProgressBarAnimatedLayer_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ProgressBar;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Target;  // 0x0270, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Interp_Speed;  // 0x0274, size 0x4, named "Interp Speed"

    UFUNCTION() void ExecuteUbergraph_UMG_ProgressBarAnimatedLayer(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCurrent(float& Current);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void IsAnimating(bool& Animating);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTarget(float Target, float Speed);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
