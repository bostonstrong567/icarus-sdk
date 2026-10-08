// /Game/UI/Hunting/UMG_StealthHitIndicator.UMG_StealthHitIndicator_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x279, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_StealthHitIndicator_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Pulse;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StealthDamageText;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EStealthAttackType StealthType;  // 0x0278, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_StealthHitIndicator(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnAnimComplete();
};
