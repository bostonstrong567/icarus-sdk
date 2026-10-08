// /Game/UI/Components/DamageIndicator/UMG_DamageIndicator.UMG_DamageIndicator_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x291, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DamageIndicator_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Blink;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeOut;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Img_ProgressBar;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Rotator;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Attacker;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Deactivate;  // 0x0290, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void Delayed_Remove();  // named "Delayed Remove"
    UFUNCTION() void ExecuteUbergraph_UMG_DamageIndicator(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnFadeFinished();
    UFUNCTION(BlueprintCallable) void Refresh();
    UFUNCTION(BlueprintCallable) void TickIndicatorUpdate();
};
