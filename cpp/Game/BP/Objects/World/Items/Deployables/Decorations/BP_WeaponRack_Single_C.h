// /Game/BP/Objects/World/Items/Deployables/Decorations/BP_WeaponRack_Single.BP_WeaponRack_Single_C
// Derives from: ABP_WeaponRackBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x790, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WeaponRack_Single_C : public ABP_WeaponRackBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0780, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* WeaponSK1;  // 0x0788, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_WeaponRack_Single(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
