// /Game/UI/Components/UMG_MeteorShowers.UMG_MeteorShowers_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MeteorShowers_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* UIBlink;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* TextBlink;  // 0x0270, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeIn;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BottomBorder;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ContainingBox;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MeteorHUD;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* MeteorIconL;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MeteorText;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* TopBorder;  // 0x02A8, size 0x8

    UFUNCTION(BlueprintCallable) void BlinkToShowShowersComing(FVector2D Direction);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void BlinkyTextThenHide(FVector2D Direction);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_MeteorShowers(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Finished_9EB29E1B48915F1A2B2E0ABDEBD3CEB6();
    UFUNCTION(BlueprintCallable) void Finished_A2518B9541AE4D63ADD0388E70CEAA65();
};
