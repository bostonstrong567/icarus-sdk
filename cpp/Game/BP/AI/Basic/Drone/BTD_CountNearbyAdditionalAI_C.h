// /Game/BP/AI/Basic/Drone/BTD_CountNearbyAdditionalAI.BTD_CountNearbyAdditionalAI_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0x110, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_CountNearbyAdditionalAI_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AIType;  // 0x00A0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NearbyRange;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EMissionDifficulty, AdditionalAddsBTTaskConfig> PerDifficultyConfig;  // 0x00C0, size 0x50

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x11
};
