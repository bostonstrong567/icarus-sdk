// /Game/ThirdPartyAssets/Crosshair/UMG_Crosshair.UMG_Crosshair_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Crosshair_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Bottom;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Centre;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Left;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Overlay_44;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Right;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Top;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinSize;  // 0x0298, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxSize;  // 0x029C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Scale;  // 0x02A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* CentreTexture;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* OutsideTexture;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentAlpha;  // 0x02B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BowMode;  // 0x02BC, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UActorComponent* CrosshairProvider;  // 0x02C0, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Crosshair(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetCrosshairVisibility();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void PeriodCrosshairUpdate();
    UFUNCTION(BlueprintCallable) void ToggleBowMode(bool On);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateBowMode();
    UFUNCTION(BlueprintCallable) void UpdateCrosshair(float Alpha);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateCrosshairColors();
    UFUNCTION(BlueprintCallable) void UpdateTextures();
};
