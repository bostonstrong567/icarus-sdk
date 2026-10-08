// /Game/BP/Objects/World/Items/Deployables/BP_DeployablePreview_SettlementBuilding.BP_DeployablePreview_SettlementBuilding_C
// Derives from: ABP_DeployablePreview_C > AStaticMeshActor > AActor > UObject
// size 0x290, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DeployablePreview_SettlementBuilding_C : public ABP_DeployablePreview_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* BufferMeshPreview;  // 0x0288, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) void CalcExtentOffset(FVector& ExtentOffset) const;  // parameters 0xC
};
