// /Game/BP/Objects/World/Items/Deployables/Decorations/BP_WeaponRack_T3.BP_WeaponRack_T3_C
// Derives from: ABP_WeaponRack_Single_C > ABP_WeaponRackBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WeaponRack_T3_C : public ABP_WeaponRack_Single_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera_0;  // 0x0790, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* WeaponSK1_0;  // 0x0798, size 0x8
};
