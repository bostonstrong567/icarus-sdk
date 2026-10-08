// /Game/UI/Projection/W_ProjectionInterface_Spectator.W_ProjectionInterface_Spectator_C
// Derives from: UW_ProjectionInterface_C > UUserWidget > UWidget > UVisual > UObject
// size 0x2F8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_ProjectionInterface_Spectator_C : public UW_ProjectionInterface_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSet<TSoftClassPtr<UHuntingWidget>> ApporvedWidgets;  // 0x02A8, size 0x50

    UFUNCTION(BlueprintCallable, BlueprintPure) bool ProjectionApproved(UBP_UIProjectionComponent_C* Component);  // parameters 0x9
};
