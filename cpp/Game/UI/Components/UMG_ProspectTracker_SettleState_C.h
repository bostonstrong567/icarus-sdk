// /Game/UI/Components/UMG_ProspectTracker_SettleState.UMG_ProspectTracker_SettleState_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x380, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ProspectTracker_SettleState_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* SettleBorder;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush SettleMaterial;  // 0x0268, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Settled;  // 0x02F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush UnSettledMaterial;  // 0x02F8, size 0x88

    UFUNCTION(BlueprintCallable, BlueprintPure) FSlateBrush SettleStateChange();  // parameters 0x88
};
