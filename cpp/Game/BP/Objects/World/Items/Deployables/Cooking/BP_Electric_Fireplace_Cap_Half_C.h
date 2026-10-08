// /Game/BP/Objects/World/Items/Deployables/Cooking/BP_Electric_Fireplace_Cap_Half.BP_Electric_Fireplace_Cap_Half_C
// Derives from: ABP_Fireplace_Chimney_Cap_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x748, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Electric_Fireplace_Cap_Half_C : public ABP_Fireplace_Chimney_Cap_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Fireplace_Electric_CAP;  // 0x0740, size 0x8

    UFUNCTION(BlueprintCallable) void UpdateEffects(bool Active);  // parameters 0x1
};
