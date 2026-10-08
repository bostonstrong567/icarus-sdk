// /Game/BP/AI/GOAP/Actions/BP_IcarusGOAPAction_EatNearbyCarcasses.BP_IcarusGOAPAction_EatNearbyCarcasses_C
// Derives from: UBP_IcarusGOAPAction_Interact_Base_C > UBP_IcarusGOAPAction_Base_C > UIcarusGOAPAction > UObject
// size 0xE9, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPAction_EatNearbyCarcasses_C : public UBP_IcarusGOAPAction_Interact_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle ValidFoodQuery;  // 0x00A0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Array_Index;  // 0x00B8, size 0x4, named "Array Index"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AFLODTile* Tile;  // 0x00C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RecordIndex;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FLODInstanceIndex;  // 0x00CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_GOAP_Corpse_C* TargetCorpse;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxEatAmount;  // 0x00D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsEating;  // 0x00DC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle EatTimer;  // 0x00E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DidEmptyCarcass;  // 0x00E8, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ActionReset(bool Interrupted);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CheckContextualPreconditions(AIcarusNPCGOAPController* Controller) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable) void EatFromCorpse(AIcarusNPCGOAPController* Controller);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ExecutionComplete(AIcarusNPCGOAPController* Controller);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GOAPAnimNotify(FString NotifyName, AIcarusNPCGOAPController* Controller);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCorpseMoveLocation(AActor* InActor, FVector& WorldLocation) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable) void GetInteractLocation(AIcarusNPCGOAPController* ForController, FVector& OutLocation, bool& Success);  // parameters 0x15
    UFUNCTION(BlueprintCallable) bool IsCorpseValid(ABP_GOAP_Corpse_C* Target) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable) void IsPointUnderwater(FVector InLocation, bool& IsUnderwater) const;  // parameters 0xD
};
