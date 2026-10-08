// /Game/UI/HUD/UMG_Target.UMG_Target_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x27C, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Target_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_23;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Crosshair_C* UMG_Crosshair;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentAlpha;  // 0x0278, size 0x4

    UFUNCTION() void ExecuteUbergraph_UMG_Target(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateTarget(float Alpha);  // parameters 0x4
};
