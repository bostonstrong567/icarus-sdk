// /Game/UI/Components/UMG_ProgressBar.UMG_ProgressBar_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2D4, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ProgressBar_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProgressBarAnimatedLayer_C* Actual;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* BarOverlay;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProgressBarAnimatedLayer_C* Damage;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProgressBarAnimatedLayer_C* Heal;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBar;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float In_Height_Override;  // 0x0290, size 0x4, named "In Height Override"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float In_Width_Override;  // 0x0294, size 0x4, named "In Width Override"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* ColorCurve;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor ProgressUpColour;  // 0x02A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor ProgressDownColour;  // 0x02B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor DamageColour;  // 0x02C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InitialPercentage;  // 0x02D0, size 0x4

    UFUNCTION() void ExecuteUbergraph_UMG_ProgressBar(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetStyle();
    UFUNCTION(BlueprintCallable) void SetTarget(float NewTarget, float Speed);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateWidth(float Width);  // parameters 0x4
};
