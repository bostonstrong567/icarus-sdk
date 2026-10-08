// /Game/UI/World/UMG_DeployableRotationIndicator.UMG_DeployableRotationIndicator_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x28C, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DeployableRotationIndicator_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Grow;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Rotate;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_AngleSnap;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_Rotator;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DrawSize;  // 0x0288, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_DeployableRotationIndicator(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Hide();
    UFUNCTION(BlueprintCallable) void Show(float DesiredSize, bool ShowAngleSnap);  // parameters 0x5
};
