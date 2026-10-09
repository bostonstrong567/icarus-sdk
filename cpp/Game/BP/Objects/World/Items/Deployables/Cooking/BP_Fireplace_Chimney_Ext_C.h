// /Game/BP/Objects/World/Items/Deployables/Cooking/BP_Fireplace_Chimney_Ext.BP_Fireplace_Chimney_Ext_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x722, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Fireplace_Chimney_Ext_C : public ABP_DeployableBase_C
{
public:
    UFUNCTION(BlueprintCallable) void GetChildCap(ABP_DeployableBase_C*& ChildCap);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetParentFireplace(ABP_DeployableBase_C*& Parent);  // parameters 0x8
};
