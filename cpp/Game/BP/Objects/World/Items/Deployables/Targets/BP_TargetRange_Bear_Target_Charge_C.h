// /Game/BP/Objects/World/Items/Deployables/Targets/BP_TargetRange_Bear_Target_Charge.BP_TargetRange_Bear_Target_Charge_C
// Derives from: ABP_TargetRange_Bear_Target_C > ATargetRangeTarget > AIcarusActor > AActor > UObject
// size 0x330, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_TargetRange_Bear_Target_Charge_C : public ABP_TargetRange_Bear_Target_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cylinder;  // 0x0328, size 0x8

    UFUNCTION(BlueprintCallable) void PerformMovement(float DeltaTime);  // parameters 0x4
};
