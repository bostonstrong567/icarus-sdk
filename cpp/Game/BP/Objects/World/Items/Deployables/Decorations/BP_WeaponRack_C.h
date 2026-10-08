// /Game/BP/Objects/World/Items/Deployables/Decorations/BP_WeaponRack.BP_WeaponRack_C
// Derives from: ABP_WeaponRackBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x798, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WeaponRack_C : public ABP_WeaponRackBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0780, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* WeaponSK1;  // 0x0788, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* WeaponSK0;  // 0x0790, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_WeaponRack(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
